// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__ico(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_simple_system___024root___eval_triggers__ico(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_triggers__ico\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
    vlSelfRef.__VicoTriggered.set(1U, (IData)(vlSelfRef.__Vdpi_export_trigger));
    vlSelfRef.__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_simple_system___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

void Vibex_simple_system_ibex_simple_system___ico_sequent__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf);

void Vibex_simple_system___024root___eval_ico(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_ico\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___ico_sequent__TOP__ibex_simple_system__0((&vlSymsp->TOP__ibex_simple_system));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vibex_simple_system___024root___dump_triggers__act(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vibex_simple_system___024root___eval_triggers__act(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_triggers__act\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, (IData)(vlSelfRef.__Vdpi_export_trigger));
    vlSelfRef.__Vdpi_export_trigger = 0U;
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.IO_RST_N)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__IO_RST_N__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__clk_sys) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__clk_sys__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0))));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__IO_RST_N__0 = vlSelfRef.IO_RST_N;
    vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__clk_sys__0 
        = vlSymsp->TOP__ibex_simple_system.__PVT__clk_sys;
    vlSelfRef.__Vtrigprevexpr___TOP__ibex_simple_system____PVT__u_top__DOT__u_ibex_top__DOT__clk__0 
        = vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vibex_simple_system___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__1(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__2(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__3(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__4(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__5(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__6(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__7(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__1(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__2(Vibex_simple_system_ibex_simple_system* vlSelf);
void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__3(Vibex_simple_system_ibex_simple_system* vlSelf);

void Vibex_simple_system___024root___eval_nba(Vibex_simple_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root___eval_nba\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__0((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__1((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__2((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__3((&vlSymsp->TOP__ibex_simple_system));
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__4((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__5((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[5U] = 1U;
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__0((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[6U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__6((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[7U] = 1U;
        Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__7((&vlSymsp->TOP__ibex_simple_system));
    }
    if ((6ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__1((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[8U] = 1U;
    }
    if ((0xaULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__2((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[9U] = 1U;
    }
    if ((0xeULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__3((&vlSymsp->TOP__ibex_simple_system));
        vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    }
}
