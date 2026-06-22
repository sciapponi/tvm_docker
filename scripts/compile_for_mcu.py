import onnx
from onnx import shape_inference
import tvm
from tvm import relay
from tvm.relay.op.contrib import cmsisnn
from tvm.relay.op.contrib.espdl import partition_for_espdl
import sys
import os
import re

# ── WORKAROUND: Patch TVM upstream bug in v0.15 dense layer compilation ───────
import tvm.topi.nn.dense
import tvm.topi.utils
tvm.topi.nn.dense.get_const_tuple = tvm.topi.utils.get_const_tuple

from tvm.relay.dataflow_pattern import wildcard, is_op, DFPatternCallback, rewrite


# ── Pattern rewrite callbacks (only needed for quantized targets) ──────────────

class ConvBiasAdd(DFPatternCallback):
    def __init__(self):
        super().__init__()
        self.conv    = is_op("qnn.conv2d")(wildcard(), wildcard(),
                                           wildcard(), wildcard(),
                                           wildcard(), wildcard())
        self.bias    = wildcard()
        self.pattern = is_op("add")(self.conv, self.bias)

    def callback(self, pre, post, node_map):
        return relay.nn.bias_add(node_map[self.conv][0], node_map[self.bias][0])


class DenseBiasAdd(DFPatternCallback):
    def __init__(self):
        super().__init__()
        self.dense   = is_op("qnn.dense")(wildcard(), wildcard(),
                                          wildcard(), wildcard(),
                                          wildcard(), wildcard())
        self.bias    = wildcard()
        self.pattern = is_op("add")(self.dense, self.bias)

    def callback(self, pre, post, node_map):
        return relay.nn.bias_add(node_map[self.dense][0], node_map[self.bias][0])


class AddToBiasAddMutator(relay.ExprMutator):
    def visit_call(self, call):
        call = super().visit_call(call)
        if call.op != relay.op.get("add"):
            return call
        lhs, rhs = call.args
        def is_qnn_dense(node):
            return (
                isinstance(node, relay.Call) and
                node.op == relay.op.get("qnn.dense")
            )
        if is_qnn_dense(lhs):
            return relay.nn.bias_add(lhs, rhs)
        if is_qnn_dense(rhs):
            return relay.nn.bias_add(rhs, lhs)
        return call


# ── Target Configuration Registry ─────────────────────────────────────────────
TARGET_CONFIGS = {
    "cortex-m4": {
        "mcpu":       "cortex-m4",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m4",
        "runtime":    tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor":   tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "backend":    "cmsisnn",
        "model":      "output/stateful_model_int8.onnx",
    },
    "cortex-m7": {
        "mcpu":       "cortex-m7",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m7",
        "runtime":    tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor":   tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "backend":    "cmsisnn",
        "model":      "output/stateful_model_int8.onnx",
    },
    "cortex-m33": {
        "mcpu":       "cortex-m33+nodsp",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m33",
        "runtime":    tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor":   tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "backend":    "cmsisnn",
        "model":      "output/stateful_model_int8.onnx",
    },
    # ── ESP32-S3: generic C, no BYOC (uses int8 model) ───────────────────────
    "esp32s3": {
        "mcpu":       None,
        "target_str": "c -keys=cpu",
        "runtime":    tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor":   tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "backend":    "generic",
        "model":      "output/stateful_model_int8.onnx",
    },
    # ── ESP32-S3 + ESPDL BYOC (uses float32 model — ESPDL handles its own quantization) ──
    "esp32s3-espdl": {
        "mcpu":       None,
        "target_str": "c -keys=cpu",
        "runtime":    tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor":   tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "backend":    "espdl",
        "model":      "output/stateful_model_fp32.onnx",  # float model; ESPDL partitions float ops
    },
}

TARGET = sys.argv[1] if len(sys.argv) > 1 else "cortex-m4"
if TARGET not in TARGET_CONFIGS:
    print(f"Unknown target '{TARGET}'. Choose from: {list(TARGET_CONFIGS.keys())}")
    sys.exit(1)

cfg = TARGET_CONFIGS[TARGET]

# Allow overriding the model path from CLI: python compile.py esp32s3-espdl path/to/model.onnx
if len(sys.argv) > 2:
    cfg = dict(cfg)
    cfg["model"] = sys.argv[2]

print(f"Target  : {TARGET}  (backend: {cfg['backend']})")
print(f"Model   : {cfg['model']}")

# ── Load ONNX Model ───────────────────────────────────────────────────────────
if not os.path.exists(cfg["model"]):
    raise FileNotFoundError(
        f"Model not found: {cfg['model']}\n"
        f"For esp32s3-espdl, pass the float32 ONNX: "
        f"python compile.py esp32s3-espdl output/stateful_model_fp32.onnx"
    )

onnx_model = onnx.load(cfg["model"])
onnx_model = shape_inference.infer_shapes(onnx_model)

actual_inputs = [node.name for node in onnx_model.graph.input]
print(f"ONNX inputs: {actual_inputs}")

shape_dict = {
    name: (1, 1, 1, 784) if "frame" in name or "input" in name else (1, 64)
    for name in actual_inputs
}
print(f"Input shapes: {shape_dict}")

mod, params = relay.frontend.from_onnx(
    onnx_model,
    shape_dict,
    freeze_params=True,
)

target = tvm.target.Target(cfg["target_str"])

# ── Transforms ────────────────────────────────────────────────────────────────
with tvm.transform.PassContext(opt_level=3, config={
    "tir.disable_vectorize": True,
    "relay.ext.cmsisnn.options": {"debug_last_error": False},
}):
    mod = relay.transform.InferType()(mod)
    mod = relay.transform.FoldConstant()(mod)
    mod = relay.transform.InferType()(mod)

    # Bias-add rewrites only needed for quantized (int8) models
    if cfg["backend"] != "espdl":
        mod["main"] = rewrite(ConvBiasAdd(), mod["main"])
        mod["main"] = rewrite(DenseBiasAdd(), mod["main"])
        mod["main"] = AddToBiasAddMutator().visit(mod["main"])
        mod = relay.transform.InferType()(mod)

    # ── Diagnostic ───────────────────────────────────────────────────────────
    ir_text = mod["main"].astext(show_meta_data=False)
    if cfg["backend"] != "espdl":
        pat_add_dense = r'add\(%\d+, meta'
        pat_bias_add  = r'nn\.bias_add'
        n_bare  = len(re.findall(pat_add_dense, ir_text))
        n_biasadd = len(re.findall(pat_bias_add, ir_text))
        print(f"Remaining bare add-after-dense : {n_bare}")
        print(f"nn.bias_add nodes              : {n_biasadd}")
    print("\n" + "=" * 60)
    print("RELAY IR -- AFTER TRANSFORMS, BEFORE PARTITIONING")
    print("=" * 60)
    print(ir_text)
    print("=" * 60 + "\n")

    # ── Backend-specific partition + build ────────────────────────────────────
    if cfg["backend"] == "cmsisnn":
        mod = cmsisnn.partition_for_cmsisnn(mod, params, mcpu=cfg["mcpu"])
        mod = relay.transform.InferType()(mod)
        lib = relay.build(
            mod, target=target,
            runtime=cfg["runtime"], executor=cfg["executor"], params=params,
        )

    elif cfg["backend"] == "espdl":
        mod = partition_for_espdl(mod, params)
        mod = relay.transform.InferType()(mod)

        # Diagnostic: which functions got offloaded?
        # func.attrs is a TVM DictAttrs (not a plain dict); main func attrs is None.
        offloaded = []
        for gv, func in mod.functions.items():
            attrs    = getattr(func, "attrs", None)
            compiler = attrs["Compiler"] if (attrs is not None and "Compiler" in attrs) else None
            if compiler == "espdl":
                offloaded.append(gv.name_hint)
                print(f"  -> Offloaded to ESPDL: {gv.name_hint}")

        if not offloaded:
            print("  WARNING: No subgraphs offloaded to ESPDL.")
            print("  Make sure you are passing a float32 ONNX model, or update")
            print("  espdl_pattern_table() in espdl/__init__.py to match your IR.")

        lib = relay.build(
            mod, target=target,
            runtime=cfg["runtime"], executor=cfg["executor"], params=params,
        )

    else:  # generic — plain TVM C codegen, no BYOC
        lib = relay.build(
            mod, target=target,
            runtime=cfg["runtime"], executor=cfg["executor"], params=params,
        )

# ── Export ────────────────────────────────────────────────────────────────────
output_dir = "output"
os.makedirs(output_dir, exist_ok=True)
output_path = os.path.join(output_dir, f"model_{TARGET}.tar")
lib.export_library(output_path)
print(f"Exported -> {output_path}")
