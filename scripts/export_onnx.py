import os
import torch
import torch.nn as nn

class ManualGRUCell(nn.Module):
    """Single GRU step unrolled into basic ops — fully supported by Relax ONNX frontend"""
    def __init__(self, input_size, hidden_size):
        super().__init__()
        # Reset gate
        self.wr = nn.Linear(input_size + hidden_size, hidden_size)
        # Update gate
        self.wz = nn.Linear(input_size + hidden_size, hidden_size)
        # New gate
        self.wn = nn.Linear(input_size, hidden_size)
        self.un = nn.Linear(hidden_size, hidden_size)

    def forward(self, x, h):
        combined = torch.cat([x, h], dim=-1)
        r = torch.sigmoid(self.wr(combined))        # reset gate
        z = torch.sigmoid(self.wz(combined))        # update gate
        n = torch.tanh(self.wn(x) + r * self.un(h))  # new gate
        h_out = (1 - z) * n + z * h
        return h_out

class StatefulCnnGruUnrolled(nn.Module):
    def __init__(self):
        super().__init__()
        self.cnn = nn.Sequential(
            nn.Conv2d(1, 16, kernel_size=(1, 3), padding=(0, 1)),
            nn.ReLU6(),          # ← ReLU6 gives tighter activation range, better int8 calibration
            nn.MaxPool2d(kernel_size=(1, 2)),
            nn.Conv2d(16, 32, kernel_size=(1, 3), padding=(0, 1)),
            nn.ReLU6(),
            nn.MaxPool2d(kernel_size=(1, 2)),
            nn.Flatten()
        )
        self.compress = nn.Linear(32 * 196, 32)
        self.gru_cell = ManualGRUCell(input_size=32, hidden_size=64)

    def forward(self, x, h_in):
        # x shape expected: (Batch, 1, 1, 784) <-- Strict 4D tensor for TVM Relax
        features = self.cnn(x)

        # Project features down to the small GRU input size (Batch, 32)
        compressed_features = self.compress(features)

        # Pass to the manual lightweight GRU
        h_out = self.gru_cell(compressed_features, h_in)

        return h_out, h_out  # output, new hidden state


if __name__ == "__main__":
    # Ensure output directory exists
    os.makedirs("output", exist_ok=True)

    # Initialize model and set to evaluation mode
    model = StatefulCnnGruUnrolled().eval()

    # --- FIX: Pass a 4D tensor (Batch=1, Channels=1, Height=1, Width=784)
    example_x = torch.randn(1, 1, 1, 784)
    example_h = torch.zeros(1, 64)

    output_path = "output/stateful_model.onnx"

    # Export to ONNX
    torch.onnx.export(
        model,
        (example_x, example_h),
        output_path,
        export_params=True,
        opset_version=17,
        input_names=['input_frame', 'h_in'],
        output_names=['predictions', 'h_out'],
        dynamic_axes={
            'input_frame': {0: 'batch_size'},
            'h_in': {0: 'batch_size'},
            'predictions': {0: 'batch_size'},
            'h_out': {0: 'batch_size'}
        },
        dynamo=False
    )

    print(f"ONNX successfully exported for TVM Relax → {output_path}")
