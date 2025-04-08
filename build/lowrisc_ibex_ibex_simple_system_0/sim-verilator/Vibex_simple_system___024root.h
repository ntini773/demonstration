// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vibex_simple_system.h for the primary calling header

#ifndef VERILATED_VIBEX_SIMPLE_SYSTEM___024ROOT_H_
#define VERILATED_VIBEX_SIMPLE_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
class Vibex_simple_system_ibex_pkg;
class Vibex_simple_system_ibex_simple_system;


class Vibex_simple_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vibex_simple_system___024root final : public VerilatedModule {
  public:
    // CELLS
    Vibex_simple_system_ibex_simple_system* ibex_simple_system;
    Vibex_simple_system_ibex_pkg* __PVT__ibex_pkg;

    // DESIGN SPECIFIC STATE
    VL_IN8(IO_RST_N,0,0);
    VL_IN8(IO_CLK,0,0);
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__IO_RST_N__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ibex_simple_system____PVT__clk_sys__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 11> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vibex_simple_system__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vibex_simple_system___024root(Vibex_simple_system__Syms* symsp, const char* v__name);
    ~Vibex_simple_system___024root();
    VL_UNCOPYABLE(Vibex_simple_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
