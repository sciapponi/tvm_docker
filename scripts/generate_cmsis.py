import os
import argparse
import onnx
from onnx import shape_inference
import tvm
from tvm import relay
from tvm.relay.op.contrib import cmsisnn

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--target_device", type=str,
                        choices=["arm", "esp32s3"], required=True)
    args = parser.parse_args()

    model_path = "output/stateful_model_int8.onnx"
    if not os.path.exists(model_path):
        raise FileNotFoundError(f"Model not found: {model_path}")

    print(f"📦 Loading ONNX model for target: {args.target_device}...")
    onnx_model = onnx.load(model_path)

    # ── Critical: run shape inference so int8 tensor shapes are known ──────────
    onnx_model = shape_inference.infer_shapes(onnx_model)

    # ── Use the ACTUAL input names and shapes from your quantized model ─────────
    shape_dict = {
        "input_frame": (1, 1, 1, 784),
        "h_in":        (1, 64),
    }
    # dtype_dict forces the frontend to treat these as int8, not float
    dtype_dict = {
        "input_frame": "int8",
        "h_in":        "int8",
    }

    print("🔄 Converting ONNX → Relay IR (integer mode)...")
    relay_mod, relay_params = relay.frontend.from_onnx(
        onnx_model,
        shape_dict,
        dtype_dict=dtype_dict,
        freeze_params=True,         # folds quantization scale/zero-point constants
    )

    print("🔄 Legalization pass: lower quantized ops to integer Relay dialect...")
    relay_mod = relay.transform.InferType()(relay_mod)

    runtime  = tvm.runtime.Runtime("crt", {"system-lib": True})
    executor = tvm.backend.Executor("aot", {
        "unpacked-api":  True,
        "interface-api": "c",
    })

    if args.target_device == "arm":
        print("🚀 CMSIS-NN partitioning for Cortex-M4...")
        target = tvm.target.Target(
            "c -keys=arm_cpu,cpu -mcpu=cortex-m4 -link-params=1"
        )
        # partition_for_cmsisnn must see integer ops to find patterns
        relay_mod = cmsisnn.partition_for_cmsisnn(relay_mod, relay_params,
                                                   target=target)
        output_name = "deploy_arm_cmsisnn.tar"

    elif args.target_device == "esp32s3":
        print("🎯 Pure-C generation for ESP32-S3...")
        target = tvm.target.Target("c -keys=cpu")
        output_name = "deploy_esp32s3.tar"

    print("🏗️  Building to MLF...")
    with tvm.transform.PassContext(opt_level=3,
                                   config={"tir.disable_vectorize": True}):
        lowered = relay.build(
            relay_mod,
            target=target,
            runtime=runtime,
            executor=executor,
            params=relay_params,
        )

    output_dir = "/workspace/generated_artifacts"
    os.makedirs(output_dir, exist_ok=True)
    output_file = os.path.join(output_dir, output_name)
    lowered.export_library(output_file)
    print(f"\n🎉 Done → {output_file}")

if __name__ == "__main__":
    main()
