import onnx
from onnx import shape_inference
import tvm
from tvm import relay
from tvm.relay.op.contrib import cmsisnn
import sys
import os

# ── WORKAROUND: Patch TVM upstream bug in v0.15 dense layer compilation ───────
import tvm.topi.nn.dense
import tvm.topi.utils
tvm.topi.nn.dense.get_const_tuple = tvm.topi.utils.get_const_tuple
from tvm.relay.dataflow_pattern import wildcard, is_op, DFPatternCallback, rewrite

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
        "mcpu": "cortex-m4",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m4",
        "runtime": tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor": tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "cmsisnn": True,
    },
    "cortex-m7": {
        "mcpu": "cortex-m7",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m7",
        "runtime": tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor": tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "cmsisnn": True,
    },
    "cortex-m33": {
        "mcpu": "cortex-m33+nodsp",
        "target_str": "c -keys=arm_cpu,cpu -model=cortex-m33",
        "runtime": tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor": tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "cmsisnn": True,
    },
    "esp32s3": {
        "mcpu": None,
        "target_str": "c -keys=cpu",
        "runtime": tvm.relay.backend.Runtime("crt", {"system-lib": True}),
        "executor": tvm.relay.backend.Executor("aot", {"unpacked-api": False, "interface-api": "packed"}),
        "cmsisnn": False,
    },
}

TARGET = sys.argv[1] if len(sys.argv) > 1 else "cortex-m4"
if TARGET not in TARGET_CONFIGS:
    print(f"Unknown target '{TARGET}'. Choose from: {list(TARGET_CONFIGS.keys())}")
    sys.exit(1)

cfg = TARGET_CONFIGS[TARGET]

# ── Load ONNX Model ───────────────────────────────────────────────────────────
model_path = "output/stateful_model_int8.onnx"
if not os.path.exists(model_path):
    raise FileNotFoundError(f"Missing quantized ONNX model file at: {model_path}")

print(f"📦 Loading ONNX model for execution target: {TARGET}...")
onnx_model = onnx.load(model_path)

# ── Critical: run shape inference so int8 tensor shapes are fully resolved ────
onnx_model = shape_inference.infer_shapes(onnx_model)

actual_inputs = [node.name for node in onnx_model.graph.input]
print(f"🔍 Discovered ONNX input signature names: {actual_inputs}")

shape_dict = {
    name: (1, 1, 1, 784) if "frame" in name or "input" in name else (1, 64)
    for name in actual_inputs
}
print(f"📐 Mapping target input shapes: {shape_dict}")

mod, params = relay.frontend.from_onnx(
    onnx_model,
    shape_dict,
    freeze_params=True,
)

target = tvm.target.Target(cfg["target_str"])

with tvm.transform.PassContext(opt_level=3, config={
    "tir.disable_vectorize": True,
    "relay.ext.cmsisnn.options": {"debug_last_error": False},
}):
    mod = relay.transform.InferType()(mod)
    mod = relay.transform.FoldConstant()(mod)
    mod = relay.transform.InferType()(mod)

    mod["main"] = rewrite(ConvBiasAdd(), mod["main"])
    mod["main"] = rewrite(DenseBiasAdd(), mod["main"])
    mod["main"] = AddToBiasAddMutator().visit(mod["main"])
    mod = relay.transform.InferType()(mod)

    # ── DIAGNOSTIC: print AFTER rewrites, BEFORE partitioning ────────────────
    import re
    ir_text = mod["main"].astext(show_meta_data=False)
    add_after_dense = len(re.findall(r'add\(%\d+, meta', ir_text))
    bias_add_count  = len(re.findall(r'nn\.bias_add', ir_text))
    print(f"Remaining bare add-after-dense: {add_after_dense}")
    print(f"nn.bias_add nodes: {bias_add_count}")
    print("\n" + "="*60)
    print("RELAY IR AFTER REWRITES, BEFORE PARTITIONING:")
    print("="*60)
    print(ir_text)
    print("="*60 + "\n")

    if cfg["cmsisnn"]:
        # ── TEMPORARILY DISABLED to test if ConvertLayout breaks partitioning ──
        # desired_layouts = {
        #     "nn.conv2d":     ["NHWC", "HWIO"],
        #     "qnn.conv2d":    ["NHWC", "HWIO"],
        #     "nn.max_pool2d": ["NHWC"],
        #     "qnn.max_pool2d":["NHWC"],
        # }
        # mod = tvm.transform.Sequential([
        #     relay.transform.ConvertLayout(desired_layouts),
        #     relay.transform.FoldConstant(),
        #     relay.transform.InferType(),
        # ])(mod)

        mod = cmsisnn.partition_for_cmsisnn(mod, params, mcpu=cfg["mcpu"])
        mod = relay.transform.InferType()(mod)

        lib = relay.build(mod, target=target, runtime=cfg["runtime"],
                        executor=cfg["executor"], params=params)

# ── Export ────────────────────────────────────────────────────────────────────
output_dir = "output"
os.makedirs(output_dir, exist_ok=True)
output_path = os.path.join(output_dir, f"model_{TARGET}.tar")
lib.export_library(output_path)
print(f"🎉 Success! Source code tarball written to → {output_path}")
