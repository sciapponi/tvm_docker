// tvm target: {"kind":"c","tag":"","keys":["arm_cpu","cpu"],"feature.has_mve":false,"feature.has_dsp":true,"mcpu":"cortex-m4+vfp4"}
#define TVM_EXPORTS
#include "tvm/runtime/base.h"
#include "tvm/runtime/c_backend_api.h"
#include "tvm/ffi/c_api.h"
#include <math.h>
#include <stdbool.h>
void* __tvm_ffi__library_ctx = NULL;
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add2(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add3(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add4(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_concatenate(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_conv2d(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_conv2d1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul2(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul3(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_max_pool2d(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_max_pool2d1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_multiply(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_relu(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_relu1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape2(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_subtract(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_tir_sigmoid(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_tir_tanh(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose1(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose2(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose3(void* self_handle, void* args, int32_t num_args, void* result);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float expf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL float tanhf(float);
#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv_type_index == 0) || (var_lv_type_index == 4)) || (var_lv_type_index == 7)) || (var_lv_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv = ((var_lv_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv1_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv1_type_index == 0) || (var_lv1_type_index == 4)) || (var_lv1_type_index == 7)) || (var_lv1_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv1 = ((var_lv1_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_add_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_add_type_index == 0) || (var_T_add_type_index == 4)) || (var_T_add_type_index == 7)) || (var_T_add_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_add = ((var_T_add_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv", ".ndim on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv", ".dtype on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add_var_lv_shape = (((DLTensor*)var_lv)[0].shape);
  void* add_var_lv_strides = (((DLTensor*)var_lv)[0].strides);
  if (!(((((DLTensor*)var_lv)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv", ".device_type on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv)[0].device.device_id);
  void* lv = (((DLTensor*)var_lv)[0].data);
  if (!(!(var_lv1 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv1)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv1", ".ndim on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv1)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv1)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv1)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv1", ".dtype on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add_var_lv1_shape = (((DLTensor*)var_lv1)[0].shape);
  void* add_var_lv1_strides = (((DLTensor*)var_lv1)[0].strides);
  if (!(((((DLTensor*)var_lv1)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv1", ".device_type on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv1 = (((DLTensor*)var_lv1)[0].data);
  if (!(!(var_T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_T_add)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".ndim on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_add)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_add)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_add)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".dtype on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add_var_T_add_shape = (((DLTensor*)var_T_add)[0].shape);
  void* add_var_T_add_strides = (((DLTensor*)var_T_add)[0].strides);
  if (!(((((DLTensor*)var_T_add)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".device_type on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_add = (((DLTensor*)var_T_add)[0].data);
  if (!(add_var_lv_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)add_var_lv_strides)[3])) && ((int64_t)784 == (((int64_t*)add_var_lv_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv", ".strides on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv", " data pointer is NULL on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add_var_lv1_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add_var_lv1_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv1", ".strides on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv1)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv1.device_id", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to match ", "lv.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv1 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv1", " data pointer is NULL on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add_var_T_add_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)add_var_T_add_strides)[3])) && ((int64_t)784 == (((int64_t*)add_var_T_add_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_add", ".strides on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_add)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add.device_id", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to match ", "lv.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_add", " data pointer is NULL on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv.shape[0]", " on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv.shape[1]", " on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv.shape[2]", " on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv.shape[3]", " on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv.byte_offset", " on argument #", "0", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv1_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv1.shape[0]", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv1_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv1.shape[1]", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv1_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv1.shape[2]", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_lv1_shape)[3]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv1.shape[3]", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv1)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv1.byte_offset", " on argument #", "1", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_T_add_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[0]", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_T_add_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[1]", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_T_add_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[2]", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add_var_T_add_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[3]", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_add)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.byte_offset", " on argument #", "2", " when calling:\n  `", "add(lv: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), lv1: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 784; ++ax3) {
      int32_t cse_v1 = ((ax1 * 784) + ax3);
      ((float*)T_add)[cse_v1] = (((float*)lv)[cse_v1] + ((float*)lv1)[ax1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv5_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv5_type_index == 0) || (var_lv5_type_index == 4)) || (var_lv5_type_index == 7)) || (var_lv5_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv5 = ((var_lv5_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv6_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv6_type_index == 0) || (var_lv6_type_index == 4)) || (var_lv6_type_index == 7)) || (var_lv6_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv6 = ((var_lv6_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_add_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_add_type_index == 0) || (var_T_add_type_index == 4)) || (var_T_add_type_index == 7)) || (var_T_add_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_add = ((var_T_add_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv5 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv5)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv5", ".ndim on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv5)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv5)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv5)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv5", ".dtype on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add1_var_lv5_shape = (((DLTensor*)var_lv5)[0].shape);
  void* add1_var_lv5_strides = (((DLTensor*)var_lv5)[0].strides);
  if (!(((((DLTensor*)var_lv5)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv5", ".device_type on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv5)[0].device.device_id);
  void* lv5 = (((DLTensor*)var_lv5)[0].data);
  if (!(!(var_lv6 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv6)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv6", ".ndim on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv6)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv6)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv6)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv6", ".dtype on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add1_var_lv6_shape = (((DLTensor*)var_lv6)[0].shape);
  void* add1_var_lv6_strides = (((DLTensor*)var_lv6)[0].strides);
  if (!(((((DLTensor*)var_lv6)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv6", ".device_type on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv6 = (((DLTensor*)var_lv6)[0].data);
  if (!(!(var_T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_T_add)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".ndim on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_add)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_add)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_add)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".dtype on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add1_var_T_add_shape = (((DLTensor*)var_T_add)[0].shape);
  void* add1_var_T_add_strides = (((DLTensor*)var_T_add)[0].strides);
  if (!(((((DLTensor*)var_T_add)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".device_type on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_add = (((DLTensor*)var_T_add)[0].data);
  if (!(add1_var_lv5_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)add1_var_lv5_strides)[3])) && ((int64_t)392 == (((int64_t*)add1_var_lv5_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv5", ".strides on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv5 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv5", " data pointer is NULL on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add1_var_lv6_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add1_var_lv6_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv6", ".strides on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv6)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv6.device_id", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv5.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv6 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv6", " data pointer is NULL on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add1_var_T_add_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)add1_var_T_add_strides)[3])) && ((int64_t)392 == (((int64_t*)add1_var_T_add_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_add", ".strides on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_add)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add.device_id", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv5.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_add", " data pointer is NULL on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv5_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv5.shape[0]", " on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv5_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv5.shape[1]", " on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv5_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv5.shape[2]", " on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv5_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv5.shape[3]", " on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv5)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv5.byte_offset", " on argument #", "0", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv6_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv6.shape[0]", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv6_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv6.shape[1]", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv6_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv6.shape[2]", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_lv6_shape)[3]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv6.shape[3]", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv6)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv6.byte_offset", " on argument #", "1", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_T_add_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[0]", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_T_add_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[1]", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_T_add_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[2]", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add1_var_T_add_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[3]", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_add)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.byte_offset", " on argument #", "2", " when calling:\n  `", "add1(lv5: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), lv6: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32), T_add: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 392; ++ax3) {
      int32_t cse_v1 = ((ax1 * 392) + ax3);
      ((float*)T_add)[cse_v1] = (((float*)lv5)[cse_v1] + ((float*)lv6)[ax1]);
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add2(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv12_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv12_type_index == 0) || (var_lv12_type_index == 4)) || (var_lv12_type_index == 7)) || (var_lv12_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv12 = ((var_lv12_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_B_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_B_type_index == 0) || (var_B_type_index == 4)) || (var_B_type_index == 7)) || (var_B_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_B = ((var_B_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_add_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_add_type_index == 0) || (var_T_add_type_index == 4)) || (var_T_add_type_index == 7)) || (var_T_add_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_add = ((var_T_add_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv12 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv12)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv12", ".ndim on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv12)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv12)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv12)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv12", ".dtype on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add2_var_lv12_shape = (((DLTensor*)var_lv12)[0].shape);
  void* add2_var_lv12_strides = (((DLTensor*)var_lv12)[0].strides);
  if (!(((((DLTensor*)var_lv12)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv12", ".device_type on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv12)[0].device.device_id);
  void* lv12 = (((DLTensor*)var_lv12)[0].data);
  if (!(!(var_B == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((1 == (((DLTensor*)var_B)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".ndim on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_B)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_B)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_B)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".dtype on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add2_var_B_shape = (((DLTensor*)var_B)[0].shape);
  void* add2_var_B_strides = (((DLTensor*)var_B)[0].strides);
  if (!(((((DLTensor*)var_B)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".device_type on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* B = (((DLTensor*)var_B)[0].data);
  if (!(!(var_T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_add)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".ndim on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_add)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_add)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_add)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".dtype on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add2_var_T_add_shape = (((DLTensor*)var_T_add)[0].shape);
  void* add2_var_T_add_strides = (((DLTensor*)var_T_add)[0].strides);
  if (!(((((DLTensor*)var_T_add)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".device_type on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_add = (((DLTensor*)var_T_add)[0].data);
  if (!(add2_var_lv12_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add2_var_lv12_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv12", ".strides on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv12 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv12", " data pointer is NULL on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add2_var_B_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add2_var_B_strides)[0])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "B", ".strides on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_B)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B.device_id", " on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to match ", "lv12.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(B == NULL))) {
    const char* __tvm_assert_parts[6] = {"B", " data pointer is NULL on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add2_var_T_add_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add2_var_T_add_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_add", ".strides on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_add)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add.device_id", " on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to match ", "lv12.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_add", " data pointer is NULL on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)add2_var_lv12_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv12.shape[0]", " on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add2_var_lv12_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv12.shape[1]", " on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv12)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv12.byte_offset", " on argument #", "0", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add2_var_B_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[0]", " on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_B)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.byte_offset", " on argument #", "1", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add2_var_T_add_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[0]", " on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add2_var_T_add_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[1]", " on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_add)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.byte_offset", " on argument #", "2", " when calling:\n  `", "add2(lv12: Tensor([T.int64(1), T.int64(32)], float32), B: Tensor([T.int64(32)], float32), T_add: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    ((float*)T_add)[ax1] = (((float*)lv12)[ax1] + ((float*)B)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add3(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv16_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv16_type_index == 0) || (var_lv16_type_index == 4)) || (var_lv16_type_index == 7)) || (var_lv16_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv16 = ((var_lv16_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_B_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_B_type_index == 0) || (var_B_type_index == 4)) || (var_B_type_index == 7)) || (var_B_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_B = ((var_B_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_add_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_add_type_index == 0) || (var_T_add_type_index == 4)) || (var_T_add_type_index == 7)) || (var_T_add_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_add = ((var_T_add_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv16 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv16)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv16", ".ndim on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv16)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv16)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv16)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv16", ".dtype on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add3_var_lv16_shape = (((DLTensor*)var_lv16)[0].shape);
  void* add3_var_lv16_strides = (((DLTensor*)var_lv16)[0].strides);
  if (!(((((DLTensor*)var_lv16)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv16", ".device_type on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv16)[0].device.device_id);
  void* lv16 = (((DLTensor*)var_lv16)[0].data);
  if (!(!(var_B == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((1 == (((DLTensor*)var_B)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".ndim on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_B)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_B)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_B)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".dtype on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add3_var_B_shape = (((DLTensor*)var_B)[0].shape);
  void* add3_var_B_strides = (((DLTensor*)var_B)[0].strides);
  if (!(((((DLTensor*)var_B)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".device_type on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* B = (((DLTensor*)var_B)[0].data);
  if (!(!(var_T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_add)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".ndim on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_add)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_add)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_add)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".dtype on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add3_var_T_add_shape = (((DLTensor*)var_T_add)[0].shape);
  void* add3_var_T_add_strides = (((DLTensor*)var_T_add)[0].strides);
  if (!(((((DLTensor*)var_T_add)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".device_type on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_add = (((DLTensor*)var_T_add)[0].data);
  if (!(add3_var_lv16_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add3_var_lv16_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv16", ".strides on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv16 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv16", " data pointer is NULL on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add3_var_B_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add3_var_B_strides)[0])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "B", ".strides on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_B)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B.device_id", " on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv16.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(B == NULL))) {
    const char* __tvm_assert_parts[6] = {"B", " data pointer is NULL on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add3_var_T_add_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add3_var_T_add_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_add", ".strides on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_add)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add.device_id", " on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv16.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_add", " data pointer is NULL on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)add3_var_lv16_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv16.shape[0]", " on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add3_var_lv16_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv16.shape[1]", " on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv16)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv16.byte_offset", " on argument #", "0", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add3_var_B_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[0]", " on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_B)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.byte_offset", " on argument #", "1", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add3_var_T_add_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[0]", " on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add3_var_T_add_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[1]", " on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_add)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.byte_offset", " on argument #", "2", " when calling:\n  `", "add3(lv16: Tensor([T.int64(1), T.int64(64)], float32), B: Tensor([T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    ((float*)T_add)[ax1] = (((float*)lv16)[ax1] + ((float*)B)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_add4(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv27_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv27_type_index == 0) || (var_lv27_type_index == 4)) || (var_lv27_type_index == 7)) || (var_lv27_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv27 = ((var_lv27_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv28_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv28_type_index == 0) || (var_lv28_type_index == 4)) || (var_lv28_type_index == 7)) || (var_lv28_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv28 = ((var_lv28_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_add_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_add_type_index == 0) || (var_T_add_type_index == 4)) || (var_T_add_type_index == 7)) || (var_T_add_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_add = ((var_T_add_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv27 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv27)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv27", ".ndim on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv27)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv27)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv27)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv27", ".dtype on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add4_var_lv27_shape = (((DLTensor*)var_lv27)[0].shape);
  void* add4_var_lv27_strides = (((DLTensor*)var_lv27)[0].strides);
  if (!(((((DLTensor*)var_lv27)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv27", ".device_type on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv27)[0].device.device_id);
  void* lv27 = (((DLTensor*)var_lv27)[0].data);
  if (!(!(var_lv28 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv28)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv28", ".ndim on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv28)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv28)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv28)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv28", ".dtype on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add4_var_lv28_shape = (((DLTensor*)var_lv28)[0].shape);
  void* add4_var_lv28_strides = (((DLTensor*)var_lv28)[0].strides);
  if (!(((((DLTensor*)var_lv28)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv28", ".device_type on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv28 = (((DLTensor*)var_lv28)[0].data);
  if (!(!(var_T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_add)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".ndim on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_add)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_add)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_add)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".dtype on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* add4_var_T_add_shape = (((DLTensor*)var_T_add)[0].shape);
  void* add4_var_T_add_strides = (((DLTensor*)var_T_add)[0].strides);
  if (!(((((DLTensor*)var_T_add)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add", ".device_type on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_add = (((DLTensor*)var_T_add)[0].data);
  if (!(add4_var_lv27_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add4_var_lv27_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv27", ".strides on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv27 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv27", " data pointer is NULL on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add4_var_lv28_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add4_var_lv28_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv28", ".strides on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv28)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv28.device_id", " on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv27.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv28 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv28", " data pointer is NULL on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(add4_var_T_add_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)add4_var_T_add_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_add", ".strides on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_add)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_add.device_id", " on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv27.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_add == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_add", " data pointer is NULL on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)add4_var_lv27_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv27.shape[0]", " on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add4_var_lv27_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv27.shape[1]", " on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv27)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv27.byte_offset", " on argument #", "0", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add4_var_lv28_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv28.shape[0]", " on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add4_var_lv28_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv28.shape[1]", " on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv28)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv28.byte_offset", " on argument #", "1", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add4_var_T_add_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[0]", " on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)add4_var_T_add_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.shape[1]", " on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_add)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_add.byte_offset", " on argument #", "2", " when calling:\n  `", "add4(lv27: Tensor([T.int64(1), T.int64(64)], float32), lv28: Tensor([T.int64(1), T.int64(64)], float32), T_add: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    ((float*)T_add)[ax1] = (((float*)lv27)[ax1] + ((float*)lv28)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_concatenate(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv13_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv13_type_index == 0) || (var_lv13_type_index == 4)) || (var_lv13_type_index == 7)) || (var_lv13_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv13 = ((var_lv13_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_h_in_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_h_in_type_index == 0) || (var_h_in_type_index == 4)) || (var_h_in_type_index == 7)) || (var_h_in_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_h_in = ((var_h_in_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_concat_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_concat_type_index == 0) || (var_T_concat_type_index == 4)) || (var_T_concat_type_index == 7)) || (var_T_concat_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_concat = ((var_T_concat_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv13 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv13)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".ndim on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv13)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv13)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv13)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".dtype on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* concatenate_var_lv13_shape = (((DLTensor*)var_lv13)[0].shape);
  void* concatenate_var_lv13_strides = (((DLTensor*)var_lv13)[0].strides);
  if (!(((((DLTensor*)var_lv13)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".device_type on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv13)[0].device.device_id);
  void* lv13 = (((DLTensor*)var_lv13)[0].data);
  if (!(!(var_h_in == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_h_in)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".ndim on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_h_in)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_h_in)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_h_in)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".dtype on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* concatenate_var_h_in_shape = (((DLTensor*)var_h_in)[0].shape);
  void* concatenate_var_h_in_strides = (((DLTensor*)var_h_in)[0].strides);
  if (!(((((DLTensor*)var_h_in)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".device_type on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* h_in = (((DLTensor*)var_h_in)[0].data);
  if (!(!(var_T_concat == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_concat)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_concat", ".ndim on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_concat)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_concat)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_concat)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_concat", ".dtype on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* concatenate_var_T_concat_shape = (((DLTensor*)var_T_concat)[0].shape);
  void* concatenate_var_T_concat_strides = (((DLTensor*)var_T_concat)[0].strides);
  if (!(((((DLTensor*)var_T_concat)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_concat", ".device_type on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_concat = (((DLTensor*)var_T_concat)[0].data);
  if (!(concatenate_var_lv13_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)concatenate_var_lv13_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv13", ".strides on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv13 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv13", " data pointer is NULL on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(concatenate_var_h_in_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)concatenate_var_h_in_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "h_in", ".strides on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_h_in)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in.device_id", " on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected to match ", "lv13.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(h_in == NULL))) {
    const char* __tvm_assert_parts[6] = {"h_in", " data pointer is NULL on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(concatenate_var_T_concat_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)concatenate_var_T_concat_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_concat", ".strides on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_concat)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_concat.device_id", " on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected to match ", "lv13.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_concat == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_concat", " data pointer is NULL on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_lv13_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.shape[0]", " on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_lv13_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.shape[1]", " on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv13)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.byte_offset", " on argument #", "0", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_h_in_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.shape[0]", " on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_h_in_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.shape[1]", " on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_h_in)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.byte_offset", " on argument #", "1", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_T_concat_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_concat.shape[0]", " on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)concatenate_var_T_concat_shape)[1]) == (int64_t)96))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_concat.shape[1]", " on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "96"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_concat)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_concat.byte_offset", " on argument #", "2", " when calling:\n  `", "concatenate(lv13: Tensor([T.int64(1), T.int64(32)], float32), h_in: Tensor([T.int64(1), T.int64(64)], float32), T_concat: Tensor([T.int64(1), T.int64(96)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 96; ++ax1) {
    float condval;
    if ((32 <= ax1)) {
      condval = ((float*)h_in)[(ax1 - 32)];
    } else {
      condval = ((float*)lv13)[ax1];
    }
    ((float*)T_concat)[ax1] = condval;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_conv2d(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_input_frame_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_input_frame_type_index == 0) || (var_input_frame_type_index == 4)) || (var_input_frame_type_index == 7)) || (var_input_frame_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_input_frame = ((var_input_frame_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_B_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_B_type_index == 0) || (var_B_type_index == 4)) || (var_B_type_index == 7)) || (var_B_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_B = ((var_B_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_conv2d_nchw_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_conv2d_nchw_type_index == 0) || (var_conv2d_nchw_type_index == 4)) || (var_conv2d_nchw_type_index == 7)) || (var_conv2d_nchw_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_conv2d_nchw = ((var_conv2d_nchw_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_input_frame == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_input_frame)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "input_frame", ".ndim on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_input_frame)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_input_frame)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_input_frame)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "input_frame", ".dtype on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d_var_input_frame_shape = (((DLTensor*)var_input_frame)[0].shape);
  void* conv2d_var_input_frame_strides = (((DLTensor*)var_input_frame)[0].strides);
  if (!(((((DLTensor*)var_input_frame)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "input_frame", ".device_type on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_input_frame)[0].device.device_id);
  void* input_frame = (((DLTensor*)var_input_frame)[0].data);
  if (!(!(var_B == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_B)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".ndim on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_B)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_B)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_B)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".dtype on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d_var_B_shape = (((DLTensor*)var_B)[0].shape);
  void* conv2d_var_B_strides = (((DLTensor*)var_B)[0].strides);
  if (!(((((DLTensor*)var_B)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".device_type on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* B = (((DLTensor*)var_B)[0].data);
  if (!(!(var_conv2d_nchw == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_conv2d_nchw)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".ndim on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_conv2d_nchw)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_conv2d_nchw)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_conv2d_nchw)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".dtype on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d_var_conv2d_nchw_shape = (((DLTensor*)var_conv2d_nchw)[0].shape);
  void* conv2d_var_conv2d_nchw_strides = (((DLTensor*)var_conv2d_nchw)[0].strides);
  if (!(((((DLTensor*)var_conv2d_nchw)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".device_type on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d_nchw = (((DLTensor*)var_conv2d_nchw)[0].data);
  if (!(conv2d_var_input_frame_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)conv2d_var_input_frame_strides)[3])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "input_frame", ".strides on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(input_frame == NULL))) {
    const char* __tvm_assert_parts[6] = {"input_frame", " data pointer is NULL on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(conv2d_var_B_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)conv2d_var_B_strides)[3])) && ((int64_t)3 == (((int64_t*)conv2d_var_B_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "B", ".strides on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_B)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B.device_id", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to match ", "input_frame.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(B == NULL))) {
    const char* __tvm_assert_parts[6] = {"B", " data pointer is NULL on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(conv2d_var_conv2d_nchw_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)conv2d_var_conv2d_nchw_strides)[3])) && ((int64_t)784 == (((int64_t*)conv2d_var_conv2d_nchw_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "conv2d_nchw", ".strides on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_conv2d_nchw)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw.device_id", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to match ", "input_frame.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(conv2d_nchw == NULL))) {
    const char* __tvm_assert_parts[6] = {"conv2d_nchw", " data pointer is NULL on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_input_frame_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "input_frame.shape[0]", " on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_input_frame_shape)[1]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "input_frame.shape[1]", " on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_input_frame_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "input_frame.shape[2]", " on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_input_frame_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "input_frame.shape[3]", " on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_input_frame)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "input_frame.byte_offset", " on argument #", "0", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_B_shape)[0]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[0]", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_B_shape)[1]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[1]", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_B_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[2]", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_B_shape)[3]) == (int64_t)3))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[3]", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "3"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_B)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.byte_offset", " on argument #", "1", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_conv2d_nchw_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[0]", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_conv2d_nchw_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[1]", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_conv2d_nchw_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[2]", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d_var_conv2d_nchw_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[3]", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_conv2d_nchw)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.byte_offset", " on argument #", "2", " when calling:\n  `", "conv2d(input_frame: Tensor([T.int64(1), T.int64(1), T.int64(1), T.int64(784)], float32), B: Tensor([T.int64(16), T.int64(1), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)3144, 2, 32);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i3 = 0; i3 < 786; ++i3) {
    float condval;
    if (((1 <= i3) && (i3 < 785))) {
      condval = ((float*)input_frame)[(i3 - 1)];
    } else {
      condval = 0.000000e+00f;
    }
    ((float*)pad_temp)[i3] = condval;
  }
  for (int32_t ff = 0; ff < 16; ++ff) {
    for (int32_t xx = 0; xx < 784; ++xx) {
      for (int32_t rx = 0; rx < 3; ++rx) {
        int32_t cse_v1 = ((ff * 784) + xx);
        if (rx == 0) {
          ((float*)conv2d_nchw)[cse_v1] = 0.000000e+00f;
        }
        ((float*)conv2d_nchw)[cse_v1] = (((float*)conv2d_nchw)[cse_v1] + (((float*)pad_temp)[(xx + rx)] * ((float*)B)[((ff * 3) + rx)]));
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_conv2d1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv4_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv4_type_index == 0) || (var_lv4_type_index == 4)) || (var_lv4_type_index == 7)) || (var_lv4_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv4 = ((var_lv4_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_B_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_B_type_index == 0) || (var_B_type_index == 4)) || (var_B_type_index == 7)) || (var_B_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_B = ((var_B_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_conv2d_nchw_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_conv2d_nchw_type_index == 0) || (var_conv2d_nchw_type_index == 4)) || (var_conv2d_nchw_type_index == 7)) || (var_conv2d_nchw_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_conv2d_nchw = ((var_conv2d_nchw_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv4 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv4)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv4", ".ndim on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv4)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv4)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv4)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv4", ".dtype on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d1_var_lv4_shape = (((DLTensor*)var_lv4)[0].shape);
  void* conv2d1_var_lv4_strides = (((DLTensor*)var_lv4)[0].strides);
  if (!(((((DLTensor*)var_lv4)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv4", ".device_type on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv4)[0].device.device_id);
  void* lv4 = (((DLTensor*)var_lv4)[0].data);
  if (!(!(var_B == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_B)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".ndim on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_B)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_B)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_B)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".dtype on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d1_var_B_shape = (((DLTensor*)var_B)[0].shape);
  void* conv2d1_var_B_strides = (((DLTensor*)var_B)[0].strides);
  if (!(((((DLTensor*)var_B)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B", ".device_type on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* B = (((DLTensor*)var_B)[0].data);
  if (!(!(var_conv2d_nchw == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_conv2d_nchw)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".ndim on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_conv2d_nchw)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_conv2d_nchw)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_conv2d_nchw)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".dtype on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d1_var_conv2d_nchw_shape = (((DLTensor*)var_conv2d_nchw)[0].shape);
  void* conv2d1_var_conv2d_nchw_strides = (((DLTensor*)var_conv2d_nchw)[0].strides);
  if (!(((((DLTensor*)var_conv2d_nchw)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw", ".device_type on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* conv2d_nchw = (((DLTensor*)var_conv2d_nchw)[0].data);
  if (!(conv2d1_var_lv4_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)conv2d1_var_lv4_strides)[3])) && ((int64_t)392 == (((int64_t*)conv2d1_var_lv4_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv4", ".strides on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv4 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv4", " data pointer is NULL on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(conv2d1_var_B_strides == NULL)) {
    if (!(((((int64_t)1 == (((int64_t*)conv2d1_var_B_strides)[3])) && ((int64_t)3 == (((int64_t*)conv2d1_var_B_strides)[1]))) && ((int64_t)48 == (((int64_t*)conv2d1_var_B_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "B", ".strides on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_B)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "B.device_id", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv4.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(B == NULL))) {
    const char* __tvm_assert_parts[6] = {"B", " data pointer is NULL on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(conv2d1_var_conv2d_nchw_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)conv2d1_var_conv2d_nchw_strides)[3])) && ((int64_t)392 == (((int64_t*)conv2d1_var_conv2d_nchw_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "conv2d_nchw", ".strides on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_conv2d_nchw)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "conv2d_nchw.device_id", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv4.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(conv2d_nchw == NULL))) {
    const char* __tvm_assert_parts[6] = {"conv2d_nchw", " data pointer is NULL on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_lv4_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv4.shape[0]", " on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_lv4_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv4.shape[1]", " on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_lv4_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv4.shape[2]", " on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_lv4_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv4.shape[3]", " on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv4)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv4.byte_offset", " on argument #", "0", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_B_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[0]", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_B_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[1]", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_B_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[2]", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_B_shape)[3]) == (int64_t)3))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.shape[3]", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "3"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_B)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "B.byte_offset", " on argument #", "1", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_conv2d_nchw_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[0]", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_conv2d_nchw_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[1]", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_conv2d_nchw_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[2]", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)conv2d1_var_conv2d_nchw_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.shape[3]", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_conv2d_nchw)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "conv2d_nchw.byte_offset", " on argument #", "2", " when calling:\n  `", "conv2d1(lv4: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32), B: Tensor([T.int64(32), T.int64(16), T.int64(1), T.int64(3)], float32), conv2d_nchw: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* pad_temp = TVMBackendAllocWorkspace(1, dev_id, (uint64_t)25216, 2, 32);
  if (pad_temp == NULL) {
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i3 = 0; i3 < 394; ++i3) {
      float condval;
      if (((1 <= i3) && (i3 < 393))) {
        condval = ((float*)lv4)[(((i1 * 392) + i3) - 1)];
      } else {
        condval = 0.000000e+00f;
      }
      ((float*)pad_temp)[((i1 * 394) + i3)] = condval;
    }
  }
  for (int32_t ff = 0; ff < 32; ++ff) {
    for (int32_t xx = 0; xx < 392; ++xx) {
      for (int32_t rc = 0; rc < 16; ++rc) {
        for (int32_t rx = 0; rx < 3; ++rx) {
          int32_t cse_v1 = ((ff * 392) + xx);
          if ((rc == 0) && (rx == 0)) {
            ((float*)conv2d_nchw)[cse_v1] = 0.000000e+00f;
          }
          ((float*)conv2d_nchw)[cse_v1] = (((float*)conv2d_nchw)[cse_v1] + (((float*)pad_temp)[(((rc * 394) + xx) + rx)] * ((float*)B)[(((ff * 48) + (rc * 3)) + rx)]));
        }
      }
    }
  }
  if (TVMBackendFreeWorkspace(1, dev_id, pad_temp) != 0) {
    return -1;
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv10_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv10_type_index == 0) || (var_lv10_type_index == 4)) || (var_lv10_type_index == 7)) || (var_lv10_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv10 = ((var_lv10_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv11_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv11_type_index == 0) || (var_lv11_type_index == 4)) || (var_lv11_type_index == 7)) || (var_lv11_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv11 = ((var_lv11_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_matmul_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_matmul_type_index == 0) || (var_matmul_type_index == 4)) || (var_matmul_type_index == 7)) || (var_matmul_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_matmul = ((var_matmul_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv10 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv10)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv10", ".ndim on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv10)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv10)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv10)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv10", ".dtype on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul_var_lv10_shape = (((DLTensor*)var_lv10)[0].shape);
  void* matmul_var_lv10_strides = (((DLTensor*)var_lv10)[0].strides);
  if (!(((((DLTensor*)var_lv10)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv10", ".device_type on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv10)[0].device.device_id);
  void* lv10 = (((DLTensor*)var_lv10)[0].data);
  if (!(!(var_lv11 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv11)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv11", ".ndim on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv11)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv11)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv11)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv11", ".dtype on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul_var_lv11_shape = (((DLTensor*)var_lv11)[0].shape);
  void* matmul_var_lv11_strides = (((DLTensor*)var_lv11)[0].strides);
  if (!(((((DLTensor*)var_lv11)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv11", ".device_type on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv11 = (((DLTensor*)var_lv11)[0].data);
  if (!(!(var_matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_matmul)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".ndim on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_matmul)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_matmul)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_matmul)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".dtype on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul_var_matmul_shape = (((DLTensor*)var_matmul)[0].shape);
  void* matmul_var_matmul_strides = (((DLTensor*)var_matmul)[0].strides);
  if (!(((((DLTensor*)var_matmul)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".device_type on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul = (((DLTensor*)var_matmul)[0].data);
  if (!(matmul_var_lv10_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul_var_lv10_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv10", ".strides on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv10 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv10", " data pointer is NULL on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul_var_lv11_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)matmul_var_lv11_strides)[1])) && ((int64_t)32 == (((int64_t*)matmul_var_lv11_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv11", ".strides on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv11)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv11.device_id", " on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to match ", "lv10.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv11 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv11", " data pointer is NULL on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul_var_matmul_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul_var_matmul_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "matmul", ".strides on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_matmul)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul.device_id", " on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected to match ", "lv10.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"matmul", " data pointer is NULL on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_lv10_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv10.shape[0]", " on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_lv10_shape)[1]) == (int64_t)6272))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv10.shape[1]", " on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "6272"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv10)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv10.byte_offset", " on argument #", "0", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_lv11_shape)[0]) == (int64_t)6272))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv11.shape[0]", " on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "6272"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_lv11_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv11.shape[1]", " on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv11)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv11.byte_offset", " on argument #", "1", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_matmul_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[0]", " on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul_var_matmul_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[1]", " on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_matmul)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.byte_offset", " on argument #", "2", " when calling:\n  `", "matmul(lv10: Tensor([T.int64(1), T.int64(6272)], float32), lv11: Tensor([T.int64(6272), T.int64(32)], float32), matmul: Tensor([T.int64(1), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 32; ++i1) {
    for (int32_t k = 0; k < 6272; ++k) {
      if (k == 0) {
        ((float*)matmul)[i1] = 0.000000e+00f;
      }
      ((float*)matmul)[i1] = (((float*)matmul)[i1] + (((float*)lv10)[k] * ((float*)lv11)[((k * 32) + i1)]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv14_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv14_type_index == 0) || (var_lv14_type_index == 4)) || (var_lv14_type_index == 7)) || (var_lv14_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv14 = ((var_lv14_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv15_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv15_type_index == 0) || (var_lv15_type_index == 4)) || (var_lv15_type_index == 7)) || (var_lv15_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv15 = ((var_lv15_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_matmul_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_matmul_type_index == 0) || (var_matmul_type_index == 4)) || (var_matmul_type_index == 7)) || (var_matmul_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_matmul = ((var_matmul_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv14 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv14)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv14", ".ndim on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv14)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv14)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv14)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv14", ".dtype on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul1_var_lv14_shape = (((DLTensor*)var_lv14)[0].shape);
  void* matmul1_var_lv14_strides = (((DLTensor*)var_lv14)[0].strides);
  if (!(((((DLTensor*)var_lv14)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv14", ".device_type on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv14)[0].device.device_id);
  void* lv14 = (((DLTensor*)var_lv14)[0].data);
  if (!(!(var_lv15 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv15)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv15", ".ndim on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv15)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv15)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv15)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv15", ".dtype on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul1_var_lv15_shape = (((DLTensor*)var_lv15)[0].shape);
  void* matmul1_var_lv15_strides = (((DLTensor*)var_lv15)[0].strides);
  if (!(((((DLTensor*)var_lv15)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv15", ".device_type on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv15 = (((DLTensor*)var_lv15)[0].data);
  if (!(!(var_matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_matmul)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".ndim on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_matmul)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_matmul)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_matmul)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".dtype on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul1_var_matmul_shape = (((DLTensor*)var_matmul)[0].shape);
  void* matmul1_var_matmul_strides = (((DLTensor*)var_matmul)[0].strides);
  if (!(((((DLTensor*)var_matmul)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".device_type on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul = (((DLTensor*)var_matmul)[0].data);
  if (!(matmul1_var_lv14_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul1_var_lv14_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv14", ".strides on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv14 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv14", " data pointer is NULL on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul1_var_lv15_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)matmul1_var_lv15_strides)[1])) && ((int64_t)64 == (((int64_t*)matmul1_var_lv15_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv15", ".strides on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv15)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv15.device_id", " on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv14.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv15 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv15", " data pointer is NULL on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul1_var_matmul_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul1_var_matmul_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "matmul", ".strides on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_matmul)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul.device_id", " on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv14.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"matmul", " data pointer is NULL on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_lv14_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv14.shape[0]", " on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_lv14_shape)[1]) == (int64_t)96))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv14.shape[1]", " on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "96"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv14)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv14.byte_offset", " on argument #", "0", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_lv15_shape)[0]) == (int64_t)96))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv15.shape[0]", " on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "96"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_lv15_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv15.shape[1]", " on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv15)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv15.byte_offset", " on argument #", "1", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_matmul_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[0]", " on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul1_var_matmul_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[1]", " on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_matmul)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.byte_offset", " on argument #", "2", " when calling:\n  `", "matmul1(lv14: Tensor([T.int64(1), T.int64(96)], float32), lv15: Tensor([T.int64(96), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 64; ++i1) {
    for (int32_t k = 0; k < 96; ++k) {
      if (k == 0) {
        ((float*)matmul)[i1] = 0.000000e+00f;
      }
      ((float*)matmul)[i1] = (((float*)matmul)[i1] + (((float*)lv14)[k] * ((float*)lv15)[((k * 64) + i1)]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul2(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv13_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv13_type_index == 0) || (var_lv13_type_index == 4)) || (var_lv13_type_index == 7)) || (var_lv13_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv13 = ((var_lv13_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv21_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv21_type_index == 0) || (var_lv21_type_index == 4)) || (var_lv21_type_index == 7)) || (var_lv21_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv21 = ((var_lv21_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_matmul_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_matmul_type_index == 0) || (var_matmul_type_index == 4)) || (var_matmul_type_index == 7)) || (var_matmul_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_matmul = ((var_matmul_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv13 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv13)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".ndim on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv13)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv13)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv13)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".dtype on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul2_var_lv13_shape = (((DLTensor*)var_lv13)[0].shape);
  void* matmul2_var_lv13_strides = (((DLTensor*)var_lv13)[0].strides);
  if (!(((((DLTensor*)var_lv13)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv13", ".device_type on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv13)[0].device.device_id);
  void* lv13 = (((DLTensor*)var_lv13)[0].data);
  if (!(!(var_lv21 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv21)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv21", ".ndim on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv21)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv21)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv21)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv21", ".dtype on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul2_var_lv21_shape = (((DLTensor*)var_lv21)[0].shape);
  void* matmul2_var_lv21_strides = (((DLTensor*)var_lv21)[0].strides);
  if (!(((((DLTensor*)var_lv21)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv21", ".device_type on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv21 = (((DLTensor*)var_lv21)[0].data);
  if (!(!(var_matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_matmul)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".ndim on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_matmul)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_matmul)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_matmul)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".dtype on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul2_var_matmul_shape = (((DLTensor*)var_matmul)[0].shape);
  void* matmul2_var_matmul_strides = (((DLTensor*)var_matmul)[0].strides);
  if (!(((((DLTensor*)var_matmul)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".device_type on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul = (((DLTensor*)var_matmul)[0].data);
  if (!(matmul2_var_lv13_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul2_var_lv13_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv13", ".strides on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv13 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv13", " data pointer is NULL on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul2_var_lv21_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)matmul2_var_lv21_strides)[1])) && ((int64_t)64 == (((int64_t*)matmul2_var_lv21_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv21", ".strides on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv21)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv21.device_id", " on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv13.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv21 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv21", " data pointer is NULL on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul2_var_matmul_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul2_var_matmul_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "matmul", ".strides on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_matmul)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul.device_id", " on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv13.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"matmul", " data pointer is NULL on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_lv13_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.shape[0]", " on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_lv13_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.shape[1]", " on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv13)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv13.byte_offset", " on argument #", "0", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_lv21_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv21.shape[0]", " on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_lv21_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv21.shape[1]", " on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv21)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv21.byte_offset", " on argument #", "1", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_matmul_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[0]", " on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul2_var_matmul_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[1]", " on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_matmul)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.byte_offset", " on argument #", "2", " when calling:\n  `", "matmul2(lv13: Tensor([T.int64(1), T.int64(32)], float32), lv21: Tensor([T.int64(32), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 64; ++i1) {
    for (int32_t k = 0; k < 32; ++k) {
      if (k == 0) {
        ((float*)matmul)[i1] = 0.000000e+00f;
      }
      ((float*)matmul)[i1] = (((float*)matmul)[i1] + (((float*)lv13)[k] * ((float*)lv21)[((k * 64) + i1)]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_matmul3(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_h_in_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_h_in_type_index == 0) || (var_h_in_type_index == 4)) || (var_h_in_type_index == 7)) || (var_h_in_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_h_in = ((var_h_in_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv23_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv23_type_index == 0) || (var_lv23_type_index == 4)) || (var_lv23_type_index == 7)) || (var_lv23_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv23 = ((var_lv23_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_matmul_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_matmul_type_index == 0) || (var_matmul_type_index == 4)) || (var_matmul_type_index == 7)) || (var_matmul_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_matmul = ((var_matmul_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_h_in == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_h_in)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".ndim on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_h_in)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_h_in)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_h_in)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".dtype on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul3_var_h_in_shape = (((DLTensor*)var_h_in)[0].shape);
  void* matmul3_var_h_in_strides = (((DLTensor*)var_h_in)[0].strides);
  if (!(((((DLTensor*)var_h_in)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "h_in", ".device_type on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_h_in)[0].device.device_id);
  void* h_in = (((DLTensor*)var_h_in)[0].data);
  if (!(!(var_lv23 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv23)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv23", ".ndim on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv23)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv23)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv23)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv23", ".dtype on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul3_var_lv23_shape = (((DLTensor*)var_lv23)[0].shape);
  void* matmul3_var_lv23_strides = (((DLTensor*)var_lv23)[0].strides);
  if (!(((((DLTensor*)var_lv23)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv23", ".device_type on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv23 = (((DLTensor*)var_lv23)[0].data);
  if (!(!(var_matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_matmul)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".ndim on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_matmul)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_matmul)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_matmul)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".dtype on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul3_var_matmul_shape = (((DLTensor*)var_matmul)[0].shape);
  void* matmul3_var_matmul_strides = (((DLTensor*)var_matmul)[0].strides);
  if (!(((((DLTensor*)var_matmul)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul", ".device_type on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* matmul = (((DLTensor*)var_matmul)[0].data);
  if (!(matmul3_var_h_in_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul3_var_h_in_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "h_in", ".strides on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(h_in == NULL))) {
    const char* __tvm_assert_parts[6] = {"h_in", " data pointer is NULL on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul3_var_lv23_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)matmul3_var_lv23_strides)[1])) && ((int64_t)64 == (((int64_t*)matmul3_var_lv23_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv23", ".strides on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv23)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv23.device_id", " on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "h_in.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv23 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv23", " data pointer is NULL on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(matmul3_var_matmul_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)matmul3_var_matmul_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "matmul", ".strides on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_matmul)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "matmul.device_id", " on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "h_in.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(matmul == NULL))) {
    const char* __tvm_assert_parts[6] = {"matmul", " data pointer is NULL on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_h_in_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.shape[0]", " on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_h_in_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.shape[1]", " on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_h_in)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "h_in.byte_offset", " on argument #", "0", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_lv23_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv23.shape[0]", " on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_lv23_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv23.shape[1]", " on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv23)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv23.byte_offset", " on argument #", "1", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_matmul_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[0]", " on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)matmul3_var_matmul_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.shape[1]", " on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_matmul)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "matmul.byte_offset", " on argument #", "2", " when calling:\n  `", "matmul3(h_in: Tensor([T.int64(1), T.int64(64)], float32), lv23: Tensor([T.int64(64), T.int64(64)], float32), matmul: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 64; ++i1) {
    for (int32_t k = 0; k < 64; ++k) {
      if (k == 0) {
        ((float*)matmul)[i1] = 0.000000e+00f;
      }
      ((float*)matmul)[i1] = (((float*)matmul)[i1] + (((float*)h_in)[k] * ((float*)lv23)[((k * 64) + i1)]));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_max_pool2d(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv3_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv3_type_index == 0) || (var_lv3_type_index == 4)) || (var_lv3_type_index == 7)) || (var_lv3_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv3 = ((var_lv3_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_pool_max_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_pool_max_type_index == 0) || (var_pool_max_type_index == 4)) || (var_pool_max_type_index == 7)) || (var_pool_max_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_pool_max = ((var_pool_max_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv3 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv3)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv3", ".ndim on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv3)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv3)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv3)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv3", ".dtype on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* max_pool2d_var_lv3_shape = (((DLTensor*)var_lv3)[0].shape);
  void* max_pool2d_var_lv3_strides = (((DLTensor*)var_lv3)[0].strides);
  if (!(((((DLTensor*)var_lv3)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv3", ".device_type on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv3)[0].device.device_id);
  void* lv3 = (((DLTensor*)var_lv3)[0].data);
  if (!(!(var_pool_max == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_pool_max)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".ndim on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_pool_max)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_pool_max)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_pool_max)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".dtype on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* max_pool2d_var_pool_max_shape = (((DLTensor*)var_pool_max)[0].shape);
  void* max_pool2d_var_pool_max_strides = (((DLTensor*)var_pool_max)[0].strides);
  if (!(((((DLTensor*)var_pool_max)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".device_type on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* pool_max = (((DLTensor*)var_pool_max)[0].data);
  if (!(max_pool2d_var_lv3_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)max_pool2d_var_lv3_strides)[3])) && ((int64_t)784 == (((int64_t*)max_pool2d_var_lv3_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv3", ".strides on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv3 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv3", " data pointer is NULL on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(max_pool2d_var_pool_max_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)max_pool2d_var_pool_max_strides)[3])) && ((int64_t)392 == (((int64_t*)max_pool2d_var_pool_max_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "pool_max", ".strides on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_pool_max)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max.device_id", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv3.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(pool_max == NULL))) {
    const char* __tvm_assert_parts[6] = {"pool_max", " data pointer is NULL on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_lv3_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv3.shape[0]", " on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_lv3_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv3.shape[1]", " on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_lv3_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv3.shape[2]", " on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_lv3_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv3.shape[3]", " on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv3)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv3.byte_offset", " on argument #", "0", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_pool_max_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[0]", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_pool_max_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[1]", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_pool_max_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[2]", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d_var_pool_max_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[3]", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_pool_max)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.byte_offset", " on argument #", "1", " when calling:\n  `", "max_pool2d(lv3: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), pool_max: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 392; ++ax3) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        int32_t cse_v1 = ((ax1 * 392) + ax3);
        if (rv1 == 0) {
          ((float*)pool_max)[cse_v1] = -3.402823e+38f;
        }
        float v_ = ((float*)pool_max)[cse_v1];
        float v__1 = ((float*)lv3)[(((ax1 * 784) + (ax3 * 2)) + rv1)];
        ((float*)pool_max)[cse_v1] = ((v_) > (v__1) ? (v_) : (v__1));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_max_pool2d1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv8_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv8_type_index == 0) || (var_lv8_type_index == 4)) || (var_lv8_type_index == 7)) || (var_lv8_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv8 = ((var_lv8_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_pool_max_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_pool_max_type_index == 0) || (var_pool_max_type_index == 4)) || (var_pool_max_type_index == 7)) || (var_pool_max_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_pool_max = ((var_pool_max_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv8 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv8)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv8", ".ndim on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv8)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv8)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv8)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv8", ".dtype on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* max_pool2d1_var_lv8_shape = (((DLTensor*)var_lv8)[0].shape);
  void* max_pool2d1_var_lv8_strides = (((DLTensor*)var_lv8)[0].strides);
  if (!(((((DLTensor*)var_lv8)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv8", ".device_type on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv8)[0].device.device_id);
  void* lv8 = (((DLTensor*)var_lv8)[0].data);
  if (!(!(var_pool_max == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_pool_max)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".ndim on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_pool_max)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_pool_max)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_pool_max)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".dtype on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* max_pool2d1_var_pool_max_shape = (((DLTensor*)var_pool_max)[0].shape);
  void* max_pool2d1_var_pool_max_strides = (((DLTensor*)var_pool_max)[0].strides);
  if (!(((((DLTensor*)var_pool_max)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max", ".device_type on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* pool_max = (((DLTensor*)var_pool_max)[0].data);
  if (!(max_pool2d1_var_lv8_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)max_pool2d1_var_lv8_strides)[3])) && ((int64_t)392 == (((int64_t*)max_pool2d1_var_lv8_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv8", ".strides on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv8 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv8", " data pointer is NULL on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(max_pool2d1_var_pool_max_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)max_pool2d1_var_pool_max_strides)[3])) && ((int64_t)196 == (((int64_t*)max_pool2d1_var_pool_max_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "pool_max", ".strides on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_pool_max)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "pool_max.device_id", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected to match ", "lv8.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(pool_max == NULL))) {
    const char* __tvm_assert_parts[6] = {"pool_max", " data pointer is NULL on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_lv8_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv8.shape[0]", " on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_lv8_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv8.shape[1]", " on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_lv8_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv8.shape[2]", " on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_lv8_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv8.shape[3]", " on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv8)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv8.byte_offset", " on argument #", "0", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_pool_max_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[0]", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_pool_max_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[1]", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_pool_max_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[2]", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)max_pool2d1_var_pool_max_shape)[3]) == (int64_t)196))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.shape[3]", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "196"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_pool_max)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "pool_max.byte_offset", " on argument #", "1", " when calling:\n  `", "max_pool2d1(lv8: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), pool_max: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    for (int32_t ax3 = 0; ax3 < 196; ++ax3) {
      for (int32_t rv1 = 0; rv1 < 2; ++rv1) {
        int32_t cse_v1 = ((ax1 * 196) + ax3);
        if (rv1 == 0) {
          ((float*)pool_max)[cse_v1] = -3.402823e+38f;
        }
        float v_ = ((float*)pool_max)[cse_v1];
        float v__1 = ((float*)lv8)[(((ax1 * 392) + (ax3 * 2)) + rv1)];
        ((float*)pool_max)[cse_v1] = ((v_) > (v__1) ? (v_) : (v__1));
      }
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_multiply(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 3))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "3", " arguments", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv25_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv25_type_index == 0) || (var_lv25_type_index == 4)) || (var_lv25_type_index == 7)) || (var_lv25_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv25 = ((var_lv25_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_lv26_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_lv26_type_index == 0) || (var_lv26_type_index == 4)) || (var_lv26_type_index == 7)) || (var_lv26_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv26 = ((var_lv26_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  int32_t var_T_multiply_type_index = (((TVMFFIAny*)args)[2].type_index);
  if (!(((((var_T_multiply_type_index == 0) || (var_T_multiply_type_index == 4)) || (var_T_multiply_type_index == 7)) || (var_T_multiply_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_multiply = ((var_T_multiply_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[2].v_ptr) + 24)) : (((TVMFFIAny*)args)[2].v_ptr));
  if (!(!(var_lv25 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv25)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv25", ".ndim on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv25)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv25)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv25)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv25", ".dtype on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* multiply_var_lv25_shape = (((DLTensor*)var_lv25)[0].shape);
  void* multiply_var_lv25_strides = (((DLTensor*)var_lv25)[0].strides);
  if (!(((((DLTensor*)var_lv25)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv25", ".device_type on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv25)[0].device.device_id);
  void* lv25 = (((DLTensor*)var_lv25)[0].data);
  if (!(!(var_lv26 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv26)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv26", ".ndim on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv26)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv26)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv26)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv26", ".dtype on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* multiply_var_lv26_shape = (((DLTensor*)var_lv26)[0].shape);
  void* multiply_var_lv26_strides = (((DLTensor*)var_lv26)[0].strides);
  if (!(((((DLTensor*)var_lv26)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv26", ".device_type on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* lv26 = (((DLTensor*)var_lv26)[0].data);
  if (!(!(var_T_multiply == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_multiply)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_multiply", ".ndim on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_multiply)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_multiply)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_multiply)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_multiply", ".dtype on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* multiply_var_T_multiply_shape = (((DLTensor*)var_T_multiply)[0].shape);
  void* multiply_var_T_multiply_strides = (((DLTensor*)var_T_multiply)[0].strides);
  if (!(((((DLTensor*)var_T_multiply)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_multiply", ".device_type on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_multiply = (((DLTensor*)var_T_multiply)[0].data);
  if (!(multiply_var_lv25_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)multiply_var_lv25_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv25", ".strides on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv25 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv25", " data pointer is NULL on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(multiply_var_lv26_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)multiply_var_lv26_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv26", ".strides on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_lv26)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv26.device_id", " on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv25.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(lv26 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv26", " data pointer is NULL on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(multiply_var_T_multiply_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)multiply_var_T_multiply_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_multiply", ".strides on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_multiply)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_multiply.device_id", " on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv25.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_multiply == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_multiply", " data pointer is NULL on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_lv25_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv25.shape[0]", " on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_lv25_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv25.shape[1]", " on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv25)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv25.byte_offset", " on argument #", "0", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_lv26_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv26.shape[0]", " on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_lv26_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv26.shape[1]", " on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv26)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv26.byte_offset", " on argument #", "1", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_T_multiply_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_multiply.shape[0]", " on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)multiply_var_T_multiply_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_multiply.shape[1]", " on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_multiply)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_multiply.byte_offset", " on argument #", "2", " when calling:\n  `", "multiply(lv25: Tensor([T.int64(1), T.int64(64)], float32), lv26: Tensor([T.int64(1), T.int64(64)], float32), T_multiply: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    ((float*)T_multiply)[ax1] = (((float*)lv25)[ax1] * ((float*)lv26)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_relu(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv2_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv2_type_index == 0) || (var_lv2_type_index == 4)) || (var_lv2_type_index == 7)) || (var_lv2_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv2 = ((var_lv2_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_compute_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_compute_type_index == 0) || (var_compute_type_index == 4)) || (var_compute_type_index == 7)) || (var_compute_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_compute = ((var_compute_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv2 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv2)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv2", ".ndim on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv2)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv2)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv2)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv2", ".dtype on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* relu_var_lv2_shape = (((DLTensor*)var_lv2)[0].shape);
  void* relu_var_lv2_strides = (((DLTensor*)var_lv2)[0].strides);
  if (!(((((DLTensor*)var_lv2)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv2", ".device_type on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv2)[0].device.device_id);
  void* lv2 = (((DLTensor*)var_lv2)[0].data);
  if (!(!(var_compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_compute)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".ndim on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_compute)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_compute)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_compute)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".dtype on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* relu_var_compute_shape = (((DLTensor*)var_compute)[0].shape);
  void* relu_var_compute_strides = (((DLTensor*)var_compute)[0].strides);
  if (!(((((DLTensor*)var_compute)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".device_type on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* compute = (((DLTensor*)var_compute)[0].data);
  if (!(relu_var_lv2_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)relu_var_lv2_strides)[3])) && ((int64_t)784 == (((int64_t*)relu_var_lv2_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv2", ".strides on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv2 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv2", " data pointer is NULL on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(relu_var_compute_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)relu_var_compute_strides)[3])) && ((int64_t)784 == (((int64_t*)relu_var_compute_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "compute", ".strides on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_compute)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute.device_id", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected to match ", "lv2.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"compute", " data pointer is NULL on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)relu_var_lv2_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv2.shape[0]", " on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_lv2_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv2.shape[1]", " on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_lv2_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv2.shape[2]", " on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_lv2_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv2.shape[3]", " on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv2)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv2.byte_offset", " on argument #", "0", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_compute_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[0]", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_compute_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[1]", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_compute_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[2]", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu_var_compute_shape)[3]) == (int64_t)784))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[3]", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "784"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_compute)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.byte_offset", " on argument #", "1", " when calling:\n  `", "relu(lv2: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32), compute: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(784)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 16; ++i1) {
    for (int32_t i3 = 0; i3 < 784; ++i3) {
      int32_t cse_v1 = ((i1 * 784) + i3);
      float v_ = ((float*)lv2)[cse_v1];
      ((float*)compute)[cse_v1] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_relu1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv7_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv7_type_index == 0) || (var_lv7_type_index == 4)) || (var_lv7_type_index == 7)) || (var_lv7_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv7 = ((var_lv7_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_compute_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_compute_type_index == 0) || (var_compute_type_index == 4)) || (var_compute_type_index == 7)) || (var_compute_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_compute = ((var_compute_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv7 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv7)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv7", ".ndim on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv7)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv7)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv7)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv7", ".dtype on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* relu1_var_lv7_shape = (((DLTensor*)var_lv7)[0].shape);
  void* relu1_var_lv7_strides = (((DLTensor*)var_lv7)[0].strides);
  if (!(((((DLTensor*)var_lv7)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv7", ".device_type on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv7)[0].device.device_id);
  void* lv7 = (((DLTensor*)var_lv7)[0].data);
  if (!(!(var_compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_compute)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".ndim on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_compute)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_compute)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_compute)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".dtype on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* relu1_var_compute_shape = (((DLTensor*)var_compute)[0].shape);
  void* relu1_var_compute_strides = (((DLTensor*)var_compute)[0].strides);
  if (!(((((DLTensor*)var_compute)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".device_type on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* compute = (((DLTensor*)var_compute)[0].data);
  if (!(relu1_var_lv7_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)relu1_var_lv7_strides)[3])) && ((int64_t)392 == (((int64_t*)relu1_var_lv7_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv7", ".strides on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv7 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv7", " data pointer is NULL on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(relu1_var_compute_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)relu1_var_compute_strides)[3])) && ((int64_t)392 == (((int64_t*)relu1_var_compute_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "compute", ".strides on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_compute)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute.device_id", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected to match ", "lv7.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"compute", " data pointer is NULL on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_lv7_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv7.shape[0]", " on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_lv7_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv7.shape[1]", " on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_lv7_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv7.shape[2]", " on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_lv7_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv7.shape[3]", " on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv7)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv7.byte_offset", " on argument #", "0", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_compute_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[0]", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_compute_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[1]", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_compute_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[2]", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)relu1_var_compute_shape)[3]) == (int64_t)392))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[3]", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "392"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_compute)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.byte_offset", " on argument #", "1", " when calling:\n  `", "relu1(lv7: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32), compute: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(392)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 32; ++i1) {
    for (int32_t i3 = 0; i3 < 392; ++i3) {
      int32_t cse_v1 = ((i1 * 392) + i3);
      float v_ = ((float*)lv7)[cse_v1];
      ((float*)compute)[cse_v1] = ((v_) > (0.000000e+00f) ? (v_) : (0.000000e+00f));
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_reshape_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_reshape_type_index == 0) || (var_T_reshape_type_index == 4)) || (var_T_reshape_type_index == 7)) || (var_T_reshape_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_reshape = ((var_T_reshape_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((1 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* reshape_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_T_reshape)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".ndim on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_reshape)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_reshape)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_reshape)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".dtype on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape_var_T_reshape_shape = (((DLTensor*)var_T_reshape)[0].shape);
  void* reshape_var_T_reshape_strides = (((DLTensor*)var_T_reshape)[0].strides);
  if (!(((((DLTensor*)var_T_reshape)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".device_type on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_reshape = (((DLTensor*)var_T_reshape)[0].data);
  if (!(reshape_var_A_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)reshape_var_A_strides)[0])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(reshape_var_T_reshape_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)reshape_var_T_reshape_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_reshape", ".strides on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_reshape)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape.device_id", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_reshape", " data pointer is NULL on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)reshape_var_A_shape)[0]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape_var_T_reshape_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[0]", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape_var_T_reshape_shape)[1]) == (int64_t)16))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[1]", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "16"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape_var_T_reshape_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[2]", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape_var_T_reshape_shape)[3]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[3]", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_reshape)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.byte_offset", " on argument #", "1", " when calling:\n  `", "reshape(A: Tensor([T.int64(16)], float32), T_reshape: Tensor([T.int64(1), T.int64(16), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 16; ++ax1) {
    ((float*)T_reshape)[ax1] = ((float*)A)[ax1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_reshape_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_reshape_type_index == 0) || (var_T_reshape_type_index == 4)) || (var_T_reshape_type_index == 7)) || (var_T_reshape_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_reshape = ((var_T_reshape_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((1 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape1_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* reshape1_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_T_reshape)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".ndim on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_reshape)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_reshape)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_reshape)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".dtype on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape1_var_T_reshape_shape = (((DLTensor*)var_T_reshape)[0].shape);
  void* reshape1_var_T_reshape_strides = (((DLTensor*)var_T_reshape)[0].strides);
  if (!(((((DLTensor*)var_T_reshape)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".device_type on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_reshape = (((DLTensor*)var_T_reshape)[0].data);
  if (!(reshape1_var_A_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)reshape1_var_A_strides)[0])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(reshape1_var_T_reshape_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)reshape1_var_T_reshape_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_reshape", ".strides on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_reshape)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape.device_id", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_reshape", " data pointer is NULL on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)reshape1_var_A_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape1_var_T_reshape_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[0]", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape1_var_T_reshape_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[1]", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape1_var_T_reshape_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[2]", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape1_var_T_reshape_shape)[3]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[3]", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_reshape)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.byte_offset", " on argument #", "1", " when calling:\n  `", "reshape1(A: Tensor([T.int64(32)], float32), T_reshape: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(1)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
    ((float*)T_reshape)[ax1] = ((float*)A)[ax1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_reshape2(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv9_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv9_type_index == 0) || (var_lv9_type_index == 4)) || (var_lv9_type_index == 7)) || (var_lv9_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv9 = ((var_lv9_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_reshape_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_reshape_type_index == 0) || (var_T_reshape_type_index == 4)) || (var_T_reshape_type_index == 7)) || (var_T_reshape_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_reshape = ((var_T_reshape_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv9 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((4 == (((DLTensor*)var_lv9)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv9", ".ndim on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "4"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv9)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv9)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv9)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv9", ".dtype on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape2_var_lv9_shape = (((DLTensor*)var_lv9)[0].shape);
  void* reshape2_var_lv9_strides = (((DLTensor*)var_lv9)[0].strides);
  if (!(((((DLTensor*)var_lv9)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv9", ".device_type on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv9)[0].device.device_id);
  void* lv9 = (((DLTensor*)var_lv9)[0].data);
  if (!(!(var_T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_reshape)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".ndim on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_reshape)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_reshape)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_reshape)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".dtype on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* reshape2_var_T_reshape_shape = (((DLTensor*)var_T_reshape)[0].shape);
  void* reshape2_var_T_reshape_strides = (((DLTensor*)var_T_reshape)[0].strides);
  if (!(((((DLTensor*)var_T_reshape)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape", ".device_type on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_reshape = (((DLTensor*)var_T_reshape)[0].data);
  if (!(reshape2_var_lv9_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)reshape2_var_lv9_strides)[3])) && ((int64_t)196 == (((int64_t*)reshape2_var_lv9_strides)[1]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv9", ".strides on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv9 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv9", " data pointer is NULL on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(reshape2_var_T_reshape_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)reshape2_var_T_reshape_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_reshape", ".strides on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_reshape)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_reshape.device_id", " on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected to match ", "lv9.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_reshape == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_reshape", " data pointer is NULL on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_lv9_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv9.shape[0]", " on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_lv9_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv9.shape[1]", " on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_lv9_shape)[2]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv9.shape[2]", " on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_lv9_shape)[3]) == (int64_t)196))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv9.shape[3]", " on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "196"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv9)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv9.byte_offset", " on argument #", "0", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_T_reshape_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[0]", " on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)reshape2_var_T_reshape_shape)[1]) == (int64_t)6272))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.shape[1]", " on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "6272"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_reshape)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_reshape.byte_offset", " on argument #", "1", " when calling:\n  `", "reshape2(lv9: Tensor([T.int64(1), T.int64(32), T.int64(1), T.int64(196)], float32), T_reshape: Tensor([T.int64(1), T.int64(6272)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 6272; ++ax1) {
    ((float*)T_reshape)[ax1] = ((float*)lv9)[ax1];
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_subtract(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv30_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv30_type_index == 0) || (var_lv30_type_index == 4)) || (var_lv30_type_index == 7)) || (var_lv30_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv30 = ((var_lv30_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_subtract_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_subtract_type_index == 0) || (var_T_subtract_type_index == 4)) || (var_T_subtract_type_index == 7)) || (var_T_subtract_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_subtract = ((var_T_subtract_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv30 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv30)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv30", ".ndim on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv30)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv30)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv30)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv30", ".dtype on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* subtract_var_lv30_shape = (((DLTensor*)var_lv30)[0].shape);
  void* subtract_var_lv30_strides = (((DLTensor*)var_lv30)[0].strides);
  if (!(((((DLTensor*)var_lv30)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv30", ".device_type on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv30)[0].device.device_id);
  void* lv30 = (((DLTensor*)var_lv30)[0].data);
  if (!(!(var_T_subtract == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_subtract)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_subtract", ".ndim on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_subtract)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_subtract)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_subtract)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_subtract", ".dtype on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* subtract_var_T_subtract_shape = (((DLTensor*)var_T_subtract)[0].shape);
  void* subtract_var_T_subtract_strides = (((DLTensor*)var_T_subtract)[0].strides);
  if (!(((((DLTensor*)var_T_subtract)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_subtract", ".device_type on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_subtract = (((DLTensor*)var_T_subtract)[0].data);
  if (!(subtract_var_lv30_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)subtract_var_lv30_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv30", ".strides on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv30 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv30", " data pointer is NULL on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(subtract_var_T_subtract_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)subtract_var_T_subtract_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_subtract", ".strides on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_subtract)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_subtract.device_id", " on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv30.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_subtract == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_subtract", " data pointer is NULL on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)subtract_var_lv30_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv30.shape[0]", " on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)subtract_var_lv30_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv30.shape[1]", " on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv30)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv30.byte_offset", " on argument #", "0", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)subtract_var_T_subtract_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_subtract.shape[0]", " on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)subtract_var_T_subtract_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_subtract.shape[1]", " on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_subtract)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_subtract.byte_offset", " on argument #", "1", " when calling:\n  `", "subtract(lv30: Tensor([T.int64(1), T.int64(64)], float32), T_subtract: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
    ((float*)T_subtract)[ax1] = (1.000000e+00f - ((float*)lv30)[ax1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_tir_sigmoid(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv17_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv17_type_index == 0) || (var_lv17_type_index == 4)) || (var_lv17_type_index == 7)) || (var_lv17_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv17 = ((var_lv17_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_compute_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_compute_type_index == 0) || (var_compute_type_index == 4)) || (var_compute_type_index == 7)) || (var_compute_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_compute = ((var_compute_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv17 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv17)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv17", ".ndim on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv17)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv17)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv17)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv17", ".dtype on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* tir_sigmoid_var_lv17_shape = (((DLTensor*)var_lv17)[0].shape);
  void* tir_sigmoid_var_lv17_strides = (((DLTensor*)var_lv17)[0].strides);
  if (!(((((DLTensor*)var_lv17)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv17", ".device_type on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv17)[0].device.device_id);
  void* lv17 = (((DLTensor*)var_lv17)[0].data);
  if (!(!(var_compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_compute)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".ndim on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_compute)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_compute)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_compute)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".dtype on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* tir_sigmoid_var_compute_shape = (((DLTensor*)var_compute)[0].shape);
  void* tir_sigmoid_var_compute_strides = (((DLTensor*)var_compute)[0].strides);
  if (!(((((DLTensor*)var_compute)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".device_type on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* compute = (((DLTensor*)var_compute)[0].data);
  if (!(tir_sigmoid_var_lv17_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)tir_sigmoid_var_lv17_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv17", ".strides on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv17 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv17", " data pointer is NULL on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(tir_sigmoid_var_compute_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)tir_sigmoid_var_compute_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "compute", ".strides on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_compute)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute.device_id", " on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv17.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"compute", " data pointer is NULL on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)tir_sigmoid_var_lv17_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv17.shape[0]", " on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_sigmoid_var_lv17_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv17.shape[1]", " on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv17)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv17.byte_offset", " on argument #", "0", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_sigmoid_var_compute_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[0]", " on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_sigmoid_var_compute_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[1]", " on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_compute)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.byte_offset", " on argument #", "1", " when calling:\n  `", "tir_sigmoid(lv17: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 64; ++i1) {
    ((float*)compute)[i1] = (1.000000e+00f / (1.000000e+00f + expf((0.000000e+00f - ((float*)lv17)[i1]))));
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_tir_tanh(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_lv29_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_lv29_type_index == 0) || (var_lv29_type_index == 4)) || (var_lv29_type_index == 7)) || (var_lv29_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_lv29 = ((var_lv29_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_compute_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_compute_type_index == 0) || (var_compute_type_index == 4)) || (var_compute_type_index == 7)) || (var_compute_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_compute = ((var_compute_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_lv29 == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_lv29)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv29", ".ndim on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_lv29)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_lv29)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_lv29)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv29", ".dtype on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* tir_tanh_var_lv29_shape = (((DLTensor*)var_lv29)[0].shape);
  void* tir_tanh_var_lv29_strides = (((DLTensor*)var_lv29)[0].strides);
  if (!(((((DLTensor*)var_lv29)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "lv29", ".device_type on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_lv29)[0].device.device_id);
  void* lv29 = (((DLTensor*)var_lv29)[0].data);
  if (!(!(var_compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_compute)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".ndim on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_compute)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_compute)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_compute)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".dtype on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* tir_tanh_var_compute_shape = (((DLTensor*)var_compute)[0].shape);
  void* tir_tanh_var_compute_strides = (((DLTensor*)var_compute)[0].strides);
  if (!(((((DLTensor*)var_compute)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute", ".device_type on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* compute = (((DLTensor*)var_compute)[0].data);
  if (!(tir_tanh_var_lv29_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)tir_tanh_var_lv29_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "lv29", ".strides on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(lv29 == NULL))) {
    const char* __tvm_assert_parts[6] = {"lv29", " data pointer is NULL on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(tir_tanh_var_compute_strides == NULL)) {
    if (!(((int64_t)1 == (((int64_t*)tir_tanh_var_compute_strides)[1])))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "compute", ".strides on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_compute)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "compute.device_id", " on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected to match ", "lv29.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(compute == NULL))) {
    const char* __tvm_assert_parts[6] = {"compute", " data pointer is NULL on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)tir_tanh_var_lv29_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv29.shape[0]", " on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_tanh_var_lv29_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv29.shape[1]", " on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_lv29)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "lv29.byte_offset", " on argument #", "0", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_tanh_var_compute_shape)[0]) == (int64_t)1))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[0]", " on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "1"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)tir_tanh_var_compute_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.shape[1]", " on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_compute)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "compute.byte_offset", " on argument #", "1", " when calling:\n  `", "tir_tanh(lv29: Tensor([T.int64(1), T.int64(64)], float32), compute: Tensor([T.int64(1), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t i1 = 0; i1 < 64; ++i1) {
    ((float*)compute)[i1] = tanhf(((float*)lv29)[i1]);
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_transpose_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_transpose_type_index == 0) || (var_T_transpose_type_index == 4)) || (var_T_transpose_type_index == 7)) || (var_T_transpose_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_transpose = ((var_T_transpose_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* transpose_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_transpose)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".ndim on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_transpose)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_transpose)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_transpose)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".dtype on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose_var_T_transpose_shape = (((DLTensor*)var_T_transpose)[0].shape);
  void* transpose_var_T_transpose_strides = (((DLTensor*)var_T_transpose)[0].strides);
  if (!(((((DLTensor*)var_T_transpose)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".device_type on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_transpose = (((DLTensor*)var_T_transpose)[0].data);
  if (!(transpose_var_A_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose_var_A_strides)[1])) && ((int64_t)6272 == (((int64_t*)transpose_var_A_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(transpose_var_T_transpose_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose_var_T_transpose_strides)[1])) && ((int64_t)32 == (((int64_t*)transpose_var_T_transpose_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_transpose", ".strides on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_transpose)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose.device_id", " on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_transpose", " data pointer is NULL on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)transpose_var_A_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose_var_A_shape)[1]) == (int64_t)6272))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[1]", " on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "6272"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose_var_T_transpose_shape)[0]) == (int64_t)6272))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[0]", " on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "6272"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose_var_T_transpose_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[1]", " on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_transpose)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.byte_offset", " on argument #", "1", " when calling:\n  `", "transpose(A: Tensor([T.int64(32), T.int64(6272)], float32), T_transpose: Tensor([T.int64(6272), T.int64(32)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax0 = 0; ax0 < 6272; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 32; ++ax1) {
      ((float*)T_transpose)[((ax0 * 32) + ax1)] = ((float*)A)[((ax1 * 6272) + ax0)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose1(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_transpose_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_transpose_type_index == 0) || (var_T_transpose_type_index == 4)) || (var_T_transpose_type_index == 7)) || (var_T_transpose_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_transpose = ((var_T_transpose_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose1_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* transpose1_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_transpose)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".ndim on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_transpose)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_transpose)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_transpose)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".dtype on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose1_var_T_transpose_shape = (((DLTensor*)var_T_transpose)[0].shape);
  void* transpose1_var_T_transpose_strides = (((DLTensor*)var_T_transpose)[0].strides);
  if (!(((((DLTensor*)var_T_transpose)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".device_type on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_transpose = (((DLTensor*)var_T_transpose)[0].data);
  if (!(transpose1_var_A_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose1_var_A_strides)[1])) && ((int64_t)96 == (((int64_t*)transpose1_var_A_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(transpose1_var_T_transpose_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose1_var_T_transpose_strides)[1])) && ((int64_t)64 == (((int64_t*)transpose1_var_T_transpose_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_transpose", ".strides on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_transpose)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose.device_id", " on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_transpose", " data pointer is NULL on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)transpose1_var_A_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose1_var_A_shape)[1]) == (int64_t)96))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[1]", " on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "96"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose1_var_T_transpose_shape)[0]) == (int64_t)96))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[0]", " on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "96"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose1_var_T_transpose_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[1]", " on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_transpose)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.byte_offset", " on argument #", "1", " when calling:\n  `", "transpose1(A: Tensor([T.int64(64), T.int64(96)], float32), T_transpose: Tensor([T.int64(96), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax0 = 0; ax0 < 96; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
      ((float*)T_transpose)[((ax0 * 64) + ax1)] = ((float*)A)[((ax1 * 96) + ax0)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose2(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_transpose_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_transpose_type_index == 0) || (var_T_transpose_type_index == 4)) || (var_T_transpose_type_index == 7)) || (var_T_transpose_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_transpose = ((var_T_transpose_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose2_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* transpose2_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_transpose)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".ndim on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_transpose)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_transpose)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_transpose)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".dtype on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose2_var_T_transpose_shape = (((DLTensor*)var_T_transpose)[0].shape);
  void* transpose2_var_T_transpose_strides = (((DLTensor*)var_T_transpose)[0].strides);
  if (!(((((DLTensor*)var_T_transpose)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".device_type on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_transpose = (((DLTensor*)var_T_transpose)[0].data);
  if (!(transpose2_var_A_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose2_var_A_strides)[1])) && ((int64_t)32 == (((int64_t*)transpose2_var_A_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(transpose2_var_T_transpose_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose2_var_T_transpose_strides)[1])) && ((int64_t)64 == (((int64_t*)transpose2_var_T_transpose_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_transpose", ".strides on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_transpose)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose.device_id", " on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_transpose", " data pointer is NULL on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)transpose2_var_A_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose2_var_A_shape)[1]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[1]", " on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose2_var_T_transpose_shape)[0]) == (int64_t)32))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[0]", " on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "32"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose2_var_T_transpose_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[1]", " on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_transpose)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.byte_offset", " on argument #", "1", " when calling:\n  `", "transpose2(A: Tensor([T.int64(64), T.int64(32)], float32), T_transpose: Tensor([T.int64(32), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax0 = 0; ax0 < 32; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
      ((float*)T_transpose)[((ax0 * 64) + ax1)] = ((float*)A)[((ax1 * 32) + ax0)];
    }
  }
  return 0;
}

#ifdef __cplusplus
extern "C"
#endif
TVM_DLL int32_t __tvm_ffi_transpose3(void* self_handle, void* args, int32_t num_args, void* result) {
  if (!((num_args == 2))) {
    const char* __tvm_assert_parts[6] = {"Expected ", "2", " arguments", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(!(args == NULL))) {
    const char* __tvm_assert_parts[4] = {"args pointer is NULL", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 4);
    return -1;
  }
  int32_t var_A_type_index = (((TVMFFIAny*)args)[0].type_index);
  if (!(((((var_A_type_index == 0) || (var_A_type_index == 4)) || (var_A_type_index == 7)) || (var_A_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_A = ((var_A_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[0].v_ptr) + 24)) : (((TVMFFIAny*)args)[0].v_ptr));
  int32_t var_T_transpose_type_index = (((TVMFFIAny*)args)[1].type_index);
  if (!(((((var_T_transpose_type_index == 0) || (var_T_transpose_type_index == 4)) || (var_T_transpose_type_index == 7)) || (var_T_transpose_type_index >= 64)))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  void* var_T_transpose = ((var_T_transpose_type_index == 70) ? ((void*)((char*)(((TVMFFIAny*)args)[1].v_ptr) + 24)) : (((TVMFFIAny*)args)[1].v_ptr));
  if (!(!(var_A == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_A)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".ndim on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_A)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_A)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_A)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".dtype on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose3_var_A_shape = (((DLTensor*)var_A)[0].shape);
  void* transpose3_var_A_strides = (((DLTensor*)var_A)[0].strides);
  if (!(((((DLTensor*)var_A)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "A", ".device_type on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  int32_t dev_id = (((DLTensor*)var_A)[0].device.device_id);
  void* A = (((DLTensor*)var_A)[0].data);
  if (!(!(var_T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"Mismatched type on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "Tensor"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!((2 == (((DLTensor*)var_T_transpose)[0].ndim)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".ndim on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "2"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((((DLTensor*)var_T_transpose)[0].dtype.code) == (uint8_t)2) && ((((DLTensor*)var_T_transpose)[0].dtype.bits) == (uint8_t)32)) && ((((DLTensor*)var_T_transpose)[0].dtype.lanes) == (uint16_t)1)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".dtype on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "float32"};
    TVMFFIErrorSetRaisedFromCStrParts("TypeError", __tvm_assert_parts, 8);
    return -1;
  }
  void* transpose3_var_T_transpose_shape = (((DLTensor*)var_T_transpose)[0].shape);
  void* transpose3_var_T_transpose_strides = (((DLTensor*)var_T_transpose)[0].strides);
  if (!(((((DLTensor*)var_T_transpose)[0].device.device_type) == 1))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose", ".device_type on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "cpu"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  void* T_transpose = (((DLTensor*)var_T_transpose)[0].data);
  if (!(transpose3_var_A_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose3_var_A_strides)[1])) && ((int64_t)64 == (((int64_t*)transpose3_var_A_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "A", ".strides on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!(!(A == NULL))) {
    const char* __tvm_assert_parts[6] = {"A", " data pointer is NULL on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(transpose3_var_T_transpose_strides == NULL)) {
    if (!((((int64_t)1 == (((int64_t*)transpose3_var_T_transpose_strides)[1])) && ((int64_t)64 == (((int64_t*)transpose3_var_T_transpose_strides)[0]))))) {
      const char* __tvm_assert_parts[7] = {"Mismatched ", "T_transpose", ".strides on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected to be compact array"};
      TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 7);
      return -1;
    }
  }
  if (!((dev_id == (((DLTensor*)var_T_transpose)[0].device.device_id)))) {
    const char* __tvm_assert_parts[8] = {"Mismatched ", "T_transpose.device_id", " on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected to match ", "A.device_id"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(!(T_transpose == NULL))) {
    const char* __tvm_assert_parts[6] = {"T_transpose", " data pointer is NULL on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected non-NULL data pointer"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 6);
    return -1;
  }
  if (!(((((int64_t*)transpose3_var_A_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[0]", " on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose3_var_A_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.shape[1]", " on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_A)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "A.byte_offset", " on argument #", "0", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose3_var_T_transpose_shape)[0]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[0]", " on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((((int64_t*)transpose3_var_T_transpose_shape)[1]) == (int64_t)64))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.shape[1]", " on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "64"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  if (!(((uint64_t)0 == (((DLTensor*)var_T_transpose)[0].byte_offset)))) {
    const char* __tvm_assert_parts[8] = {"Invalid ", "T_transpose.byte_offset", " on argument #", "1", " when calling:\n  `", "transpose3(A: Tensor([T.int64(64), T.int64(64)], float32), T_transpose: Tensor([T.int64(64), T.int64(64)], float32))", "`,\n  expected ", "0"};
    TVMFFIErrorSetRaisedFromCStrParts("ValueError", __tvm_assert_parts, 8);
    return -1;
  }
  for (int32_t ax0 = 0; ax0 < 64; ++ax0) {
    for (int32_t ax1 = 0; ax1 < 64; ++ax1) {
      ((float*)T_transpose)[((ax0 * 64) + ax1)] = ((float*)A)[((ax1 * 64) + ax0)];
    }
  }
  return 0;
}

