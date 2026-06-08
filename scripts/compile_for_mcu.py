import onnx
import tvm
import tvm.relax as relax
from tvm.relax.frontend.onnx import from_onnx
import sys

# ── Select target from command line arg ───────────────────────────────────────
# Usage:
#   python compile_for_mcu.py cortex-m4      (default)
#   python compile_for_mcu.py esp32s3
TARGET = sys.argv[1] if len(sys.argv) > 1 else "cortex-m4"

TARGETS = {
    "cortex-m4": {
        "kind": "c",
        "keys": ["arm_cpu"],
        "mcpu": "cortex-m4",
    },
    "cortex-m7": {
        "kind": "c",
        "keys": ["arm_cpu"],
        "mcpu": "cortex-m7",
    },
    "cortex-m33": {
        "kind": "c",
        "keys": ["arm_cpu"],
        "mcpu": "cortex-m33",
    },
    "esp32s3": {
        "kind": "c",
        "keys": ["cpu"],
        "mcpu": "esp32s3",
    },
    "esp32": {
        "kind": "c",
        "keys": ["cpu"],
        "mcpu": "xtensa-lx6",
    },
}

if TARGET not in TARGETS:
    print(f"Unknown target '{TARGET}'. Choose from: {list(TARGETS.keys())}")
    sys.exit(1)

# ── Load ONNX ─────────────────────────────────────────────────────────────────
onnx_model = onnx.load("output/stateful_model.onnx")

shape_dict = {
    "input_frame": (1, 1, 28, 28),
    "h_in":        (1, 64),
}
mod = from_onnx(onnx_model, shape_dict=shape_dict)

# ── Target ────────────────────────────────────────────────────────────────────
target = tvm.target.Target(TARGETS[TARGET])
output_path = f"output/model_{TARGET}.tar"

# ── Compile ───────────────────────────────────────────────────────────────────
with tvm.transform.PassContext(opt_level=3):
    mod = relax.transform.LegalizeOps()(mod)
    ex = relax.build(mod, target=target)

# ── Export ────────────────────────────────────────────────────────────────────
ex.export_library(output_path)
print(f"Done → {output_path}")
