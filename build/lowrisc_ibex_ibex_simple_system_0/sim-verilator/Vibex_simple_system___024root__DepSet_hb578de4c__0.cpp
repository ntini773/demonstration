// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system___024root.h"

void Vibex_simple_system___024root___eval_triggers__ico(Vibex_simple_system___024root* vlSelf);
void Vibex_simple_system___024root___eval_ico(Vibex_simple_system___024root* vlSelf);

bool Vibex_simple_system___024root___eval_phase__ico(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_phase__ico\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vibex_simple_system___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vibex_simple_system___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vibex_simple_system___024root___eval_act(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_act\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vibex_simple_system___024root___eval_triggers__act(Vibex_simple_system___024root* vlSelf);

bool Vibex_simple_system___024root___eval_phase__act(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_phase__act\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vibex_simple_system___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vibex_simple_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vibex_simple_system___024root___eval_nba(Vibex_simple_system___024root* vlSelf);

bool Vibex_simple_system___024root___eval_phase__nba(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_phase__nba\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vibex_simple_system___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__ico(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__nba(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__act(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_simple_system___024root___eval(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vibex_simple_system___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv", 33, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vibex_simple_system___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vibex_simple_system___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv", 33, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vibex_simple_system___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../src/lowrisc_ibex_ibex_simple_system_core_0/rtl/ibex_simple_system.sv", 33, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vibex_simple_system___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vibex_simple_system___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vibex_simple_system___024root___eval_debug_assertions(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_debug_assertions\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.IO_CLK & 0xfeU)))) {
        Verilated::overWidthError("IO_CLK");}
    if (VL_UNLIKELY(((vlSelfRef.IO_RST_N & 0xfeU)))) {
        Verilated::overWidthError("IO_RST_N");}
}
#endif  // VL_DEBUG
