# Requirements
- Docker
- docker-compose-v2 (`sudo apt install docker-compose-v2`)

## Setup
```bash
git clone 
cd tvm-embedded
docker compose build  # ~20 min first time
```

## Usage
```bash
# Export ONNX model
docker compose run --remove-orphans tvm python3 scripts/export_onnx.py

# Compile for target (cortex-m4, cortex-m7, cortex-m33, esp32s3, esp32)
docker compose run --remove-orphans tvm python3 scripts/compile_for_mcu.py cortex-m4

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

## Checks to Guarantee CMSIS export
```
1. QOperator format with ActivationSymmetric=True (zero points = 0 everywhere)
2. ExprMutator to rewrite add(qnn.dense, bias) → nn.bias_add
3. No ConvertLayout — it breaks the partitioner in TVM v0.15
4. partition_for_cmsisnn then fires cleanly on all 7 ops
```
