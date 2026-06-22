# Requirements
- Docker
- docker-compose-v2 (`sudo apt install docker-compose-v2`)

## Setup
```bash
git clone 
cd tvm_docker
docker compose build  # ~20 min first time
```

## Usage
```bash
# Export ONNX model
docker compose run --remove-orphans tvm python3 scripts/export_onnx.py

# Compile for target (cortex-m4, cortex-m7, cortex-m33, esp32s3, esp32)
docker compose run --remove-orphans tvm python3 scripts/compile_for_mcu.py cortex-m4

# Compile for target esp32s3 requires fp32 onnx
docker compose run --remove-orphans tvm python3 scripts/compile_for_mcu.py esp32s3-espdl output/stateful_model.onnx


# Interactive shell
docker compose run --remove-orphans tvm bash
```

## Output
Generated C sources land in `output/model_<target>.tar`


## Inspect via
```bash
sudo mkdir output/inspected_model/
sudo tar -xvf output/model_cortex_m4.tar -C output/inspected_model/
```

## Check ESPDL Operations via
```bash
tar -xOf output/model_esp32s3-espdl.tar | grep "espdl::"

Example output:

  auto buf_2 = espdl::FullyConnectedBias(espdl_14_i0, buf_0, buf_1);
  auto buf_3 = espdl::Sigmoid(buf_2);
  auto buf_2 = espdl::Conv2DBiasReLU(espdl_0_i0, buf_0, buf_1);
  auto buf_0 = espdl::Tanh(espdl_20_i0);
  auto buf_2 = espdl::FullyConnectedBias(espdl_6_i0, buf_0, buf_1);
  auto buf_5 = espdl::FullyConnectedBias(buf_2, buf_3, buf_4);
  auto buf_6 = espdl::MakeTuple(buf_2, buf_5);
  auto buf_2 = espdl::Conv2DBiasReLU(espdl_3_i0, buf_0, buf_1);
  auto buf_2 = espdl::FullyConnectedBias(espdl_17_i0, buf_0, buf_1);
  auto buf_2 = espdl::FullyConnectedBias(espdl_9_i0, buf_0, buf_1);
  auto buf_3 = espdl::Sigmoid(buf_2);
```

## Checks to Guarantee CMSIS export
```
1. QOperator format with ActivationSymmetric=True (zero points = 0 everywhere)
2. ExprMutator to rewrite add(qnn.dense, bias) → nn.bias_add
3. No ConvertLayout — it breaks the partitioner in TVM v0.15
4. partition_for_cmsisnn then fires cleanly on all 7 ops
```
