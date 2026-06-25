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

# FROM ubuntu:22.04
#
# ENV DEBIAN_FRONTEND=noninteractive
# ENV TVM_HOME=/tvm
# ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
# ENV VIRTUAL_ENV=/opt/venv
#
# # ── System deps ────────────────────────────────────────────────────────────────
# RUN apt-get update && apt-get install -y \
#     cmake ninja-build git build-essential \
#     python3.11 python3.11-dev python3-pip curl \
#     libssl-dev zlib1g-dev wget gnupg lsb-release \
#     && rm -rf /var/lib/apt/lists/*
#
# # ── LLVM 17 ────────────────────────────────────────────────────────────────────
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
# # ── Clone TVM (Pinned to stable Relay-supporting v0.15.0 release) ─────────────
# RUN git clone --recursive --branch v0.15.0 https://github.com/apache/tvm.git $TVM_HOME
#
# # ── Configure TVM (Enabling CMSIS-NN Code Generation hooks) ────────────────────
# RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ && \
#     sed -i 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' build/config.cmake && \
#     sed -i 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/'   build/config.cmake && \
#     sed -i 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' build/config.cmake && \
#     echo "set(USE_MICRO ON)" >> build/config.cmake && \
#     echo "set(USE_CMSISNN ON)" >> build/config.cmake
#
# # ── Patch TVM upstream bug in v0.15 dense layer compilation ──────────────────
# RUN sed -i '21i from ..utils import get_const_tuple' $TVM_HOME/python/tvm/topi/nn/dense.py
#
# # ── Build TVM ──────────────────────────────────────────────────────────────────
# RUN cd $TVM_HOME/build && cmake .. -G Ninja && ninja -j$(nproc)
#
# # ── Install TVM Python Package (The classic v0.15 editable layout) ─────────────
# RUN cd $TVM_HOME/python && uv pip install -e .
#
# ENV PYTHONPATH=/tvm/python
# ENV LD_LIBRARY_PATH=/tvm/build/lib:$LD_LIBRARY_PATH
#
# # ── Python packages (Removed onnxscript to break dependency deadlock) ──────────
# RUN uv pip install "numpy<2.0.0" "onnx<1.16.0" "onnxruntime<1.17.0" attrs tornado psutil xgboost cloudpickle onnxruntime && \
#     uv pip install torch --extra-index-url https://download.pytorch.org/whl/cpu
#
#
# WORKDIR /workspace

FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV TVM_HOME=/tvm
ENV VIRTUAL_ENV=/opt/venv
ENV PATH="/root/.local/bin:/opt/venv/bin:$PATH"
ENV PYTHONPATH=/tvm/python

# LD_LIBRARY_PATH must be set this way to avoid the undefined-var warning
ENV LD_LIBRARY_PATH=/tvm/build/lib

# ── System deps ────────────────────────────────────────────────────────────────
RUN apt-get update && apt-get install -y \
        cmake ninja-build git build-essential \
        python3.11 python3.11-dev python3-pip \
        curl wget gnupg lsb-release \
        libssl-dev zlib1g-dev \
    && rm -rf /var/lib/apt/lists/*

# ── LLVM 17 ───────────────────────────────────────────────────────────────────
RUN wget -qO- https://apt.llvm.org/llvm-snapshot.gpg.key \
        | gpg --dearmor -o /etc/apt/keyrings/llvm.gpg \
    && echo "deb [signed-by=/etc/apt/keyrings/llvm.gpg] \
        http://apt.llvm.org/jammy/ llvm-toolchain-jammy-17 main" \
        > /etc/apt/sources.list.d/llvm17.list \
    && apt-get update && apt-get install -y \
        llvm-17 llvm-17-dev clang-17 \
    && rm -rf /var/lib/apt/lists/*

# ── uv + Python virtualenv ────────────────────────────────────────────────────
RUN curl -Lsf https://astral.sh/uv/install.sh | sh
RUN uv venv /opt/venv --python python3.11

# ── Clone TVM (pinned to v0.15.0) ────────────────────────────────────────────
RUN git clone --recursive --branch v0.15.0 \
        https://github.com/apache/tvm.git $TVM_HOME

# ── Patch: upstream v0.15 dense-layer compilation bug ────────────────────────
RUN sed -i '21i from ..utils import get_const_tuple' \
        $TVM_HOME/python/tvm/topi/nn/dense.py

# ── BYOC ESPDL: pure-Python codegen + partition pass ─────────────────────────
# relay.ext.espdl is registered entirely in Python via @tvm.register_func.
# No C++ changes or cmake flags needed — TVM's BYOC dispatch calls into Python
# the same way it would call a C++ TVM_REGISTER_GLOBAL entry point.
RUN mkdir -p $TVM_HOME/python/tvm/relay/op/contrib/espdl
RUN cat > $TVM_HOME/python/tvm/relay/op/contrib/espdl/__init__.py << 'EOF'
"""
BYOC backend for ESP-DL (ESPDL) — pure-Python codegen.

relay.ext.espdl is registered with @tvm.register_func so TVM can find it
at relay.build() time without any C++ changes.  The codegen walks each
partitioned subgraph and emits an esp-dl C++ source file; the resulting
CSourceModule is packed into the output .tar alongside TVM's own C modules.
"""
import tvm
from tvm import relay, ir
from tvm.relay.build_module import bind_params_by_name
import tvm.relay.dataflow_pattern as dfp


# ── Codegen ───────────────────────────────────────────────────────────────────

class ESPDLCodegen(relay.ExprVisitor):
    """Walk a partitioned Relay function and emit ESP-DL C++."""

    _OP_MAP = {
        # Core standard Relay ops (Fallback targets when un-fused)
        "nn.conv2d":        "espdl::Conv2D",
        "nn.bias_add":      "espdl::BiasAdd",
        "add":              "espdl::Add",
        "nn.dense":         "espdl::FullyConnected",
        "nn.relu":          "espdl::ReLU",
        "nn.max_pool2d":    "espdl::MaxPool2D",
        "nn.batch_flatten": "espdl::Flatten",
        "sigmoid":          "espdl::Sigmoid",
        "tanh":             "espdl::Tanh",
        "multiply":         "espdl::Mul",
        "subtract":         "espdl::Sub",
        "concatenate":      "espdl::Concat",
        "copy":             "espdl::Identity",

        # Composite pattern equivalents matching the refined pattern table
        "espdl.conv2d_bias_relu": "espdl::Conv2DBiasReLU",
        "espdl.conv2d_bias":      "espdl::Conv2DBias",
        "espdl.dense_bias":       "espdl::FullyConnectedBias",
        "espdl.dense":            "espdl::FullyConnected",
        "espdl.sigmoid":          "espdl::Sigmoid",
        "espdl.tanh":             "espdl::Tanh",
    }

    def __init__(self, func_name):
        super().__init__()
        self.func_name = func_name
        self._buf_idx = 0
        self._expr_to_var = {}   # expr id → C var name
        self._lines = []         # body statements
        self._args = []          # function argument names (in order)

    def _fresh(self):
        name = f"buf_{self._buf_idx}"
        self._buf_idx += 1
        return name

    def visit_var(self, var):
        if id(var) not in self._expr_to_var:
            self._args.append(var.name_hint)
            self._expr_to_var[id(var)] = var.name_hint
        return self._expr_to_var[id(var)]

    def visit_constant(self, const):
        name = self._fresh()
        self._expr_to_var[id(const)] = name
        # Constants are passed as pre-initialised espdl weight tensors;
        # emit a placeholder comment — real weight wiring happens in ESP-IDF glue.
        self._lines.append(f"  /* constant {name} — wire via espdl weight table */")
        return name

    def visit_call(self, call):
        # Recurse into args first (post-order)
        arg_vars = [self.visit(a) for a in call.args]

        if isinstance(call.op, ir.Op):
            op_name = call.op.name
        elif isinstance(call.op, relay.Function):
            # Composite (MergeComposite) — Check key existence manually
            attrs = call.op.attrs
            if attrs and "Composite" in attrs:
                op_name = attrs["Composite"]
            else:
                op_name = "unknown"
        else:
            op_name = str(call.op)

        espdl_fn = self._OP_MAP.get(op_name, f"espdl::Unknown_{op_name.replace('.','_')}")
        out = self._fresh()
        args_str = ", ".join(arg_vars)
        self._lines.append(f"  auto {out} = {espdl_fn}({args_str});")
        self._expr_to_var[id(call)] = out
        return out

    def visit_tuple(self, tup):
        members = [self.visit(f) for f in tup.fields]
        out = self._fresh()
        args_str = ", ".join(members)
        self._lines.append(f"  auto {out} = espdl::MakeTuple({args_str});")
        self._expr_to_var[id(tup)] = out
        return out

    def visit_tuple_getitem(self, t):
        tup = self.visit(t.tuple_value)
        out = self._fresh()
        self._lines.append(f"  auto {out} = espdl::TupleGet({tup}, {t.index});")
        self._expr_to_var[id(t)] = out
        return out

    def generate(self, func):
        result = self.visit(func.body)
        params = ", ".join(f"float* {a}" for a in self._args)
        body   = "\n".join(self._lines)
        return (
            f'#include "esp_dl_lib.h"\n\n'
            f"extern \"C\" void {self.func_name}({params}) {{\n"
            f"{body}\n"
            f"  // output: {result}\n"
            f"}}\n"
        )


@tvm.register_func("relay.ext.espdl")
def espdl_compiler(ref):
    """Entry point TVM calls for each partitioned ESPDL subgraph."""
    assert isinstance(ref, relay.Function), \
        f"relay.ext.espdl expects a relay.Function, got {type(ref)}"

    func_name = ref.attrs["global_symbol"]
    codegen   = ESPDLCodegen(func_name)
    src       = codegen.generate(ref)

    # Wrap in a CSourceModule so TVM packs it into the output .tar
    return tvm.runtime.module.load_module.__self__  # replaced below


# CSourceModuleCreate is the correct way to return a C module from a BYOC backend
@tvm.register_func("relay.ext.espdl", override=True)
def espdl_compiler(ref):  # noqa: F811
    assert isinstance(ref, relay.Function)
    func_name = ref.attrs["global_symbol"]
    codegen   = ESPDLCodegen(func_name)
    src       = codegen.generate(ref)

    create_csource_module = tvm.get_global_func("runtime.CSourceModuleCreate")
    return create_csource_module(src, "c", [func_name], [])


# ── Pattern table ─────────────────────────────────────────────────────────────

def espdl_pattern_table():
    def conv2d_bias_relu():
        x, w  = dfp.wildcard(), dfp.wildcard()
        conv  = dfp.is_op("nn.conv2d")(x, w)
        bias  = dfp.is_op("nn.bias_add")(conv, dfp.wildcard())
        relu  = dfp.is_op("nn.relu")(bias)
        return relu, "espdl.conv2d_bias_relu"

    def conv2d_bias():
        x, w  = dfp.wildcard(), dfp.wildcard()
        conv  = dfp.is_op("nn.conv2d")(x, w)
        bias  = dfp.is_op("nn.bias_add")(conv, dfp.wildcard())
        return bias, "espdl.conv2d_bias"

    def dense_bias():
        x, w  = dfp.wildcard(), dfp.wildcard()
        dense = dfp.is_op("nn.dense")(x, w)
        bias  = dfp.is_op("add")(dense, dfp.wildcard())
        return bias, "espdl.dense_bias"

    def dense_only():
        return dfp.is_op("nn.dense")(dfp.wildcard(), dfp.wildcard()), "espdl.dense"

    def sigmoid_only():
        return dfp.is_op("sigmoid")(dfp.wildcard()), "espdl.sigmoid"

    def tanh_only():
        return dfp.is_op("tanh")(dfp.wildcard()), "espdl.tanh"

    patterns = []
    for fn in [conv2d_bias_relu, conv2d_bias, dense_bias, dense_only, sigmoid_only, tanh_only]:
        pat, name = fn()
        patterns.append((name, pat))
    return patterns


# ── Partition helper ──────────────────────────────────────────────────────────

def partition_for_espdl(mod, params=None):
    """
    Annotate and partition *mod* for ESPDL offload.

    Ops covered by espdl_pattern_table() are carved into separate functions
    with Compiler="espdl"; the remainder is compiled by TVM's normal C backend.
    """
    if params:
        mod["main"] = bind_params_by_name(mod["main"], params)

    seq = tvm.transform.Sequential([
        relay.transform.InferType(),
        relay.transform.MergeComposite(espdl_pattern_table()),
        relay.transform.AnnotateTarget("espdl"),
        relay.transform.MergeCompilerRegions(),
        relay.transform.PartitionGraph(),
        relay.transform.InferType(),
    ])
    return seq(mod)
EOF

# ── Configure TVM ─────────────────────────────────────────────────────────────
RUN cd $TVM_HOME && mkdir build && cp cmake/config.cmake build/ \
    && sed -i \
        -e 's|set(USE_LLVM OFF)|set(USE_LLVM /usr/bin/llvm-config-17)|' \
        -e 's/set(USE_CUDA ON)/set(USE_CUDA OFF)/' \
        -e 's/set(USE_OPENCL ON)/set(USE_OPENCL OFF)/' \
        build/config.cmake \
    && cat >> build/config.cmake << 'EOF'

# MicroTVM + CMSIS-NN
set(USE_MICRO ON)
set(USE_CMSISNN ON)
EOF

# ── Build TVM ─────────────────────────────────────────────────────────────────
RUN cd $TVM_HOME/build \
    && cmake .. -G Ninja \
    && ninja -j$(nproc)

# ── Install TVM Python package (editable, v0.15 layout) ──────────────────────
RUN cd $TVM_HOME/python && uv pip install -e .

# ── Python dependencies ───────────────────────────────────────────────────────
RUN uv pip install \
        "numpy<2.0.0" \
        "onnx<1.16.0" \
        "onnxruntime<1.17.0" \
        attrs tornado psutil xgboost cloudpickle \
    && uv pip install torch --extra-index-url https://download.pytorch.org/whl/cpu

# ── Create a non-root user ───────────────────────────────────────────────────
ARG USERNAME=developer
ARG USER_UID=1000
ARG USER_GID=$USER_UID

RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
    # Allow the user to access the TVM toolchain and virtual environment
    && chown -R $USERNAME:$USER_GID /tvm /opt/venv

# Set up environment variables for the new user's home directory
ENV HOME=/home/$USERNAME
ENV PATH="/home/$USERNAME/.local/bin:/opt/venv/bin:$PATH"

# Switch to the non-root user
USER $USERNAME

WORKDIR /workspace
