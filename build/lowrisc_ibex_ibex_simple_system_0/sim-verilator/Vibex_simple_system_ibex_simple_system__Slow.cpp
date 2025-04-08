// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system_ibex_simple_system.h"

// Parameter definitions for Vibex_simple_system_ibex_simple_system
constexpr CData/*0:0*/ Vibex_simple_system_ibex_simple_system::RV32E;
constexpr IData/*31:0*/ Vibex_simple_system_ibex_simple_system::RV32M;
constexpr IData/*31:0*/ Vibex_simple_system_ibex_simple_system::RV32B;
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_simple_system_ibex_simple_system::__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_simple_system_ibex_simple_system::__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr;
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_simple_system_ibex_simple_system::__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr;


void Vibex_simple_system_ibex_simple_system___ctor_var_reset(Vibex_simple_system_ibex_simple_system* vlSelf);

Vibex_simple_system_ibex_simple_system::Vibex_simple_system_ibex_simple_system(Vibex_simple_system__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vibex_simple_system_ibex_simple_system___ctor_var_reset(this);
}

void Vibex_simple_system_ibex_simple_system::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_simple_system_ibex_simple_system::~Vibex_simple_system_ibex_simple_system() {
}
