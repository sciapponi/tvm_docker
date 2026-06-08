FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV TVM_HOME=/tvm
ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
ENV VIRTUAL_ENV=/opt/venv

# ── System deps ────────────────────────────────────────────────────────────────
RUN apt-get update && apt-get install -y \
    cmake ninja-build git build-essential \
    python3.11 python3.11-dev python3-pip curl \
    gcc-arm-none-eabi binutils-arm-none-eabi \
    libssl-dev zlib1g-dev wget gnupg lsb-release \
    && rm -rf /var/lib/apt/lists/*

# ── LLVM 17 ────────────────────────────────────────────────────────────────────
RUN wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key | \
        gpg --dearmor -o /etc/apt/keyrings/llvm.gpg && \
    echo "deb [signed-by=/etc/apt/keyrings/llvm.gpg] \
        http://apt.llvm.org/jammy/ llvm-toolchain-jammy-17 main" \
        > /etc/apt/sources.list.d/llvm17.list && \
    apt-get update && apt-get install -y \
        llvm-17 llvm-17-dev clang-17 \
    && rm -rf /var/lib/apt/lists/*

# ── uv ─────────────────────────────────────────────────────────────────────────
RUN curl -Lsf https://astral.sh/uv/install.sh | sh

# ── Python virtualenv ──────────────────────────────────────────────────────────
RUN uv venv /opt/venv --python python3.11

# ── Clone TVM ──────────────────────────────────────────────────────────────────
RUN git clone --recursive https://github.com/apache/tvm.git $TVM_HOME

# ── Configure TVM ──────────────────────────────────────────────────────────────
RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ && \
    sed -i 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' build/config.cmake && \
    sed -i 's/set(USE_MICRO OFF)/set(USE_MICRO ON)/' build/config.cmake && \
    sed -i 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/'   build/config.cmake && \
    sed -i 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' build/config.cmake

# ── Build TVM ──────────────────────────────────────────────────────────────────
RUN cd $TVM_HOME/build && cmake .. -G Ninja && ninja -j$(nproc)

# ── Build tvm_ffi Python extension ────────────────────────────────────────────
RUN uv pip install pybind11 scikit-build-core setuptools-scm ninja cython && \
    cd /tvm/3rdparty/tvm-ffi && \
    TVM_FFI_LIBTVM_FFI_PATH=/tvm/build/lib/libtvm_ffi.so \
    uv pip install -e . --no-build-isolation

# ── PYTHONPATH ─────────────────────────────────────────────────────────────────
ENV PYTHONPATH=/tvm/python

ENV LD_LIBRARY_PATH=/tvm/build/lib:$LD_LIBRARY_PATH

# ── Python packages ────────────────────────────────────────────────────────────
RUN uv pip install \
        numpy \
        attrs \
        tornado \
        psutil \
        xgboost \
        cloudpickle \
        onnx \
        onnxruntime \
        onnxscript && \
    uv pip install torch \
        --extra-index-url https://download.pytorch.org/whl/cpu


WORKDIR /workspace
