# # FROM ubuntu:22.04
# #
# # ENV DEBIAN_FRONTEND=noninteractive
# # ENV TVM_HOME=/tvm
# # ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
# # ENV VIRTUAL_ENV=/opt/venv
# #
# # # ── System deps ────────────────────────────────────────────────────────────────
# # RUN apt-get update && apt-get install -y \
# #     cmake ninja-build git build-essential \
# #     python3.11 python3.11-dev python3-pip curl \
# #     gcc-arm-none-eabi binutils-arm-none-eabi \
# #     libssl-dev zlib1g-dev wget gnupg lsb-release \
# #     && rm -rf /var/lib/apt/lists/*
# #
# # # ── LLVM 17 ────────────────────────────────────────────────────────────────────
# # RUN wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key | \
# #         gpg --dearmor -o /etc/apt/keyrings/llvm.gpg && \
# #     echo "deb [signed-by=/etc/apt/keyrings/llvm.gpg] \
# #         http://apt.llvm.org/jammy/ llvm-toolchain-jammy-17 main" \
# #         > /etc/apt/sources.list.d/llvm17.list && \
# #     apt-get update && apt-get install -y \
# #         llvm-17 llvm-17-dev clang-17 \
# #     && rm -rf /var/lib/apt/lists/*
# #
# # # ── uv ─────────────────────────────────────────────────────────────────────────
# # RUN curl -Lsf https://astral.sh/uv/install.sh | sh
# #
# # # ── Python virtualenv ──────────────────────────────────────────────────────────
# # RUN uv venv /opt/venv --python python3.11
# #
# # # ── Clone TVM ──────────────────────────────────────────────────────────────────
# # RUN git clone --recursive https://github.com/apache/tvm.git $TVM_HOME
# #
# # # ── Configure TVM ──────────────────────────────────────────────────────────────
# # RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ && \
# #     sed -i 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' build/config.cmake && \
# #     sed -i 's/set(USE_MICRO OFF)/set(USE_MICRO ON)/' build/config.cmake && \
# #     sed -i 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/'   build/config.cmake && \
# #     sed -i 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' build/config.cmake
# #
# # # ── Build TVM ──────────────────────────────────────────────────────────────────
# # RUN cd $TVM_HOME/build && cmake .. -G Ninja && ninja -j$(nproc)
# #
# # # ── Build tvm_ffi Python extension ────────────────────────────────────────────
# # RUN uv pip install pybind11 scikit-build-core setuptools-scm ninja cython && \
# #     cd /tvm/3rdparty/tvm-ffi && \
# #     TVM_FFI_LIBTVM_FFI_PATH=/tvm/build/lib/libtvm_ffi.so \
# #     uv pip install -e . --no-build-isolation
# #
# # # ── PYTHONPATH ─────────────────────────────────────────────────────────────────
# # ENV PYTHONPATH=/tvm/python
# #
# # ENV LD_LIBRARY_PATH=/tvm/build/lib:$LD_LIBRARY_PATH
# #
# # # ── Python packages ────────────────────────────────────────────────────────────
# # RUN uv pip install \
# #         numpy \
# #         attrs \
# #         tornado \
# #         psutil \
# #         xgboost \
# #         cloudpickle \
# #         onnx \
# #         onnxruntime \
# #         onnxscript && \
# #     uv pip install torch \
# #         --extra-index-url https://download.pytorch.org/whl/cpu
# #
# #
# # WORKDIR /workspace
#
# FROM ubuntu:22.04
#
# ENV DEBIAN_FRONTEND=noninteractive
# ENV TVM_HOME=/tvm
# ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
# ENV VIRTUAL_ENV=/opt/venv
#
# # ── System deps (Stripped down) ────────────────────────────────────────────────
# RUN apt-get update && apt-get install -y \
#     cmake ninja-build git build-essential \
#     python3.11 python3.11-dev python3-pip curl \
#     libssl-dev zlib1g-dev wget gnupg lsb-release \
#     && rm -rf /var/lib/apt/lists/*
#
# # ── LLVM 17 (Required by TVM internals) ────────────────────────────────────────
# RUN wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key | \
#         gpg --dearmor -o /etc/apt/keyrings/llvm.gpg && \
#     echo "deb [signed-by=/etc/apt/keyrings/llvm.gpg] \
#         http://apt.llvm.org/jammy/ llvm-toolchain-jammy-17 main" \
#         > /etc/apt/sources.list.d/llvm17.list && \
#     apt-get update && apt-get install -y \
#         llvm-17 llvm-17-dev clang-17 \
#     && rm -rf /var/lib/apt/lists/*
#
# # ── uv & Python virtualenv ─────────────────────────────────────────────────────
# RUN curl -Lsf https://astral.sh/uv/install.sh | sh
# RUN uv venv /opt/venv --python python3.11
#
# # ── Clone TVM ──────────────────────────────────────────────────────────────────
# RUN git clone --recursive https://github.com/apache/tvm.git $TVM_HOME
#
# # ── Configure TVM (Enabling CMSIS-NN Code Generation) ──────────────────────────
# # ── Configure TVM (Enabling CMSIS-NN Code Generation) ──────────────────────────
# RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ && \
#     # Standard LLVM configuration
#     sed -i 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' build/config.cmake && \
#     # Force disable hardware architectures you don't need
#     sed -i 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/'   build/config.cmake && \
#     sed -i 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' build/config.cmake && \
#     # Explicitly append microTVM and CMSIS-NN to the end of config.cmake to ensure they register
#     echo "set(USE_MICRO ON)" >> build/config.cmake && \
#     echo "set(USE_CMSISNN ON)" >> build/config.cmake
#
# # ── Build TVM ──────────────────────────────────────────────────────────────────
# RUN cd $TVM_HOME/build && cmake .. -G Ninja && ninja -j$(nproc)
#
# # ── Build tvm_ffi Python extension ────────────────────────────────────────────
# RUN uv pip install pybind11 scikit-build-core setuptools-scm ninja cython && \
#     cd /tvm/3rdparty/tvm-ffi && \
#     TVM_FFI_LIBTVM_FFI_PATH=/tvm/build/lib/libtvm_ffi.so \
#     uv pip install -e . --no-build-isolation
#
# ENV PYTHONPATH=/tvm/python
# ENV LD_LIBRARY_PATH=/tvm/build/lib:$LD_LIBRARY_PATH
#
# # ── Python packages ────────────────────────────────────────────────────────────
# RUN uv pip install numpy attrs tornado psutil xgboost cloudpickle onnx onnxruntime onnxscript && \
#     uv pip install torch --extra-index-url https://download.pytorch.org/whl/cpu
#
# WORKDIR /workspace

FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV TVM_HOME=/tvm
ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
ENV VIRTUAL_ENV=/opt/venv

# ── System deps ────────────────────────────────────────────────────────────────
RUN apt-get update && apt-get install -y \
    cmake ninja-build git build-essential \
    python3.11 python3.11-dev python3-pip curl \
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

# ── uv & Python virtualenv ─────────────────────────────────────────────────────
RUN curl -Lsf https://astral.sh/uv/install.sh | sh
RUN uv venv /opt/venv --python python3.11

# ── Clone TVM (Pinned to stable Relay-supporting v0.15.0 release) ─────────────
RUN git clone --recursive --branch v0.15.0 https://github.com/apache/tvm.git $TVM_HOME

# ── Configure TVM (Enabling CMSIS-NN Code Generation hooks) ────────────────────
RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ && \
    sed -i 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' build/config.cmake && \
    sed -i 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/'   build/config.cmake && \
    sed -i 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' build/config.cmake && \
    echo "set(USE_MICRO ON)" >> build/config.cmake && \
    echo "set(USE_CMSISNN ON)" >> build/config.cmake

# ── Patch TVM upstream bug in v0.15 dense layer compilation ──────────────────
RUN sed -i '21i from ..utils import get_const_tuple' $TVM_HOME/python/tvm/topi/nn/dense.py

# ── Build TVM ──────────────────────────────────────────────────────────────────
RUN cd $TVM_HOME/build && cmake .. -G Ninja && ninja -j$(nproc)

# ── Install TVM Python Package (The classic v0.15 editable layout) ─────────────
RUN cd $TVM_HOME/python && uv pip install -e .

ENV PYTHONPATH=/tvm/python
ENV LD_LIBRARY_PATH=/tvm/build/lib:$LD_LIBRARY_PATH

# ── Python packages (Removed onnxscript to break dependency deadlock) ──────────
RUN uv pip install "numpy<2.0.0" "onnx<1.16.0" "onnxruntime<1.17.0" attrs tornado psutil xgboost cloudpickle onnxruntime && \
    uv pip install torch --extra-index-url https://download.pytorch.org/whl/cpu


WORKDIR /workspace
