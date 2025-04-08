// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VIBEX_SIMPLE_SYSTEM__SYMS_H_
#define VERILATED_VIBEX_SIMPLE_SYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vibex_simple_system.h"

// INCLUDE MODULE CLASSES
#include "Vibex_simple_system___024root.h"
#include "Vibex_simple_system_ibex_simple_system.h"
#include "Vibex_simple_system_ibex_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vibex_simple_system__Vcb_mhpmcounter_get_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
using Vibex_simple_system__Vcb_mhpmcounter_num_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
using Vibex_simple_system__Vcb_simutil_get_mem_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vibex_simple_system__Vcb_simutil_get_scramble_key_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
using Vibex_simple_system__Vcb_simutil_get_scramble_nonce_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);
using Vibex_simple_system__Vcb_simutil_memload_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, std::string file);
using Vibex_simple_system__Vcb_simutil_set_mem_t = void (*) (Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vibex_simple_system__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vibex_simple_system* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vibex_simple_system___024root  TOP;
    Vibex_simple_system_ibex_pkg   TOP__ibex_pkg;
    Vibex_simple_system_ibex_simple_system TOP__ibex_simple_system;

    // SCOPE NAMES
    VerilatedScope __Vscope_ibex_simple_system;
    VerilatedScope __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic;
    VerilatedScope __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic__unnamedblk3;
    VerilatedScope __Vscope_ibex_simple_system__u_top__u_ibex_top__u_ibex_core__if_stage_i;
    VerilatedScope __Vscope_ibex_simple_system__u_top__u_ibex_tracer;
    VerilatedScope __Vscope_ibex_simple_system__u_top__u_ibex_tracer__unnamedblk2__unnamedblk3;

    // CONSTRUCTORS
    Vibex_simple_system__Syms(VerilatedContext* contextp, const char* namep, Vibex_simple_system* modelp);
    ~Vibex_simple_system__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
