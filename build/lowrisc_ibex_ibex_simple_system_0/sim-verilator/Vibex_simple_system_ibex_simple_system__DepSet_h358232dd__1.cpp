// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system_ibex_simple_system.h"

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__1(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__1\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__PVT__u_bus__DOT__host_sel_resp) {
        vlSelfRef.__PVT__host_rdata[0U] = 0U;
        vlSelfRef.__PVT__host_err[0U] = 0U;
    } else {
        vlSelfRef.u_bus__DOT____Vlvbound_h6ad861f2__0 
            = ((2U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_resp))
                ? vlSelfRef.__PVT__device_rdata[vlSelfRef.__PVT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSelfRef.__PVT__host_rdata[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h6ad861f2__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h984de552__0 
            = (((2U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_resp)) 
                && vlSelfRef.__PVT__device_err[vlSelfRef.__PVT__u_bus__DOT__device_sel_resp]) 
               | (IData)(vlSelfRef.__PVT__u_bus__DOT__decode_err_resp));
        vlSelfRef.__PVT__host_err[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h984de552__0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vibex_simple_system__ConstPool__TABLE_had5a947d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_simple_system__ConstPool__TABLE_h174edf3f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_simple_system__ConstPool__TABLE_hb0896d1c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vibex_simple_system__ConstPool__TABLE_h06a033e3_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_he07c4fa6_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_hf296277a_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_h72631546_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_h1515b06b_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_hb53abbd2_0;
extern const VlUnpacked<CData/*0:0*/, 64> Vibex_simple_system__ConstPool__TABLE_ha2da60fa_0;
extern const VlUnpacked<CData/*3:0*/, 32> Vibex_simple_system__ConstPool__TABLE_hc5f32d4e_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vibex_simple_system__ConstPool__TABLE_h9adffb8d_0;

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__2(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__2\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_bus__DOT____Vlvbound_hc566a10a__0;
    u_bus__DOT____Vlvbound_hc566a10a__0 = 0;
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_6;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_6 = 0;
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_7;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_7 = 0;
    QData/*33:0*/ __VdfgRegularize_h8541bace_4_5;
    __VdfgRegularize_h8541bace_4_5 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    SData/*9:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*4:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0x14U))];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0x14U))];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
        [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                   >> 0xfU))];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err));
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_7 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d 
        = (3U & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                  & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                 >> 1U));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err 
        = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_8 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
                 | (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode 
        = (0x7fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
    if ((0x40U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((0U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            if ((0U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = 1U;
                            } else if ((1U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = 1U;
                            } else if ((0x302U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = 1U;
                            } else if ((0x7b2U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = 1U;
                            } else if ((0x105U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                            if ((IData)((0U != (0xf8f80U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xeU)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                            }
                            if ((1U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0xcU)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 1U;
                            } else if ((2U == (3U & 
                                               (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 2U;
                            } else if ((3U == (3U & 
                                               (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0xcU)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = 3U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = 1U;
                            }
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal;
                        }
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                        }
                        if ((0U != (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xcU)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                        }
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                        = ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xeU))) && 
                           (1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0xdU)));
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                    if ((5U == ((4U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x18U)) | 
                                (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0xcU))))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 0x1fU)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                            = ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1dU)) || 
                               ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x1cU)) || 
                                ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x1bU)) 
                                 || ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x1aU)) 
                                     || ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x19U)) 
                                         || ((0x4000U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                              ? ((1U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0xcU))))
                                              : ((1U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0xdU)) 
                                                 || (1U 
                                                     & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0xcU)))))))));
                    } else if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    } else if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                } else {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 3U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                                }
                            } else if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 2U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 1U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                            }
                        } else if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 3U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = 0U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = 0U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 1U;
                if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
                if ((0U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0xcU)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
                } else if ((1U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
                } else if ((2U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xcU)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn 
                    = ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                        ? ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((1U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x1aU)) 
                                                 || ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x1fU) 
                                                     || ((0x40000000U 
                                                          & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                                                          ? 
                                                         ((1U 
                                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0x19U))))))
                                                          : 
                                                         ((1U 
                                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                              >> 0x1dU)) 
                                                          || ((1U 
                                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                  >> 0x1cU)) 
                                                              || ((1U 
                                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                      >> 0x1bU)) 
                                                                  || (0U 
                                                                      != 
                                                                      (3U 
                                                                       & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                          >> 0x19U)))))))))))
                        : ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xdU))) && 
                           ((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                   >> 0xcU)) && ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x1fU) 
                                                 || ((1U 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x1eU)) 
                                                     || ((1U 
                                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x1dU)) 
                                                         || ((1U 
                                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                 >> 0x1cU)) 
                                                             || ((1U 
                                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                     >> 0x1bU)) 
                                                                 || (0U 
                                                                     != 
                                                                     (3U 
                                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                                         >> 0x19U)))))))))));
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
                    if ((0U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0xcU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 1U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = 1U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext 
                = (1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xeU)));
            if ((0U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                              >> 0xcU)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 2U;
            } else if ((1U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 1U;
            } else if ((2U == (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xcU)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = 0U;
                if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = 1U;
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0x2cU;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu 
        = (0x7fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 0U;
    if ((0x40U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x20U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                                if ((0U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0xcU)))) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                } else {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 0U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec 
                                        = ((0x4000U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                            ? 3U : 0U);
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 4U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            } else {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                ? ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                    ? 0x1cU : 0x1aU)
                                : ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                    ? 0x1bU : 0x19U));
                    } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                         >> 0xdU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                ? 0x1eU : 0x1dU);
                    }
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((0x20U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                          >> 0x1fU)))) {
                                if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0x1dU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                    >> 0x1cU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1bU)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                         >> 0x1aU)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                             >> 0x19U)))) {
                                                        if (
                                                            (0x4000U 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                     >> 0xdU)))) {
                                                                if (
                                                                    (0x1000U 
                                                                     & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                                                                }
                                                            }
                                                        } else if (
                                                                   (1U 
                                                                    & (~ 
                                                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                        >> 0xdU)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                                     >> 0xcU)))) {
                                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                   >> 0x1dU)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                  >> 0x1cU)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                    >> 0x1bU)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                                     >> 0x1aU)))) {
                                                if (
                                                    (0x2000000U 
                                                     & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                    if (
                                                        (0x4000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x2000U 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                            if (
                                                                (0x1000U 
                                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            } else {
                                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                            }
                                                        } else if (
                                                                   (0x1000U 
                                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x2000U 
                                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                        if (
                                                            (0x1000U 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        } else {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                        }
                                                    } else if (
                                                               (0x1000U 
                                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    } else {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = 1U;
                                                    }
                                                } else {
                                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                                        = 
                                                        ((0x4000U 
                                                          & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                          ? 
                                                         ((0x2000U 
                                                           & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                            ? 4U
                                                            : 3U)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                            ? 9U
                                                            : 2U))
                                                          : 
                                                         ((0x2000U 
                                                           & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                           ? 
                                                          ((0x1000U 
                                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                            ? 0x2cU
                                                            : 0x2bU)
                                                           : 
                                                          ((0x1000U 
                                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                                            ? 0xaU
                                                            : 0U)));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                      >> 0xeU)))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 1U;
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 3U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
                    if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                        if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                                = ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                    ? 4U : 3U);
                        } else if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)) {
                            if ((0U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                        >> 0x1bU))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 9U;
                            } else if ((8U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                               >> 0x1bU))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 8U;
                            }
                        } else {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 2U;
                        }
                    } else {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator 
                            = ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                ? ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                    ? 0x2cU : 0x2bU)
                                : ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id)
                                    ? 0xaU : 0U));
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                    if ((0U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                      >> 0xcU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                    } else if ((1U == (7U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                             >> 0xcU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 2U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 5U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = 0U;
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
        = (1ULL | ((QData)((IData)((~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                   << 1U));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec 
        = ((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_7) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int 
        = ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
            ? 0xfU : ((1U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
                       ? 3U : ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type))
                                ? 1U : 0U)));
    vlSelfRef.__PVT__host_we[0U] = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a 
        = (1U & ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                  [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                             >> 0xfU))] >> 0x1fU) & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b 
        = (IData)((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                    >> 1U) & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))] 
                              >> 0x1fU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a 
        = ((1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q) 
                  >> 1U)) && (1U & ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))
                                     ? ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU))
                                     : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                                           >> 0x1fU)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op;
    if ((IData)(((0U == (0xf8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                 & ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)) 
                    | (3U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op)))))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op = 0U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 0U;
    if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                              >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3fffc0000ULL & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | (IData)((IData)((0x3ffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U))))));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = ((0x3ffffULL & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum) 
                   | ((QData)((IData)((0xffffU & (- (IData)(
                                                            ((0U 
                                                              != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode)) 
                                                             & (IData)(
                                                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                        [0U] 
                                                                        >> 0x21U)))))))) 
                      << 0x12U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
                = (0xffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex 
                              >> 0x10U));
            if ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                    = (QData)((IData)((0xffffU & (IData)(
                                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U] 
                                                          >> 0x10U)))));
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                    = (0x3ffffffffULL & (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                      [0U]))))));
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 3U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                    [0U];
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                    = (0x3ffffffffULL & ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))));
            }
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a 
            = (0xffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b 
            = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q)) 
               && (IData)((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode) 
                            >> 1U) & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                                      >> 0x1fU))));
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex 
                              >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 2U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum 
                = (QData)((IData)((0xffffU & (IData)(
                                                     (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                      [0U] 
                                                      >> 0x10U)))));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                      ? (((QData)((IData)(
                                                          (0xffffU 
                                                           & ((IData)(
                                                                      (0x7ffffffffULL 
                                                                       & VL_MULS_QQQ(35, 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                                (0x7ffffffffULL 
                                                                                & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))))) 
                                                              + (IData)(
                                                                        (0x7ffffffffULL 
                                                                         & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))))) 
                                          << 0x10U) 
                                         | (QData)((IData)(
                                                           (0xffffU 
                                                            & (IData)(
                                                                      vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                      [0U])))))
                                      : ((0x7ffffffffULL 
                                          & VL_MULS_QQQ(35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                         + (0x7ffffffffULL 
                                            & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b 
                = (0xffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = 0ULL;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d 
                = (0x3ffffffffULL & ((0x7ffffffffULL 
                                      & VL_MULS_QQQ(35, 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                    (0x7ffffffffULL 
                                                     & VL_EXTENDS_QI(35,17, 
                                                                     (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                       << 0x10U) 
                                                                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                     + (0x7ffffffffULL 
                                        & VL_EXTENDS_QQ(35,34, vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))));
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = 6U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = 1U;
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex) 
           | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    __Vtableidx5 = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left 
        = Vibex_simple_system__ConstPool__TABLE_had5a947d_0
        [__Vtableidx5];
    __Vtableidx3 = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed 
        = Vibex_simple_system__ConstPool__TABLE_h174edf3f_0
        [__Vtableidx3];
    __Vtableidx2 = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 
        = Vibex_simple_system__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx2];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 
        = Vibex_simple_system__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx2];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 
        = Vibex_simple_system__ConstPool__TABLE_hb0896d1c_0
        [__Vtableidx2];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate 
        = Vibex_simple_system__ConstPool__TABLE_h06a033e3_0
        [__Vtableidx2];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr 
        = ((1U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
           | ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
              | (3U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))));
    __Vtableidx1 = ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q) 
                      << 5U) | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q) 
                                 << 4U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
                                           << 3U))) 
                    | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
                        << 2U) | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q) 
                                   << 1U) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio 
        = Vibex_simple_system__ConstPool__TABLE_he07c4fa6_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio 
        = Vibex_simple_system__ConstPool__TABLE_hf296277a_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio 
        = Vibex_simple_system__ConstPool__TABLE_h72631546_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio 
        = Vibex_simple_system__ConstPool__TABLE_h1515b06b_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio 
        = Vibex_simple_system__ConstPool__TABLE_hb53abbd2_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio 
        = Vibex_simple_system__ConstPool__TABLE_ha2da60fa_0
        [__Vtableidx1];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b 
        = ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
            ? ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? 4U : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                         ? ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                             ? 2U : 4U) : (((- (IData)(
                                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | (((0xff000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                               | (0x800U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 9U))) 
                                              | (0x7feU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U))))))
            : ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (0xfffff000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)
                    : (((- (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xdU) 
                       | (((0x1000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x13U)) | 
                           (0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      << 4U))) | ((0x7e0U 
                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 7U))))))
                : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel))
                    ? (((- (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x14U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
        = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
            ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                    ? 0U : (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0xfU))) : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id)
            : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel))
                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q
                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
               [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0xfU))]));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold)) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold)) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
           | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid 
        = ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel))) 
           || ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
               | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr) 
              | (((3U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)) & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)) 
                 | (((3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x1cU)) > (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                    | ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
    if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = 1U;
                    }
                }
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                if ((1U & (~ (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                               | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                              | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = 0U;
                        }
                    }
                }
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
                if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = 0U;
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            } else if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 2U;
            } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 3U;
            } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 4U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 1U;
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 1U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = 0U;
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = 1U;
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
            | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
           [(0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x14U))]);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev 
        = ((((((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                << 0x1fU) | (0x40000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            << 0x1dU))) 
              | ((0x20000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0x1bU)) | (0x10000000U 
                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  << 0x19U)))) 
             | (((0x8000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 0x17U)) | (0x4000000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 0x15U))) 
                | ((0x2000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 0x13U)) | (0x1000000U 
                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   << 0x11U))))) 
            | ((((0x800000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               << 0xfU)) | (0x400000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                               << 0xdU))) 
                | ((0x200000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                 << 0xbU)) | (0x100000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                 << 9U)))) 
               | (((0x80000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                << 7U)) | (0x40000U 
                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                              << 5U))) 
                  | ((0x20000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  << 3U)) | (0x10000U 
                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                << 1U)))))) 
           | (((((0x8000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 1U)) | (0x4000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 3U))) 
                | ((0x2000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 5U)) | (0x1000U & 
                                          (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                           >> 7U)))) 
               | (((0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 9U)) | (0x400U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                   >> 0xbU))) 
                  | ((0x200U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                >> 0xdU)) | (0x100U 
                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0xfU))))) 
              | ((((0x80U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                             >> 0x11U)) | (0x40U & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x13U))) 
                  | ((0x20U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               >> 0x15U)) | (0x10U 
                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x17U)))) 
                 | (((8U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                            >> 0x19U)) | (4U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                >> 0x1bU))) 
                    | ((2U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                              >> 0x1dU)) | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                            >> 0x1fU))))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load 
                        = (1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = 1U;
        }
    }
    vlSelfRef.__PVT__host_req[0U] = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id) 
              | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn) 
                 | (((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec)) 
                    | ((3U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                       & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                          | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                             & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result 
        = (((3U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
            | (6U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
            ? (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
               | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)
            : (((4U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                | (7U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))
                ? (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)
                : (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   ^ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)));
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
                = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [0U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ (IData)(
                                                                             vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                                             [1U])))) 
                                                  << 1U)));
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b 
            = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ (IData)(
                                                          vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                          [1U])))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U)))
                : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? (1ULL | ((QData)((IData)((~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex))) 
                               << 1U)) : (1ULL | ((QData)((IData)(
                                                                  (~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex))) 
                                                  << 1U))));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
        = (0x3ffffffffULL & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                               ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                               : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                   ? (1ULL | ((QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                              << 2U))
                                   : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x3fffffffU 
                                                                   & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 3U))
                                       : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x1fffffffU 
                                                                  & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                 << 4U))
                                           : (1ULL 
                                              | ((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                 << 1U)))))) 
                             + (0x1ffffffffULL & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                   ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                   : 
                                                  ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                    ? 
                                                   (~ 
                                                    ((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                                     << 1U))
                                                    : 
                                                   ((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                                    << 1U))))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 
                                           (((QData)((IData)(
                                                             ((8U 
                                                               == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand))), 
                                           (0x1fU & 
                                            ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                              ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex
                                              : (- vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext 
        = (1U & (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext 
                         >> 0x20U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffff8U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((4U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                     >> 0x1bU)) | ((2U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 0x1dU)) 
                                   | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                      >> 0x1fU))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffffffc7U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                        >> 0x15U)) | ((0x10U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x17U)) 
                                      | (8U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0x19U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffffe3fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 0xfU)) | ((0x80U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                >> 0x11U)) 
                                      | (0x40U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  >> 0x13U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffff1ffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                         >> 9U)) | ((0x400U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               >> 0xbU)) 
                                    | (0x200U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 0xdU)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffff8fffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                          >> 3U)) | ((0x2000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 >> 5U)) 
                                     | (0x1000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   >> 7U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xfffc7fffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                           << 3U)) | ((0x10000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                   << 1U)) 
                                      | (0x8000U & 
                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                          >> 1U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xffe3ffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x100000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 9U)) | ((0x80000U & 
                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 7U)) | 
                                       (0x40000U & 
                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                         << 5U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xff1fffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x800000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                            << 0xfU)) | ((0x400000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                             << 0xdU)) 
                                         | (0x200000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0xbU)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xf8ffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x4000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                             << 0x15U)) | ((0x2000000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                               << 0x13U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                 << 0x11U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0xc7ffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((0x20000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                              << 0x1bU)) | ((0x10000000U 
                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                << 0x19U)) 
                                            | (0x8000000U 
                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                                  << 0x17U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev) 
           | ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
               << 0x1fU) | (0x40000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
                                           << 0x1dU))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result);
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw 
                                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw 
                        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we) 
                           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
                }
            }
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = 0U;
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.__PVT__u_bus__DOT__host_sel_valid = 0U;
    vlSelfRef.__PVT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelfRef.__PVT__host_req[0U]) {
        vlSelfRef.__PVT__u_bus__DOT__host_sel_valid = 1U;
        vlSelfRef.__PVT__u_bus__DOT__host_sel_req = 0U;
    }
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id)) 
           & (IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_7));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id) 
           & (6U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
        = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                  [1U]);
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                if ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d 
                        = (0U == (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U)));
                }
            }
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d 
                    = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                        ? (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex);
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d 
                    = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)
                        ? (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                   >> 1U)) : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex);
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access 
        = (((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
            & (0U != (3U & (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                    >> 1U))))) | (IData)(
                                                         ((1U 
                                                           == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)) 
                                                          & (6ULL 
                                                             == 
                                                             (6ULL 
                                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))));
    vlSelfRef.__PVT__host_wdata[0U] = ((1U & (IData)(
                                                     (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 2U)))
                                        ? ((1U & (IData)(
                                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)))
                                            ? ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                << 0x18U) 
                                               | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                  >> 8U))
                                            : ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                << 0x10U) 
                                               | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                  >> 0x10U)))
                                        : ((1U & (IData)(
                                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                          >> 1U)))
                                            ? ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                << 8U) 
                                               | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                  >> 0x18U))
                                            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata));
    __Vtableidx6 = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q) 
                     << 4U) | ((0xcU & ((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)) 
                                        << 2U)) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be 
        = Vibex_simple_system__ConstPool__TABLE_hc5f32d4e_0
        [__Vtableidx6];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal 
        = (1U & ((1U & ((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                 [0U] >> 0x1fU)) ^ (IData)(
                                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                            [1U] 
                                                            >> 0x1fU))))
                  ? (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                             [0U] >> 0x1fU)) : (~ (IData)(
                                                          (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                           >> 0x20U)))));
    vlSelfRef.__PVT__host_addr[0U] = ((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 3U)) 
                                      << 2U);
    __Vtableidx4 = (((0U != (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                     >> 1U))) << 9U) 
                    | ((0x100U & ((((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                     ^ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex) 
                                    >> 0x1fU) ? ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                    : (~ (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x20U)))) 
                                  << 8U)) | (((0U == (IData)(
                                                             (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                              >> 1U))) 
                                              << 7U) 
                                             | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result 
        = Vibex_simple_system__ConstPool__TABLE_h9adffb8d_0
        [__Vtableidx4];
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    if ((1U & (~ (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                                   | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                                  | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = 0U;
                            }
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = 1U;
                        }
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = 1U;
                            }
                        }
                    }
                    if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2)
                                    ? ((IData)(2U) 
                                       + vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id)
                                    : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id);
                        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval 
                                = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                    ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                    : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id);
                        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio)))) {
                                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval 
                                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval 
                                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q;
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump 
                            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch 
                            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__host_gnt[0U] = 0U;
    u_bus__DOT____Vlvbound_hc566a10a__0 = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
                                           && vlSelfRef.__PVT__host_req
                                           [vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
    if ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))) {
        vlSelfRef.__PVT__host_gnt[vlSelfRef.__PVT__u_bus__DOT__host_sel_req] 
            = u_bus__DOT____Vlvbound_hc566a10a__0;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a 
        = ((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_6) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b 
        = ((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT____VdfgRegularize_h5dc1735c_0_6) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d 
            = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
                = (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0xfU));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
                = (0x1fU & 0U);
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
                = (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                            >> 0x14U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex;
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
                = (0x1fU & 0U);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d = 0U;
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d 
            = (0x1fU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d 
            = (0x1fU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn) 
            | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn) 
               | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d) 
                  | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err)))) 
           & (6U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1U] 
        = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
    vlSelfRef.__PVT__host_be[0U] = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be;
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                       >> 1U));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = ((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q)) 
               | (QData)((IData)(((IData)(1U) << (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q)))));
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder 
            = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                      [0U]);
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient 
            = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q));
    }
    vlSelfRef.__PVT__u_bus__DOT__device_sel_valid = 0U;
    if (((((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))
            ? vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelfRef.__PVT__cfg_device_addr_mask
          [0U]) == vlSelfRef.__PVT__cfg_device_addr_base
         [0U])) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_valid = 1U;
    }
    if (((((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))
            ? vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelfRef.__PVT__cfg_device_addr_mask
          [1U]) == vlSelfRef.__PVT__cfg_device_addr_base
         [1U])) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_valid = 1U;
    }
    vlSelfRef.__PVT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))
            ? vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelfRef.__PVT__cfg_device_addr_mask
          [0U]) == vlSelfRef.__PVT__cfg_device_addr_base
         [0U])) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))
            ? vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelfRef.__PVT__cfg_device_addr_mask
          [1U]) == vlSelfRef.__PVT__cfg_device_addr_base
         [1U])) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))
            ? vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelfRef.__PVT__cfg_device_addr_mask
          [2U]) == vlSelfRef.__PVT__cfg_device_addr_base
         [2U])) {
        vlSelfRef.__PVT__u_bus__DOT__device_sel_valid = 1U;
        vlSelfRef.__PVT__u_bus__DOT__device_sel_req = 2U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = 0U;
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d 
                            = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
    if ((0x40U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = 0U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result 
            = ((0x20U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                ? ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                    ? 0U : ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                             ? ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                 ? ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                              ? 0U : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)))
                                 : ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                     ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                         ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                         : 0U) : 0U))
                             : 0U)) : ((0x10U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                        ? ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                    : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)
                                                     : (IData)(
                                                               (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                                >> 1U)))))
                                            : ((4U 
                                                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? (IData)(
                                                              (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U))
                                                    : 0U)
                                                : 0U))
                                        : ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                            ? ((4U 
                                                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                     ? 0U
                                                     : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result))
                                                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result)
                                            : ((4U 
                                                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))
                                                    ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result
                                                    : (IData)(
                                                              (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                               >> 1U)))))));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlSelfRef.__PVT__host_gnt[0U] 
                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.__PVT__host_gnt[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
            if (vlSelfRef.__PVT__host_gnt[0U]) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = 1U;
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d 
                    = (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient);
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = 0U;
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d 
        = (0x1fU & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q) 
                    - (IData)(1U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
        [0U];
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
            = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                ? 0U : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                         ? 6U : 5U));
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                      >> 1U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                    ? ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                        ? (((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                            & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                               ^ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))
                            ? (QData)((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))
                            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                           [0U]) : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a)
                                     ? (QData)((IData)(
                                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))
                                     : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                    [0U])) : ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))
                                               ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient
                                               : (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder))));
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = ((1U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))
                    ? 4U : 3U);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder)) 
                    << 1U) | (QData)((IData)((1U & 
                                              (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                               >> (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d))))));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 3U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                                   >> 0x1fU)));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = 2U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    } else {
        if ((2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = 0x3ffffffffULL;
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d 
                = (((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                        >> 1U)) & (0U == (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))))
                    ? 6U : 1U);
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d 
                = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex));
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = 0x1fU;
    }
    if (((IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_valid) 
         & (0U == (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_req)))) {
        if ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))) {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 
                = vlSelfRef.__PVT__host_wdata[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 
                = vlSelfRef.__PVT__host_be[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 
                = vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
        } else {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 = 0U;
        }
        vlSelfRef.__PVT__device_wdata[0U] = vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0;
        vlSelfRef.__PVT__device_be[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_req[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_req[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_we[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_we[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0;
        vlSelfRef.__PVT__device_addr[0U] = vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0;
    } else {
        vlSelfRef.__PVT__device_wdata[0U] = 0U;
        vlSelfRef.__PVT__device_be[0U] = 0U;
        vlSelfRef.__PVT__device_req[0U] = 0U;
        vlSelfRef.__PVT__device_we[0U] = 0U;
        vlSelfRef.__PVT__device_addr[0U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_valid) 
         & (1U == (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_req)))) {
        if ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))) {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 
                = vlSelfRef.__PVT__host_wdata[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 
                = vlSelfRef.__PVT__host_be[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 
                = vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
        } else {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 = 0U;
        }
        vlSelfRef.__PVT__device_wdata[1U] = vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0;
        vlSelfRef.__PVT__device_be[1U] = vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_req[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_req[1U] = vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_we[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_we[1U] = vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0;
        vlSelfRef.__PVT__device_addr[1U] = vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0;
    } else {
        vlSelfRef.__PVT__device_wdata[1U] = 0U;
        vlSelfRef.__PVT__device_be[1U] = 0U;
        vlSelfRef.__PVT__device_req[1U] = 0U;
        vlSelfRef.__PVT__device_we[1U] = 0U;
        vlSelfRef.__PVT__device_addr[1U] = 0U;
    }
    if (((IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_valid) 
         & (2U == (IData)(vlSelfRef.__PVT__u_bus__DOT__device_sel_req)))) {
        if ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req))) {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 
                = vlSelfRef.__PVT__host_wdata[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 
                = vlSelfRef.__PVT__host_be[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 
                = vlSelfRef.__PVT__host_addr[vlSelfRef.__PVT__u_bus__DOT__host_sel_req];
        } else {
            vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0 = 0U;
            vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0 = 0U;
        }
        vlSelfRef.__PVT__device_wdata[2U] = vlSelfRef.u_bus__DOT____Vlvbound_hf6e2d899__0;
        vlSelfRef.__PVT__device_be[2U] = vlSelfRef.u_bus__DOT____Vlvbound_h0cc97a4e__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_req[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_req[2U] = vlSelfRef.u_bus__DOT____Vlvbound_h668b8a91__0;
        vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0 
            = ((0U >= (IData)(vlSelfRef.__PVT__u_bus__DOT__host_sel_req)) 
               && vlSelfRef.__PVT__host_we[vlSelfRef.__PVT__u_bus__DOT__host_sel_req]);
        vlSelfRef.__PVT__device_we[2U] = vlSelfRef.u_bus__DOT____Vlvbound_h3ed7c4b5__0;
        vlSelfRef.__PVT__device_addr[2U] = vlSelfRef.u_bus__DOT____Vlvbound_h53a6baaf__0;
    } else {
        vlSelfRef.__PVT__device_wdata[2U] = 0U;
        vlSelfRef.__PVT__device_be[2U] = 0U;
        vlSelfRef.__PVT__device_req[2U] = 0U;
        vlSelfRef.__PVT__device_we[2U] = 0U;
        vlSelfRef.__PVT__device_addr[2U] = 0U;
    }
    __VdfgRegularize_h8541bace_4_5 = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                       ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d
                                       : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d);
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex 
            = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                << 1U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                          | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                          [0U]) : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
            = __VdfgRegularize_h8541bace_4_5;
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1U] 
            = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [1U]));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0U] 
            = (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d
                              [0U]));
    }
    vlSelfRef.__PVT__u_ram__DOT__a_wmask = ((0xffffff00U 
                                             & vlSelfRef.__PVT__u_ram__DOT__a_wmask) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (1U 
                                                             & vlSelfRef.__PVT__device_be
                                                             [0U])))));
    vlSelfRef.__PVT__u_ram__DOT__a_wmask = ((0xffff00ffU 
                                             & vlSelfRef.__PVT__u_ram__DOT__a_wmask) 
                                            | (0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__device_be
                                                                 [0U] 
                                                                 >> 1U)))) 
                                                  << 8U)));
    vlSelfRef.__PVT__u_ram__DOT__a_wmask = ((0xff00ffffU 
                                             & vlSelfRef.__PVT__u_ram__DOT__a_wmask) 
                                            | (0xff0000U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelfRef.__PVT__device_be
                                                                 [0U] 
                                                                 >> 2U)))) 
                                                  << 0x10U)));
    vlSelfRef.__PVT__u_ram__DOT__a_wmask = ((0xffffffU 
                                             & vlSelfRef.__PVT__u_ram__DOT__a_wmask) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (vlSelfRef.__PVT__device_be
                                                              [0U] 
                                                              >> 3U)))) 
                                               << 0x18U));
    vlSelfRef.__PVT__u_timer__DOT__timer_we = (vlSelfRef.__PVT__device_req
                                               [2U] 
                                               & vlSelfRef.__PVT__device_we
                                               [2U]);
    vlSelfRef.__PVT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlSelfRef.__PVT__device_addr
                [2U]))) {
        if ((4U != (0x3ffU & vlSelfRef.__PVT__device_addr
                    [2U]))) {
            if ((8U != (0x3ffU & vlSelfRef.__PVT__device_addr
                        [2U]))) {
                if ((0xcU != (0x3ffU & vlSelfRef.__PVT__device_addr
                              [2U]))) {
                    vlSelfRef.__PVT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0U] 
        = __VdfgRegularize_h8541bace_4_5;
    vlSelfRef.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask 
        = (((((IData)((0xffU == (vlSelfRef.__PVT__u_ram__DOT__a_wmask 
                                 >> 0x18U))) << 1U) 
             | (0xffU == (0xffU & (vlSelfRef.__PVT__u_ram__DOT__a_wmask 
                                   >> 0x10U)))) << 2U) 
           | (((IData)((0xffU == (0xffU & (vlSelfRef.__PVT__u_ram__DOT__a_wmask 
                                           >> 8U)))) 
               << 1U) | (0xffU == (0xffU & vlSelfRef.__PVT__u_ram__DOT__a_wmask))));
    vlSelfRef.__PVT__u_timer__DOT__mtimecmp_we = ((IData)(vlSelfRef.__PVT__u_timer__DOT__timer_we) 
                                                  & (8U 
                                                     == 
                                                     (0x3ffU 
                                                      & vlSelfRef.__PVT__device_addr
                                                      [2U])));
    vlSelfRef.__PVT__u_timer__DOT__mtimecmph_we = ((IData)(vlSelfRef.__PVT__u_timer__DOT__timer_we) 
                                                   & (0xcU 
                                                      == 
                                                      (0x3ffU 
                                                       & vlSelfRef.__PVT__device_addr
                                                       [2U])));
}

VL_INLINE_OPT void Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__3(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___nba_comb__TOP__ibex_simple_system__3\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_4;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_4 = 0;
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_15;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_15 = 0;
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_20;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_20 = 0;
    CData/*0:0*/ u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h57f54c8a__0;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h57f54c8a__0 = 0;
    // Body
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy = 1U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U] 
        = (IData)((((QData)((IData)(((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                      : vlSelfRef.__PVT__instr_rdata))) 
                    << 0x20U) | (QData)((IData)(((2U 
                                                  & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                  ? 
                                                 vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                  : vlSelfRef.__PVT__instr_rdata)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U] 
        = (IData)(((((QData)((IData)(((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                       ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]
                                       : vlSelfRef.__PVT__instr_rdata))) 
                     << 0x20U) | (QData)((IData)(((2U 
                                                   & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                                   ? 
                                                  vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]
                                                   : vlSelfRef.__PVT__instr_rdata)))) 
                   >> 0x20U));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U] 
        = vlSelfRef.__PVT__instr_rdata;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
        = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]
            : vlSelfRef.__PVT__instr_rdata);
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_20 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)((2U == (6U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_15 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid) 
           & (IData)((1U == (3U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid 
        = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                 | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid)));
    if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                    = (((- (IData)((vlSelfRef.__PVT__host_rdata
                                    [0U] >> 0x1fU))) 
                        << 8U) | (vlSelfRef.__PVT__host_rdata
                                  [0U] >> 0x18U));
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                    = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                          [0U] >> 7U)))) 
                        << 0x10U) | ((0xff00U & (vlSelfRef.__PVT__host_rdata
                                                 [0U] 
                                                 << 8U)) 
                                     | (0xffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 0x10U))));
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                    = (vlSelfRef.__PVT__host_rdata[0U] 
                       >> 0x18U);
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                    = ((0xff00U & (vlSelfRef.__PVT__host_rdata
                                   [0U] << 8U)) | (0xffU 
                                                   & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                      >> 0x10U)));
            }
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                      [0U] >> 0x17U)))) 
                    << 8U) | (0xffU & (vlSelfRef.__PVT__host_rdata
                                       [0U] >> 0x10U)));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (((- (IData)((vlSelfRef.__PVT__host_rdata
                                [0U] >> 0x1fU))) << 0x10U) 
                   | (vlSelfRef.__PVT__host_rdata[0U] 
                      >> 0x10U));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffU & (vlSelfRef.__PVT__host_rdata
                            [0U] >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (vlSelfRef.__PVT__host_rdata[0U] 
                   >> 0x10U);
        }
    } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                      [0U] >> 0xfU)))) 
                    << 8U) | (0xffU & (vlSelfRef.__PVT__host_rdata
                                       [0U] >> 8U)));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                      [0U] >> 0x17U)))) 
                    << 0x10U) | (0xffffU & (vlSelfRef.__PVT__host_rdata
                                            [0U] >> 8U)));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
                = (0xffU & (vlSelfRef.__PVT__host_rdata
                            [0U] >> 8U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
                = (0xffffU & (vlSelfRef.__PVT__host_rdata
                              [0U] >> 8U));
        }
    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                  [0U] >> 7U)))) << 8U) 
               | (0xffU & vlSelfRef.__PVT__host_rdata
                  [0U]));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (((- (IData)((1U & (vlSelfRef.__PVT__host_rdata
                                  [0U] >> 0xfU)))) 
                << 0x10U) | (0xffffU & vlSelfRef.__PVT__host_rdata
                             [0U]));
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext 
            = (0xffU & vlSelfRef.__PVT__host_rdata[0U]);
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext 
            = (0xffffU & vlSelfRef.__PVT__host_rdata
               [0U]);
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q) 
           | (vlSelfRef.__PVT__host_err[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
           & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
               & vlSelfRef.__PVT__host_err[0U]) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
        = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
            ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op))
                ? ((~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a) 
                   & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int)
                : (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                   | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int))
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)
            ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((vlSelfRef.__PVT__host_gnt[0U] 
                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
                }
            } else if ((vlSelfRef.__PVT__host_rvalid
                        [0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = (1U & (~ vlSelfRef.__PVT__host_gnt
                             [0U]));
            } else if (vlSelfRef.__PVT__host_gnt[0U]) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 0U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.__PVT__host_gnt[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = 1U;
            }
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
            if (vlSelfRef.__PVT__host_gnt[0U]) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access;
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
    if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                if (vlSelfRef.__PVT__host_rvalid[0U]) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                        = vlSelfRef.__PVT__host_err
                        [0U];
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                        = (1U & (~ vlSelfRef.__PVT__host_err
                                 [0U]));
                }
            }
        }
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        } else if (vlSelfRef.__PVT__host_rvalid[0U]) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            if ((vlSelfRef.__PVT__host_rvalid[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d 
                    = (vlSelfRef.__PVT__host_err[0U] 
                       | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.__PVT__host_gnt[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q)));
            }
        } else if ((vlSelfRef.__PVT__host_rvalid[0U] 
                    | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
            if (vlSelfRef.__PVT__host_gnt[0U]) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update 
                    = (1U & (~ (vlSelfRef.__PVT__host_err
                                [0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 3U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 0U;
            }
        } else if (vlSelfRef.__PVT__host_gnt[0U]) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 4U;
        }
    } else {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = 0U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = 0U;
            }
        }
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
            if ((vlSelfRef.__PVT__host_gnt[0U] | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = 2U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            }
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) {
            if (vlSelfRef.__PVT__host_gnt[0U]) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 2U : 0U);
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = 1U;
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns 
                    = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access)
                        ? 1U : 3U);
            }
        }
    }
    vlSelfRef.__PVT__u_timer__DOT__rdata_d = ((0U == 
                                               (0x3ffU 
                                                & vlSelfRef.__PVT__device_addr
                                                [2U]))
                                               ? (IData)(vlSelfRef.__PVT__u_timer__DOT__mtime_q)
                                               : ((4U 
                                                   == 
                                                   (0x3ffU 
                                                    & vlSelfRef.__PVT__device_addr
                                                    [2U]))
                                                   ? (IData)(
                                                             (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                              >> 0x20U))
                                                   : 
                                                  ((8U 
                                                    == 
                                                    (0x3ffU 
                                                     & vlSelfRef.__PVT__device_addr
                                                     [2U]))
                                                    ? (IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q)
                                                    : 
                                                   ((0xcU 
                                                     == 
                                                     (0x3ffU 
                                                      & vlSelfRef.__PVT__device_addr
                                                      [2U]))
                                                     ? (IData)(
                                                               (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x20U))
                                                     : 0U))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
            ? ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel)
                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int
                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex)
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex);
    vlSelfRef.__PVT__u_timer__DOT__mtime_d = (((QData)((IData)(
                                                               (((IData)(vlSelfRef.__PVT__u_timer__DOT__timer_we) 
                                                                 & (4U 
                                                                    == 
                                                                    (0x3ffU 
                                                                     & vlSelfRef.__PVT__device_addr
                                                                     [2U])))
                                                                 ? 
                                                                (((((8U 
                                                                     & vlSelfRef.__PVT__device_be
                                                                     [2U])
                                                                     ? 
                                                                    (vlSelfRef.__PVT__device_wdata
                                                                     [2U] 
                                                                     >> 0x18U)
                                                                     : (IData)(
                                                                               (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x38U))) 
                                                                   << 0x18U) 
                                                                  | (0xff0000U 
                                                                     & (((4U 
                                                                          & vlSelfRef.__PVT__device_be
                                                                          [2U])
                                                                          ? 
                                                                         (vlSelfRef.__PVT__device_wdata
                                                                          [2U] 
                                                                          >> 0x10U)
                                                                          : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x30U))) 
                                                                        << 0x10U))) 
                                                                 | ((0xff00U 
                                                                     & (((2U 
                                                                          & vlSelfRef.__PVT__device_be
                                                                          [2U])
                                                                          ? 
                                                                         (vlSelfRef.__PVT__device_wdata
                                                                          [2U] 
                                                                          >> 8U)
                                                                          : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x28U))) 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & ((1U 
                                                                           & vlSelfRef.__PVT__device_be
                                                                           [2U])
                                                                           ? 
                                                                          vlSelfRef.__PVT__device_wdata
                                                                          [2U]
                                                                           : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x20U))))))
                                                                 : (IData)(
                                                                           ((1ULL 
                                                                             + vlSelfRef.__PVT__u_timer__DOT__mtime_q) 
                                                                            >> 0x20U))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlSelfRef.__PVT__u_timer__DOT__timer_we) 
                                                                  & (0U 
                                                                     == 
                                                                     (0x3ffU 
                                                                      & vlSelfRef.__PVT__device_addr
                                                                      [2U])))
                                                                  ? 
                                                                 (((((8U 
                                                                      & vlSelfRef.__PVT__device_be
                                                                      [2U])
                                                                      ? 
                                                                     (vlSelfRef.__PVT__device_wdata
                                                                      [2U] 
                                                                      >> 0x18U)
                                                                      : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x18U))) 
                                                                    << 0x18U) 
                                                                   | (0xff0000U 
                                                                      & (((4U 
                                                                           & vlSelfRef.__PVT__device_be
                                                                           [2U])
                                                                           ? 
                                                                          (vlSelfRef.__PVT__device_wdata
                                                                           [2U] 
                                                                           >> 0x10U)
                                                                           : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 0x10U))) 
                                                                         << 0x10U))) 
                                                                  | ((0xff00U 
                                                                      & (((2U 
                                                                           & vlSelfRef.__PVT__device_be
                                                                           [2U])
                                                                           ? 
                                                                          (vlSelfRef.__PVT__device_wdata
                                                                           [2U] 
                                                                           >> 8U)
                                                                           : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                                                >> 8U))) 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & ((1U 
                                                                            & vlSelfRef.__PVT__device_be
                                                                            [2U])
                                                                            ? 
                                                                           vlSelfRef.__PVT__device_wdata
                                                                           [2U]
                                                                            : (IData)(vlSelfRef.__PVT__u_timer__DOT__mtime_q)))))
                                                                  : 
                                                                 ((IData)(1U) 
                                                                  + (IData)(vlSelfRef.__PVT__u_timer__DOT__mtime_q))))));
    vlSelfRef.__PVT__u_timer__DOT__mtimecmp_d = (((QData)((IData)(
                                                                  ((IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmph_we)
                                                                    ? 
                                                                   (((((8U 
                                                                        & vlSelfRef.__PVT__device_be
                                                                        [2U])
                                                                        ? 
                                                                       (vlSelfRef.__PVT__device_wdata
                                                                        [2U] 
                                                                        >> 0x18U)
                                                                        : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x38U))) 
                                                                      << 0x18U) 
                                                                     | (0xff0000U 
                                                                        & (((4U 
                                                                             & vlSelfRef.__PVT__device_be
                                                                             [2U])
                                                                             ? 
                                                                            (vlSelfRef.__PVT__device_wdata
                                                                             [2U] 
                                                                             >> 0x10U)
                                                                             : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x30U))) 
                                                                           << 0x10U))) 
                                                                    | ((0xff00U 
                                                                        & (((2U 
                                                                             & vlSelfRef.__PVT__device_be
                                                                             [2U])
                                                                             ? 
                                                                            (vlSelfRef.__PVT__device_wdata
                                                                             [2U] 
                                                                             >> 8U)
                                                                             : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x28U))) 
                                                                           << 8U)) 
                                                                       | (0xffU 
                                                                          & ((1U 
                                                                              & vlSelfRef.__PVT__device_be
                                                                              [2U])
                                                                              ? 
                                                                             vlSelfRef.__PVT__device_wdata
                                                                             [2U]
                                                                              : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x20U))))))
                                                                    : (IData)(
                                                                              (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                               >> 0x20U))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   ((IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_we)
                                                                     ? 
                                                                    (((((8U 
                                                                         & vlSelfRef.__PVT__device_be
                                                                         [2U])
                                                                         ? 
                                                                        (vlSelfRef.__PVT__device_wdata
                                                                         [2U] 
                                                                         >> 0x18U)
                                                                         : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x18U))) 
                                                                       << 0x18U) 
                                                                      | (0xff0000U 
                                                                         & (((4U 
                                                                              & vlSelfRef.__PVT__device_be
                                                                              [2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__device_wdata
                                                                              [2U] 
                                                                              >> 0x10U)
                                                                              : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 0x10U))) 
                                                                            << 0x10U))) 
                                                                     | ((0xff00U 
                                                                         & (((2U 
                                                                              & vlSelfRef.__PVT__device_be
                                                                              [2U])
                                                                              ? 
                                                                             (vlSelfRef.__PVT__device_wdata
                                                                              [2U] 
                                                                              >> 8U)
                                                                              : (IData)(
                                                                                (vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q 
                                                                                >> 8U))) 
                                                                            << 8U)) 
                                                                        | (0xffU 
                                                                           & ((1U 
                                                                               & vlSelfRef.__PVT__device_be
                                                                               [2U])
                                                                               ? 
                                                                              vlSelfRef.__PVT__device_wdata
                                                                              [2U]
                                                                               : (IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q)))))
                                                                     : (IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q)))));
    vlSelfRef.__PVT__u_timer__DOT__interrupt_d = ((~ 
                                                   ((IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmp_we) 
                                                    | (IData)(vlSelfRef.__PVT__u_timer__DOT__mtimecmph_we))) 
                                                  & ((vlSelfRef.__PVT__u_timer__DOT__mtime_q 
                                                      >= vlSelfRef.__PVT__u_timer__DOT__mtimecmp_q) 
                                                     | (IData)(vlSelfRef.__PVT__u_timer__DOT__interrupt_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed 
        = ((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_8) 
           & (3U != (3U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed 
        = ((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_8) 
           & (3U != (3U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                           >> 0x10U))));
    if ((1U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q)) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    << 0x10U) | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                 >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
                = (1U & (((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                          & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                             >> 1U)) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                = ((vlSelfRef.__PVT__instr_rdata << 0x10U) 
                   | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                      >> 0x10U));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
                = (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = 0U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
                = (1U & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                          >> 1U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))));
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err 
            = (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw 
            = (1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    }
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_10 
        = (1U & ((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                 | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)));
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21 
        = (IData)((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 2U) | (IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_20)));
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16 
        = (1U & ((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_15) 
                 | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                    >> 1U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext 
        = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext
            : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q))
                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext
                : ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                    ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.__PVT__host_rdata
                            [0U] << 8U) | (0xffU & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                            >> 0x10U)))
                        : ((vlSelfRef.__PVT__host_rdata
                            [0U] << 0x10U) | (0xffffU 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                 >> 8U))))
                    : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                        ? ((vlSelfRef.__PVT__host_rdata
                            [0U] << 0x18U) | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                        : vlSelfRef.__PVT__host_rdata
                       [0U]))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu 
        = ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
           & (vlSelfRef.__PVT__host_rvalid[0U] & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err)) 
                                                  & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)));
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if ((1U & (~ (((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs) 
                                   | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                  | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 2U))))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy = 0U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause 
                            = ((0U != (0x7fffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs))
                                ? (0x30U | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id))
                                : ((0x8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)
                                    ? 0x2bU : ((0x20000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)
                                                ? 0x23U
                                                : 0x27U)));
                    }
                } else if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                             | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                            | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 1U;
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 2U;
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause 
                            = ((3U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))
                                ? 0xbU : 8U);
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 3U;
                        }
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 7U;
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = 5U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec 
        = (0x1fU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause));
    if ((0x40U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = 0x1fU;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc 
        = ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
            ? 0x100000U : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))
                            ? ((0xffffff00U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                               | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec) 
                                  << 2U)) : (0xffffff00U 
                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
        = (0xfffffffeU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
        = (0xfffffffeU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = 0U;
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec;
                }
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 0U;
            }
        } else {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = 1U;
                        }
                    }
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch 
                            = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result) 
                                     | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 1U)));
                    }
                }
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = 1U;
                    }
                }
            }
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
            } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d 
                    = (1U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec)
                              ? (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                  >> 1U) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))
                              : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec)));
            }
        }
    }
    if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                }
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug) 
                         & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                }
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                }
            } else if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                        | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = 0U;
                                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 0U;
                                }
                            }
                        }
                    }
                }
            } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set) 
                 | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                         >> 1U)))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = 1U;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init 
        = ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
              | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int) 
           & ((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                  >> 1U)) & ((~ (IData)((3U == (3U 
                                                & (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U)))))))) 
                             | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 0U;
    if ((2U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))) {
            if ((0x8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = (0x12023U | (((0xc000000U 
                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 0x13U)) 
                                            | ((0x2000000U 
                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                           | (0xe00U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)));
                    }
                    if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                } else {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xdU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0U != (0x1fU & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | ((0xf8000U 
                                                    & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       << 8U)) 
                                                   | (0xf80U 
                                                      & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : ((0U == (0x1fU 
                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  >> 7U)))
                                        ? 0x100073U
                                        : (0xe7U | 
                                           (0xf8000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)))))
                                : ((0U != (0x1fU & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 2U)))
                                    ? (0x33U | ((0x1f00000U 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    << 0x12U)) 
                                                | (0xf80U 
                                                   & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))
                                    : (0x67U | (0xf8000U 
                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 8U)))));
                    }
                    if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    } else if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         >> 0xcU)))) {
                        if ((0U == (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             >> 2U)))) {
                            if ((0U == (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 >> 7U)))) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    }
                }
            } else if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x12003U | ((0xc000000U 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x18U)) 
                                       | ((0x2000000U 
                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0xdU)) 
                                          | ((0x1c00000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
                }
                if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0U == (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            >> 7U)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x1013U | ((0x1f00000U & 
                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x12U)) 
                                      | ((0xf8000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U)) 
                                         | (0xf80U 
                                            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
                if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                } else if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            }
        }
    } else if ((1U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x40063U | (((- (IData)((1U 
                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                    << 0x1cU) | ((0xc000000U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x15U)) 
                                                 | ((0x2000000U 
                                                     & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                        << 0x17U)) 
                                                    | ((0x38000U 
                                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                           << 8U)) 
                                                       | (((0x1000U 
                                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                               >> 1U)) 
                                                           | (0xc00U 
                                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) 
                                                          | ((0x300U 
                                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                 << 5U)) 
                                                             | (0x80U 
                                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                   >> 5U)))))))));
            } else if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x6fU | (((((0x80000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))));
            } else if ((0x800U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                if ((0x400U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                  >> 0xcU)))) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                            = ((0x40U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                ? ((0x20U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x847433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x846433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))))
                                : ((0x20U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                                    ? (0x844433U | 
                                       ((0x700000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x12U)) 
                                        | ((0x38000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 8U)) 
                                           | (0x380U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))
                                    : (0x40840433U 
                                       | ((0x700000U 
                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U)) 
                                          | ((0x38000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 8U)) 
                                             | (0x380U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))))));
                    }
                } else {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x47413U | (((((- (IData)(
                                                     (1U 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                         >> 0xcU)))) 
                                          << 0x1aU) 
                                         | (0x2000000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0xdU))) 
                                        | (0x1f00000U 
                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x12U))) 
                                       | ((0x38000U 
                                           & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 8U)) 
                                          | (0x380U 
                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x45413U | ((0x40000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x14U)) 
                                   | (((0x1f00000U 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0x12U)) 
                                       | (0x38000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 8U))) 
                                      | (0x380U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
            }
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xeU)))) {
                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                              >> 0xdU)))) {
                    if ((0x800U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        if ((0x400U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                            if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                            }
                        }
                    } else if ((0x1000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                    }
                }
            }
        } else if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x37U | (((- (IData)((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x11U) | ((0x1f000U 
                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xaU)) 
                                              | (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
                if ((2U == (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                     >> 7U)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                        = (0x10113U | (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                       >> 0xcU)))) 
                                        << 0x1dU) | 
                                       (((0x18000000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x18U)) 
                                         | (0x4000000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x15U))) 
                                        | ((0x2000000U 
                                            & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x17U)) 
                                           | (0x1000000U 
                                              & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0x12U))))));
                }
                if ((0U == ((0x20U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                      >> 7U)) | (0x1fU 
                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                    >> 2U))))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
                }
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x13U | (((- (IData)((1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xcU)))) 
                                 << 0x1aU) | ((0x2000000U 
                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                  << 0xdU)) 
                                              | ((0x1f00000U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)) 
                                                 | (0xf80U 
                                                    & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)
                    ? (0x6fU | (((((0x80000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x13U)) 
                                   | (0x40000000U & 
                                      (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x16U))) 
                                  | ((0x30000000U & 
                                      (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                       << 0x13U)) | 
                                     ((0x8000000U & 
                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x4000000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x13U))))) 
                                 | ((0x2000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x17U)) 
                                    | ((0x1000000U 
                                        & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                           << 0xdU)) 
                                       | (0xe00000U 
                                          & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                             << 0x12U))))) 
                                | ((0x1ff000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                                >> 0xcU)))) 
                                                 << 0xcU)) 
                                   | (0x80U & ((~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   >> 0xfU)) 
                                               << 7U)))))
                    : (0x13U | ((((- (IData)((1U & 
                                              (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               >> 0xcU)))) 
                                  << 0x1aU) | ((0x2000000U 
                                                & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0xdU)) 
                                               | (0x1f00000U 
                                                  & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                     << 0x12U)))) 
                                | ((0xf8000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                << 8U)) 
                                   | (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)))));
        }
    } else if ((0x8000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                          >> 0xdU)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                    = (0x842023U | ((((0x4000000U & 
                                       (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                        << 0x15U)) 
                                      | (0x2000000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0xdU))) 
                                     | (0x700000U & 
                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 0x12U))) 
                                    | ((0x38000U & 
                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                         << 8U)) | 
                                       ((0xc00U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata) 
                                        | (0x200U & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 3U))))));
            }
            if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else if ((0x4000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x42403U | ((0x4000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                              << 0x15U)) 
                               | ((0x3800000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x400000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x10U)) 
                                     | ((0x38000U & 
                                         (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                          << 8U)) | 
                                        (0x380U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    } else {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                      >> 0xdU)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed 
                = (0x10413U | ((0x3c000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                               << 0x13U)) 
                               | ((0x3000000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                 << 0xdU)) 
                                  | ((0x800000U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                                   << 0x12U)) 
                                     | ((0x400000U 
                                         & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 0x10U)) 
                                        | (0x380U & 
                                           (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                            << 5U)))))));
        }
        if ((0x2000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata)) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        } else if ((0U == (0xffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata 
                                    >> 5U)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = 1U;
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext
            : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q);
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu) 
            << 1U) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb 
        = (((- (IData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id))) 
            & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id) 
           | ((- (IData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu))) 
              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d) 
           | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
            = (0xfffffffeU & ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                               ? ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? 0x100080U : ((1U 
                                                   & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                   ? 0x100080U
                                                   : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                               : ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                   ? ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                       : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                   : ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                       ? (IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U))
                                       : 0x100080U))));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                              >> 1U));
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr = 0U;
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d 
            = (0x7fffffffU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                              + ((2U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                        << 1U)) | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
            & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
               & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                  | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)))) 
           | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump) 
              | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv) 
                 | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu) 
                    | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch)))));
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.__PVT__instr_req = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q) 
                                  | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffffcU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 1U) | (IData)(((0U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                 & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffff3U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x180U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 3U) | ((IData)(((0x100U == (0xf80U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                         << 2U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffffcfU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x280U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 5U) | ((IData)(((0x200U == (0xf80U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                         << 4U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffff3fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x380U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 7U) | ((IData)(((0x300U == (0xf80U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                         << 6U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffffcffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x480U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 9U) | ((IData)(((0x400U == (0xf80U 
                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                  & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                         << 8U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffff3ffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x580U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0xbU) | ((IData)(((0x500U == (0xf80U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                           << 0xaU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffffcfffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x680U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0xdU) | ((IData)(((0x600U == (0xf80U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                           << 0xcU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffff3fffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x780U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0xfU) | ((IData)(((0x700U == (0xf80U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                    & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                           << 0xeU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfffcffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x880U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x11U) | ((IData)(((0x800U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x10U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfff3ffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0x980U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x13U) | ((IData)(((0x900U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x12U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xffcfffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xa80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x15U) | ((IData)(((0xa00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x14U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xff3fffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xb80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x17U) | ((IData)(((0xb00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x16U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xfcffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xc80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x19U) | ((IData)(((0xc00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x18U)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xf3ffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xd80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x1bU) | ((IData)(((0xd00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x1aU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0xcfffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xe80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x1dU) | ((IData)(((0xe00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x1cU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec 
        = ((0x3fffffffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec) 
           | (((IData)(((0xf80U == (0xf80U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                        & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
               << 0x1fU) | ((IData)(((0xf00U == (0xf80U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) 
                                     & (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)))) 
                            << 0x1eU)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu) 
           | (0U != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q
            : ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
             ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
             : (0xfffffffcU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
           + ((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6) 
              << 2U));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n 
        = ((2U & ((((IData)(vlSelfRef.__PVT__instr_req) 
                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)))) 
           | (1U & ((IData)(vlSelfRef.__PVT__instr_req) 
                    | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q))));
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_4 
        = ((IData)(vlSelfRef.__PVT__instr_req) & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d 
            = (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                        >> 7U));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d 
            = ((0U == (0x1fU & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                >> 7U))) ? 0U : ((0U 
                                                  != (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                                  ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb
                                                  : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext));
    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d 
            = (0x1fU & 0U);
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d = 0U;
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d 
            = (0x1fU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q));
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q;
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb 
        = (((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
            & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
               & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                  & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                     & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))) 
           & ((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err) 
                  & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid))) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n 
        = ((2U & ((((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_4) 
                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                   << 1U) | (0xfffffffeU & ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                                              << 1U) 
                                             & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                            | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q))))) 
           | (1U & ((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_4) 
                    | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                        & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                       | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req 
        = (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
            | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
               | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                  | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err)))) 
           | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
              | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                  & ((~ ((0x340U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x14U)) | (0x341U 
                                                   == 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) 
                     & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                 & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
        = (((3U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                    >> 0x1eU)) << 6U) | (((2U == (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  >> 0x1eU)) 
                                          << 5U) | 
                                         (0x1fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q;
    vlSelfRef.__PVT__u_top__DOT__double_fault_seen_o = 0U;
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = 1U;
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval;
            }
        }
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = 3U;
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                   << 1U);
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id;
        }
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc;
        }
    } else {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q);
        } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d 
                = (3U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                         >> 2U));
        }
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d 
                        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q;
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = 1U;
                                                    }
                                                }
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((0x400000U 
                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = 1U;
                                                    }
                                                    if (
                                                        (0x100000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = 1U;
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = 1U;
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = 1U;
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = 1U;
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (0x200000U 
                                                     & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = 1U;
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((0x2000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                    if ((0x1000000U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int;
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0x40000000U 
                                                             | (0xfffffffU 
                                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)))) {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        }
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            ((0xfffffe3fU 
                                                              & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                                                             | (0x1c0U 
                                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q));
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff7ffU 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffe7U 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xfffff9ffU 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffffdfU 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xffffbfffU 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                                            = 
                                                            (0xf000ffffU 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffffcU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q));
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                = ((0xfffffe3fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d) 
                   | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q) 
                      << 6U));
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (0x100000U 
                                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = 1U;
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                            = 
                                                            (((0x20U 
                                                               & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                  << 2U)) 
                                                              | (0x10U 
                                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 3U))) 
                                                             | ((0xcU 
                                                                 & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                    >> 9U)) 
                                                                | ((2U 
                                                                    & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                       >> 0x10U)) 
                                                                   | (1U 
                                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                         >> 0x15U)))));
                                                        if (
                                                            ((3U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                  >> 2U))) 
                                                             & (0U 
                                                                != 
                                                                (3U 
                                                                 & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                                                    >> 2U))))) {
                                                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                                                                = 
                                                                (0x33U 
                                                                 & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = ((3U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                       | ((0x10U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                    >> 1U)) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q) 
                                               << 2U)));
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x1fU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (0x20U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                               << 1U)));
            if ((3U != (3U & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                              >> 2U)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                    = (0x3dU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d));
            }
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d 
                = ((0x23U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d)) 
                   | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q)
                        ? (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q)
                        : 4U) << 2U));
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((0x4000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x18U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x17U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 0x16U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x15U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                             >> 0x14U)))) {
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                                                            = 
                                                            (0xc0U 
                                                             & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause) {
        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save)))) {
            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause;
                if ((1U & (~ (IData)((0U != (0x60U 
                                             & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))))))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                        = (0x40U | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    if ((0x40U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))) {
                        vlSelfRef.__PVT__u_top__DOT__double_fault_seen_o = 1U;
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                            = (0x80U | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
                    }
                }
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id)))) {
        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = 1U;
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d 
                = (0xbfU & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d));
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d 
                    = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q;
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = 0U;
    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                    if ((0x10000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                        if ((0x8000000U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((0x1000000U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x800000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x400000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x200000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    }
                                }
                            }
                        }
                        if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1bU)))) {
                            if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x1aU)))) {
                                if ((1U & (~ (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x19U)))) {
                                    if ((0x1000000U 
                                         & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x800000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x400000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((0x200000U 
                                                & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    } else if ((1U 
                                                & (~ 
                                                   (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x14U)))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            = (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                               | (0xffffffffULL 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                         >> 0x14U)))));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 0U;
    u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h57f54c8a__0 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                 & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) 
                       | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
            ? (5U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            : (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q));
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear 
        = (1U & ((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id))) 
                 | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs) 
                  >> 3U)))) {
        if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) 
                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq)) 
                     & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id) 
                        | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h57f54c8a__0) {
                    if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                    }
                }
            } else {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = 1U;
        }
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d 
        = ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
           & ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
              | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                 | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready 
        = (1U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id)) 
                 & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if) 
                       | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready));
    vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_9 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready) 
           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs;
    if ((8U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 0U : ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                         ? 0U : 5U));
    } else if ((4U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            } else {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
                if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q) 
                      | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q)) 
                     | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio)))) {
                        if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio)))) {
                            if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio)))) {
                                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) {
                                    if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                         | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))) {
                                        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 9U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn)))) {
                    if ((1U & (~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)))) {
                        if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) {
                            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 2U;
                        }
                    }
                }
                if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q) 
                     & (~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 6U;
            }
            if (u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT____VdfgExtracted_h57f54c8a__0) {
                if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
                } else if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
                }
            }
        } else {
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 5U;
            }
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 7U;
            }
            if (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 8U;
            }
        }
    } else if ((2U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs) 
                        | (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                       | (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                          >> 2U)))) {
                vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 4U;
            }
        } else {
            vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns 
            = ((1U & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs))
                ? 4U : 1U);
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr = 0U;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = (1U | ((0xffffffe0U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
                 | ((((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                      & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready)) 
                     << 4U) | ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                 & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                    & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                                << 3U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                          << 2U)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xfffffe1fU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch) 
                << 8U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump) 
                          << 7U)) | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store) 
                                      << 6U) | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load) 
                                                << 5U))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
        = ((0xffffe1ffU & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr) 
           | (((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
                 & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                << 0xcU) | (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
                             & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv)) 
                            << 0xbU)) | ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                                           & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)) 
                                          << 0xaU) 
                                         | ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch) 
                                            << 9U))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d 
        = (((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
            & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d)) 
           | ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo 
        = ((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_9) 
           & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed)) 
              | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb) 
           | ((6U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
              & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we 
        = (1U & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                 | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((1U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load
            : ((1U & ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                      & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr))
                ? (1ULL + vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)
                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we 
        = (1U & ((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                  | vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we) 
                 >> 2U));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
        = (((QData)((IData)((vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                             >> 0x20U))) << 0x20U) 
           | (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    if ((4U & vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load 
            = (((QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)) 
                << 0x20U) | (QData)((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)));
    }
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d 
        = ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we)
            ? vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load
            : ((1U & ((~ ((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                          >> 2U)) & (vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                     >> 2U))) ? (1ULL 
                                                 + vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)
                : vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en 
        = (((IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_20) 
            << 2U) | (((((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21) 
                         & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                        | ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                           & (IData)(u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_15))) 
                       << 1U) | (((IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16) 
                                  & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 | ((~ (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSelfRef.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23)))));
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[0U] 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done;
    vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d 
        = vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q;
    if ((((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
          & (2U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))) 
         & ((0U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id)) 
            | (1U == (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id))))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d = 1U;
    } else if (((IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q) 
                & (IData)(vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d = 0U;
    }
}
