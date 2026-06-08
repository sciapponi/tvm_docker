import os
import onnx
import tvm
import tvm.relax as relax
from tvm.relax.frontend.onnx import from_onnx

# ── 1. Load ONNX ──────────────────────────────────────────────────────────────
onnx_model = onnx.load("output/stateful_model.onnx")

# ── 2. Import into Relax IR ───────────────────────────────────────────────────
shape_dict = {
    "input_frame": (1, 1, 1, 784),
    "h_in":        (1, 64),
}
mod = from_onnx(onnx_model, shape_dict=shape_dict)

# ── 3. Target: Clean, Minimal C Backend Configuration ─────────────────────────
target = tvm.target.Target({
    "kind": "c",
    "keys": ["arm_cpu", "cpu"],
    "mcpu": "cortex-m4+vfp4"
})

# ── 4. Optimize and Run Micro-Target Transformations ─────────────────────────
with tvm.transform.PassContext(
    opt_level=3,
    config={
        "tirx.disable_vectorize": True,
    }
):
    # Standard Relax structural cleanups
    mod = relax.transform.LegalizeOps()(mod)
    mod = relax.transform.FoldConstant()(mod)
    mod = relax.transform.AnnotateTIROpPattern()(mod)
    mod = relax.transform.FuseOps()(mod)

    # Static memory scheduling for bare-metal SRAM efficiency
    mod = relax.transform.StaticPlanBlockMemory()(mod)

    # Compile the graph targeting clean bare-metal C primitives
    ex = relax.build(mod, target=target)

# ── 5. Export Codebase ────────────────────────────────────────────────────────
os.makedirs("output", exist_ok=True)
output_path = "output/model_cortex_m4.tar"

# --- FIX: Safe Export Sequence ---
# If your TVM build has the discrete MLF export module exposed:
try:
    from tvm.micro import export_model_library_format
    export_model_library_format(ex, output_path)
    print(f"Successfully exported to Model Library Format (.tar) → {output_path}")
except (ImportError, AttributeError):
    # Fallback: Export as a direct archive of pure C-source files
    # This strips the problematic format="mlf" keyword but still spits out
    # the unrolled standalone C sources ready for an MCU cross-compiler.
    ex.export_library(output_path)
    print(f"Successfully exported standard C source library archive (.tar) → {output_path}")
