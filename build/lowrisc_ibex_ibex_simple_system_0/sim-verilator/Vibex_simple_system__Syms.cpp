// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system.h"
#include "Vibex_simple_system___024root.h"
#include "Vibex_simple_system_ibex_simple_system.h"
#include "Vibex_simple_system_ibex_pkg.h"

void Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_get_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_num_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, std::string file);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn);
void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn);

// FUNCTIONS
Vibex_simple_system__Syms::~Vibex_simple_system__Syms()
{
}

Vibex_simple_system__Syms::Vibex_simple_system__Syms(VerilatedContext* contextp, const char* namep, Vibex_simple_system* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__ibex_pkg{this, Verilated::catName(namep, "ibex_pkg")}
    , TOP__ibex_simple_system{this, Verilated::catName(namep, "ibex_simple_system")}
{
        // Check resources
        Verilated::stackCheck(1357);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ibex_pkg = &TOP__ibex_pkg;
    TOP.ibex_simple_system = &TOP__ibex_simple_system;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__ibex_pkg.__Vconfigure(true);
    TOP__ibex_simple_system.__Vconfigure(true);
    // Setup scopes
    __Vscope_ibex_simple_system.configure(this, name(), "ibex_simple_system", "ibex_simple_system", "<null>", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.configure(this, name(), "ibex_simple_system.u_ram.u_ram.gen_generic.u_impl_generic", "u_impl_generic", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic__unnamedblk3.configure(this, name(), "ibex_simple_system.u_ram.u_ram.gen_generic.u_impl_generic.unnamedblk3", "unnamedblk3", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_top__u_ibex_top__u_ibex_core__if_stage_i.configure(this, name(), "ibex_simple_system.u_top.u_ibex_top.u_ibex_core.if_stage_i", "if_stage_i", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_top__u_ibex_tracer.configure(this, name(), "ibex_simple_system.u_top.u_ibex_tracer", "u_ibex_tracer", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ibex_simple_system__u_top__u_ibex_tracer__unnamedblk2__unnamedblk3.configure(this, name(), "ibex_simple_system.u_top.u_ibex_tracer.unnamedblk2.unnamedblk3", "unnamedblk3", "<null>", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_ibex_simple_system.exportInsert(__Vfinal, "mhpmcounter_get", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_get_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system.exportInsert(__Vfinal, "mhpmcounter_num", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_num_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system__u_ram__u_ram__gen_generic__u_impl_generic.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system__u_top__u_ibex_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system__u_top__u_ibex_top__u_ibex_core__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__ibex_simple_system));
        __Vscope_ibex_simple_system.varInsert(__Vfinal,"RV32B", const_cast<void*>(static_cast<const void*>(&(TOP__ibex_simple_system.RV32B))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
        __Vscope_ibex_simple_system.varInsert(__Vfinal,"RV32E", const_cast<void*>(static_cast<const void*>(&(TOP__ibex_simple_system.RV32E))), true, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY,0,0);
        __Vscope_ibex_simple_system.varInsert(__Vfinal,"RV32M", const_cast<void*>(static_cast<const void*>(&(TOP__ibex_simple_system.RV32M))), true, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,0,1 ,31,0);
    }
}
