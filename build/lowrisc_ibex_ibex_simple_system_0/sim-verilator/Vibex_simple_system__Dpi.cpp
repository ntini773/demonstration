// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vibex_simple_system::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vibex_simple_system__Dpi.h"
#include "Vibex_simple_system.h"

#ifndef VL_DPIDECL_mhpmcounter_get_
#define VL_DPIDECL_mhpmcounter_get_
unsigned long long mhpmcounter_get(int index) {
    // DPI export at ../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv:331:39
    return Vibex_simple_system::mhpmcounter_get(index);
}
#endif

#ifndef VL_DPIDECL_mhpmcounter_num_
#define VL_DPIDECL_mhpmcounter_num_
unsigned int mhpmcounter_num() {
    // DPI export at ../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv:325:35
    return Vibex_simple_system::mhpmcounter_num();
}
#endif

#ifndef VL_DPIDECL_simutil_get_mem_
#define VL_DPIDECL_simutil_get_mem_
int simutil_get_mem(int index, svBitVecVal* val) {
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:46:16
    return Vibex_simple_system::simutil_get_mem(index, val);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_key_
#define VL_DPIDECL_simutil_get_scramble_key_
int simutil_get_scramble_key(svBitVecVal* val) {
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:370:28
    return Vibex_simple_system::simutil_get_scramble_key(val);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_nonce_
#define VL_DPIDECL_simutil_get_scramble_nonce_
int simutil_get_scramble_nonce(svBitVecVal* nonce) {
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:373:28
    return Vibex_simple_system::simutil_get_scramble_nonce(nonce);
}
#endif

#ifndef VL_DPIDECL_simutil_memload_
#define VL_DPIDECL_simutil_memload_
void simutil_memload(const char* file) {
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:27:8
    return Vibex_simple_system::simutil_memload(file);
}
#endif

#ifndef VL_DPIDECL_simutil_set_mem_
#define VL_DPIDECL_simutil_set_mem_
int simutil_set_mem(int index, const svBitVecVal* val) {
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:36:16
    return Vibex_simple_system::simutil_set_mem(index, val);
}
#endif

