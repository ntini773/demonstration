// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system__Syms.h"
#include "Vibex_simple_system_ibex_simple_system.h"

void Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_num_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ &mhpmcounter_num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_num_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    mhpmcounter_num__Vfuncrtn = 0U;
}

void Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_get_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, QData/*63:0*/ &mhpmcounter_get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_mhpmcounter_get_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    mhpmcounter_get__Vfuncrtn = vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
        [(0x1fU & index)];
}

void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ &val, IData/*31:0*/ &simutil_get_scramble_key__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    simutil_get_scramble_key__Vfuncrtn = 0U;
}

void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ &nonce, IData/*31:0*/ &simutil_get_scramble_nonce__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    simutil_get_scramble_nonce__Vfuncrtn = 0U;
}

void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_memload_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 32, 262144, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem)
                 , 0, ~0ULL);
}

void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x40000U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid)) {
        vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[(0x3ffffU 
                                                                                & index)] 
            = val[0U];
    }
    simutil_set_mem__Vfuncrtn = vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid;
}

extern const VlWide<10>/*319:0*/ Vibex_simple_system__ConstPool__CONST_hc1613866_0;

void Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__ibex_simple_system(Vibex_simple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlWide<10>/*311:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system____Vdpiexp_u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem_TOP__ibex_simple_system\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid 
        = (VL_LTES_III(32, 0x40000U, index) ? 0U : 1U);
    if ((1U == vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid)) {
        val[0U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[0U];
        val[1U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[1U];
        val[2U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[2U];
        val[3U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[3U];
        val[4U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[4U];
        val[5U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[5U];
        val[6U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[6U];
        val[7U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[7U];
        val[8U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[8U];
        val[9U] = Vibex_simple_system__ConstPool__CONST_hc1613866_0[9U];
        val[0U] = vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x3ffffU & index)];
    }
    simutil_get_mem__Vfuncrtn = vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid;
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___ico_sequent__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___ico_sequent__TOP__ibex_simple_system__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk_sys = vlSymsp->TOP.IO_CLK;
    if ((1U & (~ (IData)(vlSelfRef.__PVT__clk_sys)))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                     | (0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__clk 
        = ((IData)(vlSymsp->TOP.IO_CLK) & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vdly__u_simulator_ctrl__DOT__sim_finish;
    __Vdly__u_simulator_ctrl__DOT__sim_finish = 0;
    // Body
    vlSelfRef.__Vdly__u_top__DOT__u_ibex_tracer__DOT__cycle 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle;
    __Vdly__u_simulator_ctrl__DOT__sim_finish = vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish;
    vlSelfRef.__Vcellout__u_ram__a_rvalid_o = ((IData)(vlSymsp->TOP.IO_RST_N) 
                                               && vlSelfRef.__PVT__device_req
                                               [0U]);
    vlSelfRef.__PVT__u_timer__DOT__rvalid_q = ((IData)(vlSymsp->TOP.IO_RST_N) 
                                               && vlSelfRef.__PVT__device_req
                                               [2U]);
    if (vlSymsp->TOP.IO_RST_N) {
        vlSelfRef.__Vdly__u_top__DOT__u_ibex_tracer__DOT__cycle 
            = ((IData)(1U) + vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle);
        vlSelfRef.__PVT__u_timer__DOT__mtime_q = vlSelfRef.__PVT__u_timer__DOT__mtime_d;
        if (((IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_we) 
             | (IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmph_we))) {
            vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                = vlSelfRef.__PVT__u_timer__DOT__mtimecmp_d;
        }
    } else {
        vlSelfRef.__Vdly__u_top__DOT__u_ibex_tracer__DOT__cycle = 0U;
        vlSelfRef.__PVT__u_timer__DOT__mtime_q = 0ULL;
        vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q = 0ULL;
    }
    if (vlSymsp->TOP.IO_RST_N) {
        if ((vlSelfRef.__PVT__device_req[1U] & vlSelfRef.__PVT__device_we
             [1U])) {
            if ((0U == (0xffU & (vlSelfRef.__PVT__device_addr
                                 [1U] >> 2U)))) {
                if (VL_UNLIKELY(((1U & vlSelfRef.__PVT__device_be
                                  [1U])))) {
                    VL_FWRITEF_NX(vlSelfRef.__PVT__u_simulator_ctrl__DOT__log_fd,"%c",0,
                                  8,(0xffU & vlSelfRef.__PVT__device_wdata
                                     [1U]));
                    if (vlSelfRef.__PVT__u_simulator_ctrl__DOT__log_fd) { VL_FFLUSH_I(vlSelfRef.__PVT__u_simulator_ctrl__DOT__log_fd); }
                }
            } else if ((2U == (0xffU & (vlSelfRef.__PVT__device_addr
                                        [1U] >> 2U)))) {
                if (VL_UNLIKELY((((vlSelfRef.__PVT__device_be
                                   [1U] & vlSelfRef.__PVT__device_wdata
                                   [1U]) & (0U == (IData)(vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish)))))) {
                    VL_WRITEF_NX("Terminating simulation by software request.\n",0);
                    __Vdly__u_simulator_ctrl__DOT__sim_finish = 1U;
                }
            }
        }
        vlSelfRef.__Vcellout__u_simulator_ctrl__rvalid_o 
            = vlSelfRef.__PVT__device_req[1U];
    } else {
        vlSelfRef.__Vcellout__u_simulator_ctrl__rvalid_o = 0U;
        __Vdly__u_simulator_ctrl__DOT__sim_finish = 0U;
    }
    if ((0U != (IData)(vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish))) {
        __Vdly__u_simulator_ctrl__DOT__sim_finish = 
            (7U & ((IData)(1U) + (IData)(vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish)));
    }
    if (VL_UNLIKELY(((2U <= (IData)(vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish))))) {
        VL_FINISH_MT("../src/lowrisc_ibex_sim_shared_0/./rtl/sim/simulator_ctrl.sv", 93, "");
    }
    if (vlSymsp->TOP.IO_RST_N) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_resp 
            = vlSelfRef.__PVT__u_bus__DOT__device_sel_req;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q 
            = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                | (((0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                    | (IData)(vlSelfRef.__PVT__instr_req)) 
                   | (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                ? 5U : 0xaU);
    } else {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_resp = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q = 0xaU;
    }
    vlSelfRef.__PVT__u_bus__DOT__decode_err_resp = 
        ((IData)(vlSymsp->TOP.IO_RST_N) && ((IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_valid) 
                                            & (~ (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_valid))));
    vlSelfRef.__PVT__u_bus__DOT__host_sel_resp = ((IData)(vlSymsp->TOP.IO_RST_N) 
                                                  && (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req));
    vlSelfRef.__PVT__u_simulator_ctrl__DOT__sim_finish 
        = __Vdly__u_simulator_ctrl__DOT__sim_finish;
    vlSelfRef.__PVT__device_rvalid[0U] = vlSelfRef.__Vcellout__u_ram__a_rvalid_o;
    vlSelfRef.__PVT__device_rvalid[2U] = vlSelfRef.__PVT__u_timer__DOT__rvalid_q;
    vlSelfRef.__PVT__device_rvalid[1U] = vlSelfRef.__Vcellout__u_simulator_ctrl__rvalid_o;
    if (vlSelfRef.__PVT__u_bus__DOT__host_sel_resp) {
        vlSelfRef.__PVT__host_rvalid[0U] = 0U;
    } else {
        vlSelfRef.u_bus__DOT____Vlvbound_h28d63177__0 
            = (((2U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_resp)) 
                && vlSelfRef.__PVT__device_rvalid[vlSelfRef.__PVT__u_bus__DOT__device_sel_resp]) 
               | (IData)(vlSelfRef.__PVT__u_bus__DOT__decode_err_resp));
        vlSelfRef.__PVT__host_rvalid[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h28d63177__0;
    }
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__1(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__1\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid;
    __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 0;
    IData/*17:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 0;
    QData/*63:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 0;
    CData/*1:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 0;
    QData/*63:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0;
    IData/*31:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 0;
    IData/*17:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 0;
    IData/*17:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 0;
    CData/*0:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 0;
    QData/*33:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0;
    QData/*33:0*/ __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0;
    CData/*0:0*/ __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0;
    // Body
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 0U;
    __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 0U;
    __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 0U;
    vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d
           [0U]);
    vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = 1U;
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
           [0U]);
    __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid));
    if (vlSymsp->TOP.IO_RST_N) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k = 0xaU;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0 = 1U;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0 = 1U;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 
                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                    ? (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                               >> 1U)) : (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          << 1U));
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [3U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [4U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [5U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [6U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [7U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [8U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [9U]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xaU]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xbU]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 
                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                          [0xcU]);
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [3U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [4U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [5U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [6U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [7U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [8U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [9U] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xaU] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xbU] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8 = 1U;
            vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 
                = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                           [0xcU] >> 0x20U));
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 
                = vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0;
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 
                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)
                    ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int)
                    : 0U);
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 
                = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                    | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err)) 
                   & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                         & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))));
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0 = 1U;
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0U;
                vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0U;
            } else {
                vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex;
                vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 
                    = (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0xfU));
            }
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 1U;
            vlSelfRef.__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 
                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                    ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                    : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 1U;
            vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 1U;
        }
        if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done) 
             | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
             [0U])) {
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi
                [0U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int
                [0U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req
                [0U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                [0U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 
                = ((IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q) 
                   << 0x10U);
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
                [0U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex))) {
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex
                [1U];
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
        }
        if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
             | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid))) {
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             | (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))) 
                   && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi));
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 
                = ((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                       | (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid)))) 
                   & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int));
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             | (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))) 
                   && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req));
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0 = 1U;
            __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 
                = ((1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                          | (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid))))
                    ? ((IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q) 
                       << 0x10U) : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip);
            __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0 = 1U;
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d;
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                = (vlSelfRef.__PVT__host_rdata[0U] 
                   >> 8U);
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d;
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                    ? 0x100001U : (1U | (0xffffff00U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                = (7U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if (vlSelfRef.__PVT__instr_rvalid) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & VL_SHIFTR_III(2,2,32, (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = (3U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                = (3U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                = ((0x20000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                << 0xeU)) | ((0x10000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                 << 9U)) 
                                             | ((0x8000U 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                    << 4U)) 
                                                | (0x7fffU 
                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                      >> 0x10U)))));
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q 
                = (3U & (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                 >> 1U)));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d;
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q 
            = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                ? 1U : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                         ? 4U : 0U));
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q 
                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                    ? ((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                >> 3U)) << 2U) : (IData)(
                                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)));
        }
        if ((2U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((4U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((8U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x100U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x200U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x400U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x800U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x80000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x100000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
             >> 0x1fU)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d;
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d;
        if ((((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__new_irq)) 
             & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid)))) {
            __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                = ((IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q) 
                   << 0x10U);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = 1U;
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = 0U;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d) {
            __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 0U;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d;
        }
    } else {
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 1U;
        vlSelfRef.__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1 = 1U;
        __VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1 = 1U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = 3U;
        __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0U] = 1U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0U] = 0ULL;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0U] = 0ULL;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0U] = 3U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v1;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][2U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][3U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v3;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][4U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v4;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][5U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v5;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][6U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v6;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][7U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v7;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][8U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v8;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][9U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v9;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters__v10) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][0U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][1U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][2U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][3U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][4U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][5U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][6U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][7U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][8U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[0U][9U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v1;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][2U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][3U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v3;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][4U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v4;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][5U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v5;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][6U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v6;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][7U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v7;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][8U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v8;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][9U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v9;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh__v10) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][0U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][1U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][2U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][3U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][4U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][5U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][6U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][7U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][8U] = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[0U][9U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0U] = 0ULL;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1U] = 0ULL;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0U] = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[0U] 
        = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v0;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[1U] 
        = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid__v1;
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[0U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v0;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v1) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[0U] = 0U;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[1U] 
            = __VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v2;
    }
    if (__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip__v3) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[1U] = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d 
        = (1ULL + vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
           [0U]);
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip = 0U;
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip 
        = ((0xfffffff7U & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip) 
           | (8U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                    [0U] >> 0xeU)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip 
        = ((0xffffff7fU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip) 
           | (0x80U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                       [0U] >> 9U)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip 
        = ((0xfffff7ffU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip) 
           | (0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                        [0U] >> 4U)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip 
        = ((0x8000ffffU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_post_mip) 
           | (0x7fff0000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                             [0U] << 0x10U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][0U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][1U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[2U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][2U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[3U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][3U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[4U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][4U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[5U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][5U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[6U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][6U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[7U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][7U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[8U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][8U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[9U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
        [0U][9U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][0U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][1U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[2U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][2U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[3U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][3U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[4U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][4U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[5U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][5U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[6U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][6U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[7U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][7U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[8U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][8U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[9U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
        [0U][9U];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [0U];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q
        [1U];
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip = 0U;
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip = 
        ((0xfffffff7U & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip) 
         | (8U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                  [1U] >> 0xeU)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip = 
        ((0xffffff7fU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip) 
         | (0x80U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                     [1U] >> 9U)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip = 
        ((0xfffff7ffU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip) 
         | (0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                      [1U] >> 4U)));
    vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip = 
        ((0x8000ffffU & vlSelfRef.__PVT__u_top__DOT__rvfi_ext_pre_mip) 
         | (0x7fff0000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                           [1U] << 0x10U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xaU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xbU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xcU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xdU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xeU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0xfU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x10U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x11U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x12U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x13U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x14U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x15U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x16U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x17U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x18U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x19U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1aU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1bU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1cU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1dU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1eU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0x1fU] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req 
            = ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
               || (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    }
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[0U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [0U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[1U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [1U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[2U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [2U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[3U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [3U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[4U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [4U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[5U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [5U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[6U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [6U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[7U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [7U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[8U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [8U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regs[9U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcounters
        [9U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[0U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [0U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[1U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [1U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[2U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [2U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[3U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [3U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[4U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [4U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[5U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [5U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[6U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [6U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[7U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [7U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[8U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [8U];
    vlSelfRef.__PVT__u_top__DOT__unused_perf_regsh[9U] 
        = vlSelfRef.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh
        [9U];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0U] 
        = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                  [0U]);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1U] 
        = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                  [1U]);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? 1ULL : (1ULL | ((QData)((IData)(
                                                      vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U])) 
                                      << 1U)));
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
            = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                               [0U])) 
                               << 1U)) : 1ULL) : 1ULL);
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid 
        = __Vdly__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
        = (1U & ((3U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                  ? (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                     >> 0xfU) : ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                    >> 0xcU))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [0U];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q
        [1U];
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__2(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__2\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh;
    __Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh = 0;
    std::string __Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__rvfi_insn_str;
    std::string __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__Vfuncout;
    CData/*4:0*/ __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr;
    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr = 0;
    std::string __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__Vfuncout;
    CData/*4:0*/ __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr;
    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr = 0;
    std::string __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__Vfuncout;
    CData/*4:0*/ __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr;
    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr = 0;
    std::string __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__Vfuncout;
    CData/*4:0*/ __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr;
    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr = 0;
    CData/*7:0*/ __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    IData/*17:0*/ __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    IData/*17:0*/ __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    CData/*0:0*/ __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0;
    CData/*7:0*/ __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    IData/*17:0*/ __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    CData/*0:0*/ __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0;
    CData/*7:0*/ __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    IData/*17:0*/ __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    CData/*0:0*/ __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0;
    VlWide<6>/*191:0*/ __Vtemp_1;
    std::string __Vtemp_2;
    std::string __Vtemp_3;
    std::string __Vtemp_4;
    std::string __Vtemp_5;
    // Body
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 0U;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 0U;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 0U;
    __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 0U;
    if (vlSelfRef.__PVT__device_req[0U]) {
        if (vlSelfRef.__PVT__device_we[0U]) {
            vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 4U;
            if ((1U & (IData)(vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0xffU & vlSelfRef.__PVT__device_wdata
                       [0U]);
                __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 
                    = (0x3ffffU & (vlSelfRef.__PVT__device_addr
                                   [0U] >> 2U));
                __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = (0xffU & (vlSelfRef.__PVT__device_wdata
                                [0U] >> 8U));
                __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 
                    = (0x3ffffU & (vlSelfRef.__PVT__device_addr
                                   [0U] >> 2U));
                __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = (0xffU & (vlSelfRef.__PVT__device_wdata
                                [0U] >> 0x10U));
                __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 
                    = (0x3ffffU & (vlSelfRef.__PVT__device_addr
                                   [0U] >> 2U));
                __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask))) {
                __VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = (vlSelfRef.__PVT__device_wdata
                       [0U] >> 0x18U);
                __VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 
                    = (0x3ffffU & (vlSelfRef.__PVT__device_addr
                                   [0U] >> 2U));
                __VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3 = 1U;
            }
        }
    }
    if (VL_UNLIKELY(((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid
                      [0U] & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__trace_log_enable))))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle;
        if (VL_UNLIKELY(((0U == vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__unnamedblk3__DOT__file_name_base = 
                std::string{"trace_core"};
            __Vtemp_1[0U] = 0x653d2573U;
            __Vtemp_1[1U] = 0x5f626173U;
            __Vtemp_1[2U] = 0x66696c65U;
            __Vtemp_1[3U] = 0x6365725fU;
            __Vtemp_1[4U] = 0x5f747261U;
            __Vtemp_1[5U] = 0x69626578U;
            (void)VL_VALUEPLUSARGS_INN(64, VL_CVT_PACK_STR_NW(6, __Vtemp_1), 
                                       vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__unnamedblk3__DOT__file_name_base);
            VL_SFORMAT_NX(64,vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_name
                          ,"%@_00000000.log",0,-1,&(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__unnamedblk3__DOT__file_name_base));
            VL_WRITEF_NX("%Nibex_simple_system.u_top.u_ibex_tracer.unnamedblk2.unnamedblk3: Writing execution trace to %@\n",0,
                         vlSymsp->name(),-1,&(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_name));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh 
                = VL_FOPEN_NN(VL_CVT_PACK_STR_NN(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_name)
                              , std::string{"w"});
            ;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh;
            VL_FWRITEF_NX(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh,"Time\tCycle\tPC\tInsn\tDecoded instruction\tRegister and memory contents\n",0);
        }
        __Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh;
        __Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__rvfi_insn_str 
            = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__insn_is_compressed)
                ? VL_SFORMATF_N_NX("%x",0,16,(0xffffU 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn
                                              [0U])) 
                : VL_SFORMATF_N_NX("%x",0,32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn
                                   [0U]) );
        VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh,"%15t\t%10#\t%x\t%@\t%@\t",0,
                      64,VL_TIME_UNITED_Q(1),-12,32,
                      vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle,
                      32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata
                      [0U],-1,&(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__rvfi_insn_str),
                      -1,&(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__decoded_str));
        if (VL_UNLIKELY(((0U != (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed)))))) {
            __Vtemp_2 = ([&]() {
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr
                        [0U];
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__Vfuncout 
                        = ((0xaU > (IData)(__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr))
                            ? VL_SFORMATF_N_NX(" x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr) 
                            : VL_SFORMATF_N_NX("x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__addr) );
                }(), __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__1__Vfuncout);
            VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," %@:0x%08x",0,
                          -1,&(__Vtemp_2),32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata
                          [0U]);
        }
        if (VL_UNLIKELY(((0U != (2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed)))))) {
            __Vtemp_3 = ([&]() {
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr
                        [0U];
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__Vfuncout 
                        = ((0xaU > (IData)(__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr))
                            ? VL_SFORMATF_N_NX(" x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr) 
                            : VL_SFORMATF_N_NX("x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__addr) );
                }(), __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__2__Vfuncout);
            VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," %@:0x%08x",0,
                          -1,&(__Vtemp_3),32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata
                          [0U]);
        }
        if (VL_UNLIKELY(((0U != (4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed)))))) {
            __Vtemp_4 = ([&]() {
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr
                        [0U];
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__Vfuncout 
                        = ((0xaU > (IData)(__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr))
                            ? VL_SFORMATF_N_NX(" x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr) 
                            : VL_SFORMATF_N_NX("x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__addr) );
                }(), __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__3__Vfuncout);
            VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," %@:0x%08x",0,
                          -1,&(__Vtemp_4),32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata
                          [0U]);
        }
        if (VL_UNLIKELY(((0U != (8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed)))))) {
            __Vtemp_5 = ([&]() {
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr
                        [0U];
                    __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__Vfuncout 
                        = ((0xaU > (IData)(__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr))
                            ? VL_SFORMATF_N_NX(" x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr) 
                            : VL_SFORMATF_N_NX("x%0#",0,
                                               5,__Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__addr) );
                }(), __Vfunc_u_top__DOT__u_ibex_tracer__DOT__reg_addr_to_str__4__Vfuncout);
            VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," %@=0x%08x",0,
                          -1,&(__Vtemp_5),32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata
                          [0U]);
        }
        if (VL_UNLIKELY(((0U != (0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed)))))) {
            VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," PA:0x%08x",0,
                          32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr
                          [0U]);
            if (VL_UNLIKELY(((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask
                              [0U])))) {
                VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," store:0x%08x",0,
                              32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata
                              [0U]);
            }
            if (VL_UNLIKELY(((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask
                              [0U])))) {
                VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh," load:0x%08x",0,
                              32,vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata
                              [0U]);
            }
        }
        VL_FWRITEF_NX(__Vtask_u_top__DOT__u_ibex_tracer__DOT__printbuffer_dumpline__0__fh,"\n",0);
    }
    if (vlSelfRef.__PVT__device_req[0U]) {
        if ((1U & (~ vlSelfRef.__PVT__device_we[0U]))) {
            vlSelfRef.__Vcellout__u_ram__a_rdata_o 
                = vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [(0x3ffffU & (vlSelfRef.__PVT__device_addr
                              [0U] >> 2U))];
        }
    }
    if (vlSelfRef.__PVT__instr_req) {
        vlSelfRef.__PVT__instr_rdata = vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
            [(0x3ffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                          >> 2U))];
    }
    if (vlSelfRef.__PVT__device_req[2U]) {
        vlSelfRef.__PVT__u_timer__DOT__rdata_q = vlSelfRef.__PVT__u_timer__DOT__rdata_d;
        vlSelfRef.__PVT__u_timer__DOT__error_q = vlSelfRef.__PVT__u_timer__DOT__error_d;
    }
    if (__VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0) {
        vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0] 
            = ((0xffffff00U & vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0]) 
               | (IData)(__VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v0));
    }
    if (__VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) {
        vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1] 
            = ((0xffff00ffU & vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1]) 
               | ((IData)(__VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v1) 
                  << 8U));
    }
    if (__VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) {
        vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2] 
            = ((0xff00ffffU & vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2]) 
               | ((IData)(__VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v2) 
                  << 0x10U));
    }
    if (__VdlySet__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) {
        vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3] 
            = ((0xffffffU & vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem
                [__VdlyDim0__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3]) 
               | ((IData)(__VdlyVal__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem__v3) 
                  << 0x18U));
    }
    vlSelfRef.__PVT__device_rdata[2U] = vlSelfRef.__PVT__u_timer__DOT__rdata_q;
    vlSelfRef.__PVT__device_rdata[0U] = vlSelfRef.__Vcellout__u_ram__a_rdata_o;
    vlSelfRef.__PVT__device_err[2U] = vlSelfRef.__PVT__u_timer__DOT__error_q;
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__5(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__5\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle 
        = vlSelfRef.__Vdly__u_top__DOT__u_ibex_tracer__DOT__cycle;
    vlSelfRef.__PVT__instr_rvalid = ((IData)(vlSymsp->TOP.IO_RST_N) 
                                     && (IData)(vlSelfRef.__PVT__instr_req));
    vlSelfRef.__PVT__u_timer__DOT__interrupt_q = ((IData)(vlSymsp->TOP.IO_RST_N) 
                                                  && (IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_d));
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__0(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VdfgRegularize_h8541bace_4_0;
    __VdfgRegularize_h8541bace_4_0 = 0;
    // Body
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.__PVT__host_rvalid[0U]) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
                }
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelfRef.__PVT__host_rvalid[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)));
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 
        = (((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
            | (4U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
           & vlSelfRef.__PVT__host_rvalid[0U]);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 
        = ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & (vlSelfRef.__PVT__host_rvalid[0U] & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid 
        = ((vlSelfRef.__PVT__host_rvalid[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
           & (0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)) 
           & (IData)(vlSelfRef.__PVT__instr_rvalid));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
    if ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x19U)))) {
                                if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x17U)))) {
                                        if ((0x400000U 
                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x15U)))) {
                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                            }
                                        } else if (
                                                   (0x200000U 
                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x100000U 
                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : 0x16U);
                                        } else if (
                                                   (0x100000U 
                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x1aU)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x19U)))) {
                            if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                               [(0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))] 
                                               >> 0x20U));
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x1aU)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x19U)))) {
                        if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter
                                          [(0x1fU & 
                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))]);
                        }
                    }
                }
            }
        }
    } else if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x19U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x18U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x17U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x16U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x15U)))) {
                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                                = (
                                                   (0x100000U 
                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                    ? 0U
                                                    : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q));
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x17U)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x16U)))) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                        = ((0x200000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q)
                                            : ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                }
                            }
                        } else if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x16U)))) {
                                if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                }
                            }
                        } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x16U)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            }
        } else if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x1aU)))) {
                    if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x18U)))) {
                            if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x16U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
        if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
            if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x1aU)))) {
                    if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                = ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                    ? ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x200000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xfU]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xeU])
                                            : ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xdU]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xcU]))
                                        : ((0x200000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xbU]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0xaU])
                                            : ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [9U]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [8U])))
                                    : ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x200000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [7U]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [6U])
                                            : ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [5U]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [4U]))
                                        : ((0x200000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [3U]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [2U])
                                            : ((0x100000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [1U]
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata
                                               [0U]))));
                        } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x17U)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x16U)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x100000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xfU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xeU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xdU] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0xcU]))
                                            : (((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [0xbU] 
                                                 << 0x18U) 
                                                | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [0xaU] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [9U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [8U])))
                                        : ((0x100000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? (((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [7U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [6U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [5U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [4U]))
                                            : (((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                 [3U] 
                                                 << 0x18U) 
                                                | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [2U] 
                                                   << 0x10U)) 
                                               | ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                   [1U] 
                                                   << 8U) 
                                                  | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata
                                                  [0U]))));
                            }
                        }
                    }
                }
            } else if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x19U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x18U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x17U)))) {
                            if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x15U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffffff7U 
                                               & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = ((0xffffff7fU 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                                               | ((IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q) 
                                                  << 7U));
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0xfffff7ffU 
                                               & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                            = (0x8000ffffU 
                                               & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int);
                                    }
                                }
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                                    = ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                        ? ((0x100000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q
                                            : (((IData)(
                                                        (0U 
                                                         != 
                                                         (0x60U 
                                                          & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))) 
                                                << 0x1fU) 
                                               | ((((0x40U 
                                                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))
                                                     ? 0x3ffffffU
                                                     : 0U) 
                                                   << 5U) 
                                                  | (0x1fU 
                                                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q)))))
                                        : ((0x100000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q));
                            }
                        }
                    }
                }
            } else if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0x14U))];
                } else if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x100000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent
                            [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x14U))];
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
                }
            } else if ((0x1000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x16U)))) {
                        if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x16U)))) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x15U)))) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x14U)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x800000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0x16U)))) {
                    if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x14U)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                        }
                    }
                }
            } else if ((0x400000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x200000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    }
                } else if ((0x100000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q;
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                    >> 0xeU)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                       >> 9U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffff7ffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                        >> 4U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0x8000ffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x7fff0000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             << 0x10U)));
                }
            } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                 >> 0x15U)))) {
                if ((0x100000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0x40101104U;
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = 0U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffffff7U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (8U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 2U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffff7fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x80U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                       << 3U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffffe7ffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x1800U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         << 9U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xfffdffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x20000U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          << 0x10U)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int 
                        = ((0xffdfffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int) 
                           | (0x200000U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                           << 0x15U)));
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
        = (((IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q) 
            << 0x10U) & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
              | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)));
    if ((1U & (~ (IData)(vlSelfRef.__PVT__clk_sys)))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch 
            = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                     | (0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xeU;
    }
    if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xdU;
    }
    if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xcU;
    }
    if ((0x800U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xbU;
    }
    if ((0x400U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0xaU;
    }
    if ((0x200U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 9U;
    }
    if ((0x100U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 8U;
    }
    if ((0x80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 7U;
    }
    if ((0x40U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 6U;
    }
    if ((0x20U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 5U;
    }
    if ((0x10U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 4U;
    }
    if ((8U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 3U;
    }
    if ((4U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 2U;
    }
    if ((2U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 1U;
    }
    if ((1U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = 0U;
    }
    __VdfgRegularize_h8541bace_4_0 = ((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs) 
                                      & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                          >> 5U) | 
                                         (0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__clk 
        = ((IData)(vlSymsp->TOP.IO_CLK) & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__new_irq 
        = ((IData)(__VdfgRegularize_h8541bace_4_0) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
              & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & ((~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                  >> 2U)) & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)) 
                             & (IData)(__VdfgRegularize_h8541bace_4_0))));
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__7(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_sequent__TOP__ibex_simple_system__7\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSymsp->TOP.IO_RST_N) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q 
            = ((((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                 & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                    & (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21))) 
                << 2U) | ((((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                            & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                ? (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)
                                : (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16))) 
                           << 1U) | ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                     & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                         ? (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)
                                         : (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_10)))));
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q 
        = ((IData)(vlSymsp->TOP.IO_RST_N) && (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int = 1U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 2U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int = 0U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int 
                = ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                             >> 1U))) && (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
        }
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = 1U;
                } else if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id 
                        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)
                            ? 3U : 0U);
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        >> 2U)));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle 
            = (1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)));
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d 
            = (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
            ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q)
            : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q));
}
