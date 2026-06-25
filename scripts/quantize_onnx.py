import onnx
import numpy as np
from onnxruntime.quantization import (
    quantize_static, CalibrationDataReader,
    QuantType, QuantFormat
)
import onnxruntime.quantization.shape_inference as ort_shape

class DynamicCalibrationData(CalibrationDataReader):
    def __init__(self, model_path, n_samples=100):
        # Load the ONNX model to inspect its input graph metadata
        model = onnx.load(model_path)
        self.data = []

        # Mapping ONNX data types to numpy types
        # 1 = float32, 7 = int64, 11 = double, etc.
        type_mapping = {1: np.float32, 7: np.int64}

        for _ in range(n_samples):
            sample = {}
            for input_node in model.graph.input:
                name = input_node.name

                # Dynamic shape retrieval
                shape = []
                for dim in input_node.type.tensor_type.shape.dim:
                    # Handle dynamic/variable dimensions (like batch size) by defaulting to 1
                    if dim.dim_value <= 0:
                        shape.append(1)
                    else:
                        shape.append(dim.dim_value)

                # Type retrieval
                elem_type = input_node.type.tensor_type.elem_type
                np_type = type_mapping.get(elem_type, np.float32)

                # Generate the matching array structure
                if np_type == np.int64:
                    sample[name] = np.zeros(shape, dtype=np_type)
                else:
                    sample[name] = np.random.randn(*shape).astype(np_type)

            self.data.append(sample)

        self.index = 0

    def get_next(self):
        if self.index >= len(self.data):
            return None
        sample = self.data[self.index]
        self.index += 1
        return sample

# ── Step 1: Shape inference first (required before quantization) ──────────
input_model = "output/kws_model.onnx"
preprocessed_model = "output/kws_model_preprocessed.onnx"

ort_shape.quant_pre_process(
    input_model,
    preprocessed_model,
    skip_optimization=False,
)

# ── Step 2: Static Quantization with automated inputs ────────────────────
quantize_static(
    model_input=preprocessed_model,
    model_output="output/kws_model_int8.onnx",
    # Pass the preprocessed model to the data reader so it can extract names and dimensions
    calibration_data_reader=DynamicCalibrationData(preprocessed_model, n_samples=100),
    quant_format=QuantFormat.QOperator,   # Real integer ops
    weight_type=QuantType.QInt8,
    activation_type=QuantType.QInt8,
    per_channel=False,
    reduce_range=False,
    extra_options={
        "ActivationSymmetric": True,      # zero_point=0 everywhere
        "WeightSymmetric": True,
    }
)
print("Quantized → output/kws_model_int8.onnx (True Integer Layout)")
