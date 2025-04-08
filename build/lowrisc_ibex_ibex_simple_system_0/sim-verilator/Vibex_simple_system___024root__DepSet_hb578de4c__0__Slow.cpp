// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__stl(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vibex_simple_system___024root___eval_phase__stl(Vibex_simple_system___024root* vlSelf);

VL_ATTR_COLD void Vibex_simple_system___024root___eval_settle(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_settle\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vibex_simple_system___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv", 33, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vibex_simple_system___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__stl(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___dump_triggers__stl\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_simple_system___024root___eval_triggers__stl(Vibex_simple_system___024root* vlSelf);
VL_ATTR_COLD void Vibex_simple_system___024root___eval_stl(Vibex_simple_system___024root* vlSelf);

VL_ATTR_COLD bool Vibex_simple_system___024root___eval_phase__stl(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_phase__stl\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vibex_simple_system___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vibex_simple_system___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__ico(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___dump_triggers__ico\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__act(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___dump_triggers__act\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge IO_RST_N)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge ibex_simple_system.clk_sys)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge ibex_simple_system.u_top.u_ibex_top.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(negedge ibex_simple_system.u_top.u_ibex_top.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__nba(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___dump_triggers__nba\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge IO_RST_N)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge ibex_simple_system.clk_sys)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge ibex_simple_system.u_top.u_ibex_top.clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(negedge ibex_simple_system.u_top.u_ibex_top.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vibex_simple_system___024root____Vm_traceActivitySetAll(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root____Vm_traceActivitySetAll\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
}

VL_ATTR_COLD void Vibex_simple_system___024root___ctor_var_reset(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___ctor_var_reset\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->IO_CLK = VL_RAND_RESET_I(1);
    vlSelf->IO_RST_N = VL_RAND_RESET_I(1);
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__IO_RST_N__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ibex_simple_system____PVT__clk_sys__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
