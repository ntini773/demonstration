// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vibex_simple_system.h for the primary calling header

#include "Vibex_simple_system__pch.h"
#include "Vibex_simple_system_ibex_simple_system.h"

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___eval_static__TOP__ibex_simple_system(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___eval_static__TOP__ibex_simple_system\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__clk_sys = 0U;
}

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___eval_final__TOP__ibex_simple_system(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___eval_final__TOP__ibex_simple_system\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((0U != vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle)))) {
        vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh 
            = vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle;
        VL_FCLOSE_I(vlSelfRef.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh); }
    VL_FCLOSE_I(vlSelfRef.__PVT__u_simulator_ctrl__DOT__log_fd); }

VL_ATTR_COLD void Vibex_simple_system_ibex_simple_system___ctor_var_reset(Vibex_simple_system_ibex_simple_system* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vibex_simple_system_ibex_simple_system___ctor_var_reset\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->IO_CLK = VL_RAND_RESET_I(1);
    vlSelf->IO_RST_N = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk_sys = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__host_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__device_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__instr_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rvalid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__instr_rdata = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__u_ram__a_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->__Vcellout__u_ram__a_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__Vcellout__u_simulator_ctrl__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__host_sel_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__device_sel_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__decode_err_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__host_sel_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(2);
    vlSelf->u_bus__DOT____Vlvbound_h668b8a91__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_h3ed7c4b5__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_h53a6baaf__0 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound_hf6e2d899__0 = VL_RAND_RESET_I(32);
    vlSelf->u_bus__DOT____Vlvbound_h0cc97a4e__0 = VL_RAND_RESET_I(4);
    vlSelf->u_bus__DOT____Vlvbound_h28d63177__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_h984de552__0 = VL_RAND_RESET_I(1);
    vlSelf->u_bus__DOT____Vlvbound_h6ad861f2__0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__double_fault_seen_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__rvfi_ext_pre_mip = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__rvfi_ext_post_mip = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__rvfi_ext_mhpmcounters[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__unused_perf_regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__unused_perf_regsh[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__ic_tag_rdata[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__ic_data_rdata[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs = VL_RAND_RESET_I(18);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__new_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip[__Vi0] = VL_RAND_RESET_I(18);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 10; ++__Vi1) {
            vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[__Vi0] = VL_RAND_RESET_Q(34);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k = 0;
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h5795fcef__0 = VL_RAND_RESET_I(32);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT____Vlvbound_h49acdc58__0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[__Vi0] = VL_RAND_RESET_I(22);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6 = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(96, vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d);
    VL_RAND_RESET_W(96, vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d = VL_RAND_RESET_I(31);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q = VL_RAND_RESET_I(31);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_8 = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_9 = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_10 = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16 = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21 = VL_RAND_RESET_I(1);
    vlSelf->u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[__Vi0] = VL_RAND_RESET_Q(34);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b = VL_RAND_RESET_I(16);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q = VL_RAND_RESET_I(24);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d = VL_RAND_RESET_I(2);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d = VL_RAND_RESET_I(6);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_d = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d = VL_RAND_RESET_I(8);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = VL_RAND_RESET_I(6);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = VL_RAND_RESET_I(18);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = VL_RAND_RESET_I(7);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle = 0;
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle = 0;
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__insn_is_compressed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed = VL_RAND_RESET_I(5);
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__trace_log_enable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh = 0;
    vlSelf->__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh = 0;
    vlSelf->__PVT__u_ram__DOT__a_wmask = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_ram__DOT__b_wmask = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 262144; ++__Vi0) {
        vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask = VL_RAND_RESET_I(4);
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid = 0;
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_simulator_ctrl__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->__PVT__u_simulator_ctrl__DOT__log_fd = 0;
    vlSelf->__PVT__u_timer__DOT__timer_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_timer__DOT__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_timer__DOT__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_timer__DOT__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__u_timer__DOT__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__error_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__error_d = VL_RAND_RESET_I(1);
    vlSelf->__PVT__u_timer__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_timer__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__u_timer__DOT__rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__11__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__11__jump_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_compressed_store_insn__14__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__15__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__15__jump_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_compressed_store_insn__16__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__22__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__22__jump_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__25__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__28__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__43__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_insn__43__jump_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__46__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_cb_sr_insn__49__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ci_caddi16sp_insn__52__nzimm = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ci_clui_insn__53__nzimm = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_compressed_load_insn__56__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ci_cli_insn__57__imm = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_compressed_load_insn__58__imm = VL_RAND_RESET_I(8);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ci_cslli_insn__63__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ci_caddi_insn__64__nzimm = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_ciw_insn__66__nzuimm = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__71__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__71__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__72__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__72__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__73__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__73__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__74__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__74__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__75__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__75__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__76__branch_target = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_b_insn__76__imm = VL_RAND_RESET_I(32);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__84__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__85__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__86__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__97__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__98__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__99__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__100__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__101__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__102__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__103__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__104__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__105__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__106__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_csr_insn__107__csr = VL_RAND_RESET_I(12);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_csr_name__108__csr_addr = VL_RAND_RESET_I(12);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_load_insn__122__size = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_fence_description__128__bits = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_u_top__DOT__u_ibex_tracer__DOT__get_fence_description__129__bits = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__134__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__152__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__153__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__154__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__155__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__225__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_shift_insn__226__shamt = VL_RAND_RESET_I(5);
    vlSelf->__Vtask_u_top__DOT__u_ibex_tracer__DOT__decode_i_funnelshift_insn__231__shamt = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__u_top__DOT__u_ibex_tracer__DOT__cycle = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = VL_RAND_RESET_I(4);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid__v0 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr__v1 = 0;
    vlSelf->__VdlyVal__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v0 = 0;
    vlSelf->__VdlySet__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr__v1 = 0;
}
