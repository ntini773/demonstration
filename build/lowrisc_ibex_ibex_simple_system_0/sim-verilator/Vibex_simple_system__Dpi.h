// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VIBEX_SIMPLE_SYSTEM__DPI_H_
#define VERILATED_VIBEX_SIMPLE_SYSTEM__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv:331:39
    extern unsigned long long mhpmcounter_get(int index);
    // DPI export at ../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv:325:35
    extern unsigned int mhpmcounter_num();
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:46:16
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:370:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../src/lowrisc_ibex_ibex_core_0.1/rtl/ibex_if_stage.sv:373:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:27:8
    extern void simutil_memload(const char* file);
    // DPI export at ../src/lowrisc_prim_util_memload_0/rtl/prim_util_memload.svh:36:16
    extern int simutil_set_mem(int index, const svBitVecVal* val);

#ifdef __cplusplus
}
#endif

#endif  // guard
