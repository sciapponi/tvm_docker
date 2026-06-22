import onnx
import numpy as np
# Added QuantFormat right here to the import list
from onnxruntime.quantization import (
    quantize_static, CalibrationDataReader,
    QuantType, QuantFormat, CalibrationMethod
)
from onnxruntime.quantization.quant_utils import QuantizationMode
import onnxruntime.quantization.shape_inference as ort_shape

class RandomCalibrationData(CalibrationDataReader):
    def __init__(self, n_samples=100):
        self.data = [
            {
                # Changed (1, 1, 28, 28) back to the flat structure your model expects
                "input_frame": np.random.randn(1, 1, 1, 784).astype("float32"),
                "h_in":        np.zeros((1, 64), dtype="float32"),
            }
            for _ in range(n_samples)
        ]
        self.index = 0

    def get_next(self):
        if self.index >= len(self.data):
            return None
        sample = self.data[self.index]
        self.index += 1
        return sample

# ── Step 1: Shape inference first (required before QDQ quantization) ──────────
ort_shape.quant_pre_process(
    "output/stateful_model.onnx",
    "output/stateful_model_preprocessed.onnx",
    skip_optimization=False,
)

quantize_static(
    model_input="output/stateful_model_preprocessed.onnx",
    model_output="output/stateful_model_int8.onnx",
    calibration_data_reader=RandomCalibrationData(n_samples=100),
    quant_format=QuantFormat.QOperator,   # ← real integer ops
    weight_type=QuantType.QInt8,
    activation_type=QuantType.QInt8,
    per_channel=False,
    reduce_range=False,
    extra_options={
        "ActivationSymmetric": True,      # ← zero_point=0 everywhere
        "WeightSymmetric": True,
    }
)
print("Quantized → output/stateful_model_int8.onnx (True Integer Layout)")
