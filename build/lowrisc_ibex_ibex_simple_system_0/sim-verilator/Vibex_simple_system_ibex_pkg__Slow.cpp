// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system_ibex_pkg.h"

// Parameter definitions for Vibex_simple_system_ibex_pkg
constexpr VlUnpacked<QData/*33:0*/, 16> Vibex_simple_system_ibex_pkg::__PVT__PmpAddrRst;


void Vibex_simple_system_ibex_pkg___ctor_var_reset(Vibex_simple_system_ibex_pkg* vlSelf);

Vibex_simple_system_ibex_pkg::Vibex_simple_system_ibex_pkg(Vibex_simple_system__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vibex_simple_system_ibex_pkg___ctor_var_reset(this);
}

void Vibex_simple_system_ibex_pkg::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vibex_simple_system_ibex_pkg::~Vibex_simple_system_ibex_pkg() {
}
