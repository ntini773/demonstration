// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system___024root.h"

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___eval_static__TOP__ibex_simple_system(Vibex_simple_system_ibex_simple_system* vlSelf);

VL_ATTR_COLD void Vibex_simple_system___024root___eval_static(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_static\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_simple_system_ibex_simple_system___eval_static__TOP__ibex_simple_system((&vlSymsp->TOP__ibex_simple_system));
}

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___eval_initial__TOP__ibex_simple_system(Vibex_simple_system_ibex_simple_system* vlSelf);
VL_ATTR_COLD void Vibex_simple_system___024root____Vm_traceActivitySetAll(Vibex_simple_system___024root* vlSelf);

VL_ATTR_COLD void Vibex_simple_system___024root___eval_initial(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_initial\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_simple_system_ibex_simple_system___eval_initial__TOP__ibex_simple_system((&vlSymsp->TOP__ibex_simple_system));
    Vibex_simple_system___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__IO_RST_N__0 = vlSelfRef.IO_RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__clk_sys__0 
        = vlSymsp->TOP__ibex_simple_system.__PVT__clk_sys;
    vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0 
        = vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk;
}

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___eval_final__TOP__ibex_simple_system(Vibex_simple_system_ibex_simple_system* vlSelf);

VL_ATTR_COLD void Vibex_simple_system___024root___eval_final(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_final\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_simple_system_ibex_simple_system___eval_final__TOP__ibex_simple_system((&vlSymsp->TOP__ibex_simple_system));
    Vibex_simple_system___024root____Vm_traceActivitySetAll(vlSelf);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__stl(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_simple_system___024root___eval_triggers__stl(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_triggers__stl\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_simple_system___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___stl_sequent__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf);
VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___stl_sequent__TOP__ibex_simple_system__1(Vibex_simple_system_ibex_simple_system* vlSelf);

VL_ATTR_COLD void Vibex_simple_system___024root___eval_stl(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_stl\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___stl_sequent__TOP__ibex_simple_system__0((&vlSymsp->TOP__ibex_simple_system));
        Vibex_simple_system___024root____Vm_traceActivitySetAll(vlSelf);
        Vibex_simple_system_ibex_simple_system___stl_sequent__TOP__ibex_simple_system__1((&vlSymsp->TOP__ibex_simple_system));
    }
}
