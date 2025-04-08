// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vibex_simple_system__Syms.h"


void Vibex_simple_system___024root__trace_chg_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vibex_simple_system___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_chg_0\n"); );
    // Init
    Vibex_simple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_simple_system___024root*>(voidSelf);
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vibex_simple_system___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vibex_simple_system___024root__trace_chg_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_chg_0_sub_0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+4,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+5,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+6,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask),32);
        bufp->chgCData(oldp+7,((((((IData)((0xffU == 
                                            (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                             >> 0x18U))) 
                                   << 1U) | (0xffU 
                                             == (0xffU 
                                                 & (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                                    >> 0x10U)))) 
                                 << 2U) | (((IData)(
                                                    (0xffU 
                                                     == 
                                                     (0xffU 
                                                      & (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                                         >> 8U)))) 
                                            << 1U) 
                                           | (0xffU 
                                              == (0xffU 
                                                  & vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask))))),4);
        bufp->chgBit(oldp+8,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
        bufp->chgIData(oldp+9,(vlSymsp->TOP__ibex_simple_system.__PVT__u_simulator_ctrl__DOT__log_fd),32);
        bufp->chgIData(oldp+10,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_tag_rdata[0]),22);
        bufp->chgIData(oldp+11,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_tag_rdata[1]),22);
        bufp->chgQData(oldp+12,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_data_rdata[0]),64);
        bufp->chgQData(oldp+14,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_data_rdata[1]),64);
        bufp->chgQData(oldp+16,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+20,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+22,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+24,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 5U))));
        bufp->chgCData(oldp+25,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [0U] >> 3U))),2);
        bufp->chgBit(oldp+26,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 2U))));
        bufp->chgBit(oldp+27,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [0U] >> 1U))));
        bufp->chgBit(oldp+28,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [0U])));
        bufp->chgBit(oldp+29,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 5U))));
        bufp->chgCData(oldp+30,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [1U] >> 3U))),2);
        bufp->chgBit(oldp+31,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 2U))));
        bufp->chgBit(oldp+32,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [1U] >> 1U))));
        bufp->chgBit(oldp+33,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [1U])));
        bufp->chgBit(oldp+34,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 5U))));
        bufp->chgCData(oldp+35,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [2U] >> 3U))),2);
        bufp->chgBit(oldp+36,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 2U))));
        bufp->chgBit(oldp+37,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [2U] >> 1U))));
        bufp->chgBit(oldp+38,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [2U])));
        bufp->chgBit(oldp+39,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 5U))));
        bufp->chgCData(oldp+40,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                       [3U] >> 3U))),2);
        bufp->chgBit(oldp+41,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 2U))));
        bufp->chgBit(oldp+42,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                     [3U] >> 1U))));
        bufp->chgBit(oldp+43,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                               [3U])));
        bufp->chgBit(oldp+44,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
        bufp->chgBit(oldp+45,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
        bufp->chgBit(oldp+46,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
        bufp->chgIData(oldp+47,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
        bufp->chgIData(oldp+48,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
        bufp->chgIData(oldp+49,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
        bufp->chgIData(oldp+50,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
        bufp->chgIData(oldp+52,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
        bufp->chgIData(oldp+53,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
        bufp->chgIData(oldp+54,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
        bufp->chgIData(oldp+55,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
        bufp->chgIData(oldp+56,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
        bufp->chgIData(oldp+58,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
        bufp->chgIData(oldp+59,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
        bufp->chgIData(oldp+61,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
        bufp->chgIData(oldp+62,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
        bufp->chgCData(oldp+64,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
        bufp->chgCData(oldp+66,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
        bufp->chgCData(oldp+68,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
        bufp->chgCData(oldp+70,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
        bufp->chgCData(oldp+72,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
        bufp->chgCData(oldp+74,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
        bufp->chgCData(oldp+76,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
        bufp->chgCData(oldp+78,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
        bufp->chgIData(oldp+79,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
        bufp->chgIData(oldp+80,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
        bufp->chgIData(oldp+81,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
        bufp->chgIData(oldp+82,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
        bufp->chgIData(oldp+83,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
        bufp->chgIData(oldp+84,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
        bufp->chgIData(oldp+86,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
        bufp->chgIData(oldp+87,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
        bufp->chgIData(oldp+88,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
        bufp->chgIData(oldp+89,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
        bufp->chgIData(oldp+90,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
        bufp->chgIData(oldp+91,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
        bufp->chgIData(oldp+92,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
        bufp->chgIData(oldp+93,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
        bufp->chgIData(oldp+94,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
        bufp->chgIData(oldp+95,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
        bufp->chgIData(oldp+96,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
        bufp->chgIData(oldp+97,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
        bufp->chgIData(oldp+98,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
        bufp->chgIData(oldp+99,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
        bufp->chgIData(oldp+100,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
        bufp->chgIData(oldp+101,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
        bufp->chgIData(oldp+102,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
        bufp->chgIData(oldp+103,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
        bufp->chgIData(oldp+104,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
        bufp->chgIData(oldp+105,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
        bufp->chgIData(oldp+106,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
        bufp->chgIData(oldp+107,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
        bufp->chgIData(oldp+108,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
        bufp->chgIData(oldp+109,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
        bufp->chgIData(oldp+110,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
        bufp->chgIData(oldp+111,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
        bufp->chgIData(oldp+112,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
        bufp->chgQData(oldp+113,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
        bufp->chgQData(oldp+115,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
        bufp->chgQData(oldp+117,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
        bufp->chgQData(oldp+119,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
        bufp->chgBit(oldp+121,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 5U))));
        bufp->chgCData(oldp+122,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [0U] >> 3U))),2);
        bufp->chgBit(oldp+123,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 2U))));
        bufp->chgBit(oldp+124,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [0U] >> 1U))));
        bufp->chgBit(oldp+125,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [0U])));
        bufp->chgBit(oldp+126,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 5U))));
        bufp->chgCData(oldp+127,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [1U] >> 3U))),2);
        bufp->chgBit(oldp+128,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 2U))));
        bufp->chgBit(oldp+129,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [1U] >> 1U))));
        bufp->chgBit(oldp+130,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [1U])));
        bufp->chgBit(oldp+131,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 5U))));
        bufp->chgCData(oldp+132,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [2U] >> 3U))),2);
        bufp->chgBit(oldp+133,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 2U))));
        bufp->chgBit(oldp+134,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [2U] >> 1U))));
        bufp->chgBit(oldp+135,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [2U])));
        bufp->chgBit(oldp+136,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 5U))));
        bufp->chgCData(oldp+137,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                        [3U] >> 3U))),2);
        bufp->chgBit(oldp+138,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 2U))));
        bufp->chgBit(oldp+139,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                      [3U] >> 1U))));
        bufp->chgBit(oldp+140,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                [3U])));
        bufp->chgBit(oldp+141,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
        bufp->chgIData(oldp+142,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
        bufp->chgIData(oldp+143,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
        bufp->chgQData(oldp+144,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
        bufp->chgQData(oldp+146,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
        bufp->chgBit(oldp+148,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__trace_log_enable));
        bufp->chgIData(oldp+149,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+150,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rvalid[0]));
        bufp->chgBit(oldp+151,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[0]));
        bufp->chgBit(oldp+152,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[1]));
        bufp->chgBit(oldp+153,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[2]));
        bufp->chgBit(oldp+154,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__decode_err_resp));
        bufp->chgBit(oldp+155,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_resp));
        bufp->chgCData(oldp+156,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_resp),2);
        bufp->chgBit(oldp+157,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_ram__a_rvalid_o));
        bufp->chgBit(oldp+158,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_simulator_ctrl__rvalid_o));
        bufp->chgCData(oldp+159,(vlSymsp->TOP__ibex_simple_system.__PVT__u_simulator_ctrl__DOT__sim_finish),3);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rvalid_q));
        bufp->chgQData(oldp+161,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q),64);
        bufp->chgQData(oldp+163,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q)),64);
        bufp->chgQData(oldp+165,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q),64);
        bufp->chgBit(oldp+167,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rvalid
                               [0U]));
        bufp->chgCData(oldp+168,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q),4);
        bufp->chgBit(oldp+169,((1U & VL_REDXOR_32((7U 
                                                   & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                                      >> 1U))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+170,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
        bufp->chgIData(oldp+171,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+172,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
        bufp->chgQData(oldp+173,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                                 [0U]),64);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap
                               [0U]));
        bufp->chgBit(oldp+176,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt
                               [0U]));
        bufp->chgBit(oldp+177,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr
                               [0U]));
        bufp->chgCData(oldp+178,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode
                                 [0U]),2);
        bufp->chgCData(oldp+179,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl
                                 [0U]),2);
        bufp->chgIData(oldp+180,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata
                                 [0U]),32);
        bufp->chgIData(oldp+181,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_pre_mip),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_post_mip),32);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi
                               [1U]));
        bufp->chgBit(oldp+184,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int
                               [1U]));
        bufp->chgBit(oldp+185,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req
                               [1U]));
        bufp->chgBit(oldp+186,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode
                               [0U]));
        bufp->chgQData(oldp+187,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle
                                 [0U]),64);
        bufp->chgIData(oldp+189,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[0]),32);
        bufp->chgIData(oldp+190,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[1]),32);
        bufp->chgIData(oldp+191,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[2]),32);
        bufp->chgIData(oldp+192,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[3]),32);
        bufp->chgIData(oldp+193,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[4]),32);
        bufp->chgIData(oldp+194,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[5]),32);
        bufp->chgIData(oldp+195,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[6]),32);
        bufp->chgIData(oldp+196,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[7]),32);
        bufp->chgIData(oldp+197,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[8]),32);
        bufp->chgIData(oldp+198,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[9]),32);
        bufp->chgIData(oldp+199,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[0]),32);
        bufp->chgIData(oldp+200,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[1]),32);
        bufp->chgIData(oldp+201,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[2]),32);
        bufp->chgIData(oldp+202,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[3]),32);
        bufp->chgIData(oldp+203,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[4]),32);
        bufp->chgIData(oldp+204,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[5]),32);
        bufp->chgIData(oldp+205,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[6]),32);
        bufp->chgIData(oldp+206,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[7]),32);
        bufp->chgIData(oldp+207,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[8]),32);
        bufp->chgIData(oldp+208,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[9]),32);
        bufp->chgBit(oldp+209,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid
                               [0U]));
        bufp->chgBit(oldp+210,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
                               [1U]));
        bufp->chgIData(oldp+211,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[0]),32);
        bufp->chgIData(oldp+212,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[1]),32);
        bufp->chgIData(oldp+213,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[2]),32);
        bufp->chgIData(oldp+214,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[3]),32);
        bufp->chgIData(oldp+215,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[4]),32);
        bufp->chgIData(oldp+216,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[5]),32);
        bufp->chgIData(oldp+217,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[6]),32);
        bufp->chgIData(oldp+218,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[7]),32);
        bufp->chgIData(oldp+219,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[8]),32);
        bufp->chgIData(oldp+220,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[9]),32);
        bufp->chgIData(oldp+221,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[0]),32);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[1]),32);
        bufp->chgIData(oldp+223,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[2]),32);
        bufp->chgIData(oldp+224,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[3]),32);
        bufp->chgIData(oldp+225,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[4]),32);
        bufp->chgIData(oldp+226,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[5]),32);
        bufp->chgIData(oldp+227,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[6]),32);
        bufp->chgIData(oldp+228,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[7]),32);
        bufp->chgIData(oldp+229,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[8]),32);
        bufp->chgIData(oldp+230,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[9]),32);
        bufp->chgIData(oldp+231,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
        bufp->chgIData(oldp+232,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
        bufp->chgIData(oldp+233,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
        bufp->chgIData(oldp+234,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
        bufp->chgIData(oldp+235,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
        bufp->chgIData(oldp+236,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
        bufp->chgIData(oldp+237,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
        bufp->chgIData(oldp+238,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
        bufp->chgIData(oldp+239,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
        bufp->chgIData(oldp+240,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
        bufp->chgIData(oldp+241,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
        bufp->chgIData(oldp+242,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
        bufp->chgIData(oldp+243,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
        bufp->chgIData(oldp+244,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
        bufp->chgIData(oldp+245,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
        bufp->chgIData(oldp+246,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
        bufp->chgIData(oldp+247,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
        bufp->chgIData(oldp+248,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
        bufp->chgIData(oldp+249,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
        bufp->chgIData(oldp+250,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
        bufp->chgIData(oldp+251,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
        bufp->chgIData(oldp+252,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
        bufp->chgIData(oldp+253,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
        bufp->chgIData(oldp+254,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
        bufp->chgIData(oldp+255,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
        bufp->chgIData(oldp+256,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
        bufp->chgIData(oldp+257,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
        bufp->chgIData(oldp+258,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
        bufp->chgIData(oldp+259,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
        bufp->chgIData(oldp+261,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
        bufp->chgIData(oldp+262,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
        bufp->chgIData(oldp+263,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+264,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+265,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+266,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+267,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+268,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+269,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+270,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+271,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+272,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+273,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+274,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+275,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+277,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+279,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+280,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+281,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+282,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+283,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+284,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+285,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+286,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+287,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+289,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+291,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+292,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
        bufp->chgIData(oldp+293,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
        bufp->chgBit(oldp+294,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
        bufp->chgQData(oldp+295,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
        bufp->chgQData(oldp+297,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
        bufp->chgBit(oldp+299,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 2U))));
        bufp->chgCData(oldp+301,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                        >> 3U))),3);
        bufp->chgBit(oldp+302,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
        bufp->chgBit(oldp+303,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
        bufp->chgBit(oldp+304,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
        bufp->chgBit(oldp+305,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 5U))));
        bufp->chgIData(oldp+306,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+307,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+308,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
        bufp->chgCData(oldp+309,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
        bufp->chgCData(oldp+310,((3U & ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                         ? ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                            >> 2U) : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
        bufp->chgBit(oldp+311,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
        bufp->chgCData(oldp+312,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
        bufp->chgBit(oldp+313,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 2U))));
        bufp->chgBit(oldp+314,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xfU))));
        bufp->chgBit(oldp+315,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xcU))));
        bufp->chgQData(oldp+316,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0]),64);
        bufp->chgBit(oldp+318,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0]));
        bufp->chgBit(oldp+319,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0]));
        bufp->chgBit(oldp+320,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0]));
        bufp->chgCData(oldp+321,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0]),2);
        bufp->chgCData(oldp+322,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0]),2);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0]),32);
        bufp->chgBit(oldp+324,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q));
        bufp->chgBit(oldp+325,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q));
        bufp->chgCData(oldp+326,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q),5);
        bufp->chgCData(oldp+327,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q),5);
        bufp->chgIData(oldp+328,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q),32);
        bufp->chgIData(oldp+329,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q),32);
        bufp->chgCData(oldp+330,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q),5);
        bufp->chgIData(oldp+331,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q),32);
        bufp->chgIData(oldp+332,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q),32);
        bufp->chgIData(oldp+333,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q),32);
        bufp->chgIData(oldp+334,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q),32);
        bufp->chgBit(oldp+335,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid));
        bufp->chgQData(oldp+336,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                                  [0U])),64);
        bufp->chgBit(oldp+338,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                      >> 0x11U))));
        bufp->chgBit(oldp+339,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                      >> 0x10U))));
        bufp->chgBit(oldp+340,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                      >> 0xfU))));
        bufp->chgSData(oldp+341,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip)),15);
        bufp->chgBit(oldp+342,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi));
        bufp->chgBit(oldp+343,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int));
        bufp->chgBit(oldp+344,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req));
        bufp->chgBit(oldp+345,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid));
        bufp->chgBit(oldp+346,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [0U] >> 0x11U))));
        bufp->chgBit(oldp+347,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [0U] >> 0x10U))));
        bufp->chgBit(oldp+348,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [0U] >> 0xfU))));
        bufp->chgSData(oldp+349,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                  [0U])),15);
        bufp->chgBit(oldp+350,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [1U] >> 0x11U))));
        bufp->chgBit(oldp+351,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [1U] >> 0x10U))));
        bufp->chgBit(oldp+352,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                      [1U] >> 0xfU))));
        bufp->chgSData(oldp+353,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                  [1U])),15);
        bufp->chgBit(oldp+354,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                      [0U] >> 0x11U))));
        bufp->chgBit(oldp+355,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                      [0U] >> 0x10U))));
        bufp->chgBit(oldp+356,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                      [0U] >> 0xfU))));
        bufp->chgSData(oldp+357,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                  [0U])),15);
        bufp->chgBit(oldp+358,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0]));
        bufp->chgBit(oldp+359,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1]));
        bufp->chgBit(oldp+360,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0]));
        bufp->chgBit(oldp+361,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1]));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0]));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1]));
        bufp->chgBit(oldp+364,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0]));
        bufp->chgQData(oldp+365,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0]),64);
        bufp->chgIData(oldp+367,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][0U]),32);
        bufp->chgIData(oldp+368,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][1U]),32);
        bufp->chgIData(oldp+369,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][2U]),32);
        bufp->chgIData(oldp+370,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][3U]),32);
        bufp->chgIData(oldp+371,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][4U]),32);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][5U]),32);
        bufp->chgIData(oldp+373,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][6U]),32);
        bufp->chgIData(oldp+374,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][7U]),32);
        bufp->chgIData(oldp+375,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][8U]),32);
        bufp->chgIData(oldp+376,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                                 [0U][9U]),32);
        bufp->chgIData(oldp+377,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][0U]),32);
        bufp->chgIData(oldp+378,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][1U]),32);
        bufp->chgIData(oldp+379,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][2U]),32);
        bufp->chgIData(oldp+380,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][3U]),32);
        bufp->chgIData(oldp+381,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][4U]),32);
        bufp->chgIData(oldp+382,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][5U]),32);
        bufp->chgIData(oldp+383,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][6U]),32);
        bufp->chgIData(oldp+384,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][7U]),32);
        bufp->chgIData(oldp+385,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][8U]),32);
        bufp->chgIData(oldp+386,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                                 [0U][9U]),32);
        bufp->chgBit(oldp+387,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0]));
        bufp->chgBit(oldp+388,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[0]));
        bufp->chgBit(oldp+389,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[1]));
        bufp->chgBit(oldp+390,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 4U))));
        bufp->chgCData(oldp+391,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U))),2);
        bufp->chgBit(oldp+392,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 1U))));
        bufp->chgBit(oldp+393,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                      >> 0x11U))));
        bufp->chgBit(oldp+394,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                      >> 0x10U))));
        bufp->chgBit(oldp+395,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                      >> 0xfU))));
        bufp->chgSData(oldp+396,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+398,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                      >> 6U))));
        bufp->chgBit(oldp+399,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                      >> 5U))));
        bufp->chgCData(oldp+400,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
        bufp->chgCData(oldp+401,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                  >> 0x1cU)),4);
        bufp->chgSData(oldp+402,((0xfffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0x10U))),12);
        bufp->chgBit(oldp+403,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xeU))));
        bufp->chgBit(oldp+404,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xdU))));
        bufp->chgBit(oldp+405,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xbU))));
        bufp->chgBit(oldp+406,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 0xaU))));
        bufp->chgBit(oldp+407,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 9U))));
        bufp->chgCData(oldp+408,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                        >> 6U))),3);
        bufp->chgBit(oldp+409,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 5U))));
        bufp->chgBit(oldp+410,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 4U))));
        bufp->chgBit(oldp+411,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 3U))));
        bufp->chgCData(oldp+412,((3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
        bufp->chgIData(oldp+413,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
        bufp->chgIData(oldp+414,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+415,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                      >> 2U))));
        bufp->chgCData(oldp+416,((3U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
        bufp->chgCData(oldp+417,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U))),2);
        bufp->chgIData(oldp+418,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
        bufp->chgBit(oldp+419,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                      >> 6U))));
        bufp->chgBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                      >> 5U))));
        bufp->chgCData(oldp+421,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
        bufp->chgIData(oldp+422,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
        bufp->chgCData(oldp+423,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
        bufp->chgQData(oldp+424,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
        bufp->chgQData(oldp+426,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
        bufp->chgQData(oldp+428,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
        bufp->chgQData(oldp+430,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
        bufp->chgQData(oldp+432,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
        bufp->chgQData(oldp+434,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
        bufp->chgQData(oldp+436,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
        bufp->chgQData(oldp+438,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
        bufp->chgQData(oldp+440,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
        bufp->chgQData(oldp+442,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
        bufp->chgQData(oldp+444,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
        bufp->chgQData(oldp+446,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
        bufp->chgQData(oldp+448,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
        bufp->chgQData(oldp+450,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
        bufp->chgQData(oldp+452,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
        bufp->chgQData(oldp+454,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
        bufp->chgQData(oldp+456,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
        bufp->chgQData(oldp+458,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
        bufp->chgQData(oldp+460,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
        bufp->chgQData(oldp+462,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
        bufp->chgQData(oldp+464,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
        bufp->chgQData(oldp+466,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
        bufp->chgQData(oldp+468,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
        bufp->chgQData(oldp+470,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
        bufp->chgQData(oldp+472,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
        bufp->chgQData(oldp+474,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
        bufp->chgQData(oldp+476,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
        bufp->chgQData(oldp+478,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
        bufp->chgQData(oldp+480,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
        bufp->chgQData(oldp+482,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
        bufp->chgQData(oldp+484,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
        bufp->chgQData(oldp+486,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
        bufp->chgQData(oldp+488,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
        bufp->chgQData(oldp+490,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
        bufp->chgBit(oldp+492,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 7U))));
        bufp->chgBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                      >> 6U))));
        bufp->chgBit(oldp+494,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
        bufp->chgQData(oldp+495,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
        bufp->chgQData(oldp+497,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
        bufp->chgIData(oldp+500,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
        bufp->chgCData(oldp+501,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
        bufp->chgIData(oldp+502,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
        bufp->chgCData(oldp+503,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
        bufp->chgCData(oldp+504,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                        >> 2U))),3);
        bufp->chgCData(oldp+505,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
        bufp->chgQData(oldp+507,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
        bufp->chgIData(oldp+509,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
        bufp->chgIData(oldp+510,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
        bufp->chgIData(oldp+511,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
        bufp->chgIData(oldp+512,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
        bufp->chgIData(oldp+513,(((IData)(1U) << (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
        bufp->chgIData(oldp+514,((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                         [1U])),32);
        bufp->chgIData(oldp+515,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
        bufp->chgIData(oldp+516,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
        bufp->chgBit(oldp+517,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
        bufp->chgCData(oldp+518,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
        bufp->chgBit(oldp+519,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
        bufp->chgBit(oldp+520,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
        bufp->chgBit(oldp+521,((0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
        bufp->chgCData(oldp+522,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
        bufp->chgCData(oldp+523,((3U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                                [1U] 
                                                >> 0x20U)))),2);
        bufp->chgCData(oldp+524,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
        bufp->chgIData(oldp+525,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k),32);
        bufp->chgBit(oldp+526,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
        bufp->chgBit(oldp+527,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
        bufp->chgBit(oldp+528,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
        bufp->chgQData(oldp+529,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
        bufp->chgQData(oldp+531,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
        bufp->chgBit(oldp+533,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
        bufp->chgBit(oldp+534,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
        bufp->chgBit(oldp+535,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
        bufp->chgBit(oldp+536,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
        bufp->chgBit(oldp+537,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
        bufp->chgBit(oldp+538,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
        bufp->chgBit(oldp+539,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
        bufp->chgBit(oldp+540,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
        bufp->chgBit(oldp+541,((IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 5U) | (0U 
                                                   == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
        bufp->chgBit(oldp+542,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                      | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 2U)))));
        bufp->chgCData(oldp+543,((0xffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
        bufp->chgBit(oldp+544,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
        bufp->chgBit(oldp+545,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
        bufp->chgCData(oldp+546,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
        bufp->chgCData(oldp+548,(((2U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                         << 1U)) | 
                                  (1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                         >> 1U)))),2);
        bufp->chgIData(oldp+549,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
        bufp->chgCData(oldp+551,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
        bufp->chgBit(oldp+552,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
        bufp->chgBit(oldp+553,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
        bufp->chgBit(oldp+554,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
        bufp->chgBit(oldp+555,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
        bufp->chgBit(oldp+556,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
        bufp->chgCData(oldp+557,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
        bufp->chgBit(oldp+558,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
        bufp->chgBit(oldp+559,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
        bufp->chgBit(oldp+560,((((2U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                 | (1U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+561,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                 [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0xfU))]),32);
        bufp->chgIData(oldp+562,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                 [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U))]),32);
        bufp->chgBit(oldp+563,(((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                       >> 0x1cU)) > (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
        bufp->chgBit(oldp+564,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))));
        bufp->chgIData(oldp+565,((~ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                  [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0xfU))])),32);
        bufp->chgIData(oldp+566,((~ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                                  [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                             >> 0x14U))])),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [9U])))) {
        bufp->chgIData(oldp+567,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                   ? (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                             [0U]) : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
        bufp->chgBit(oldp+568,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
        bufp->chgQData(oldp+569,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                   ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                   : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                       ? (1ULL | ((QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                  << 2U))
                                       : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                           ? (1ULL 
                                              | ((QData)((IData)(
                                                                 (0x3fffffffU 
                                                                  & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                 << 3U))
                                           : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                               ? (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x1fffffffU 
                                                                      & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                     << 4U))
                                               : (1ULL 
                                                  | ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                     << 1U))))))),33);
        bufp->chgBit(oldp+571,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                   ^ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
        bufp->chgBit(oldp+572,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec))));
        bufp->chgBit(oldp+573,(((3U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                   | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
        bufp->chgBit(oldp+574,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
        bufp->chgBit(oldp+575,((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
        bufp->chgBit(oldp+576,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                                & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)))));
        bufp->chgIData(oldp+577,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                   ? ((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 3U)) 
                                      << 2U) : (IData)(
                                                       (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 1U)))),32);
        bufp->chgBit(oldp+578,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) 
                                & (0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
        bufp->chgBit(oldp+579,(((2U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)))));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[2U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgCData(oldp+580,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                   | (((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req)) 
                                      | (0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                   ? 5U : 0xaU)),4);
        bufp->chgBit(oldp+581,(((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req))));
        bufp->chgCData(oldp+582,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                   ? (5U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                   : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
        bufp->chgBit(oldp+583,((1U & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                                      & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr))));
        bufp->chgBit(oldp+584,((1U & ((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                          >> 2U)) & 
                                      (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 2U)))));
        bufp->chgBit(oldp+585,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err))));
        bufp->chgBit(oldp+586,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+587,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[0]),32);
        bufp->chgIData(oldp+588,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[1]),32);
        bufp->chgIData(oldp+589,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[2]),32);
        bufp->chgBit(oldp+590,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[0]));
        bufp->chgBit(oldp+591,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[1]));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[2]));
        bufp->chgIData(oldp+593,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rdata),32);
        bufp->chgIData(oldp+594,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_ram__a_rdata_o),32);
        bufp->chgIData(oldp+595,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+596,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rdata_q),32);
        bufp->chgBit(oldp+597,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__error_q));
        bufp->chgIData(oldp+598,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle),32);
        bufp->chgIData(oldp+599,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+600,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id),32);
        bufp->chgIData(oldp+601,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                  << 1U)),32);
        bufp->chgCData(oldp+602,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+603,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+604,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 7U))),5);
        bufp->chgIData(oldp+605,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
        bufp->chgIData(oldp+606,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
        bufp->chgSData(oldp+607,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
        bufp->chgBit(oldp+608,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
        bufp->chgBit(oldp+609,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
        bufp->chgSData(oldp+612,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+613,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                   ? (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                   : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgBit(oldp+614,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
        bufp->chgBit(oldp+615,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
        bufp->chgCData(oldp+616,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x19U))),3);
        bufp->chgIData(oldp+617,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1fU))) 
                                   << 0xcU) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+618,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+619,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1fU))) 
                                   << 0xdU) | (((0x1000U 
                                                 & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 0x13U)) 
                                                | (0x800U 
                                                   & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      << 4U))) 
                                               | ((0x7e0U 
                                                   & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+620,((0xfffff000U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
        bufp->chgIData(oldp+621,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                                 | (0x800U 
                                                    & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+622,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0xfU))),32);
        bufp->chgBit(oldp+623,(((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)) 
                                | (0x341U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                              >> 0x14U)))));
        bufp->chgSData(oldp+624,(((0x3e0U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                             >> 0xaU)) 
                                  | (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                              >> 7U)))),10);
        bufp->chgCData(oldp+625,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                  >> 0x1bU)),5);
        bufp->chgIData(oldp+626,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
        bufp->chgIData(oldp+627,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
        bufp->chgIData(oldp+628,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
        bufp->chgIData(oldp+629,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
        bufp->chgIData(oldp+630,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
        bufp->chgCData(oldp+631,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
        bufp->chgIData(oldp+632,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+633,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid));
        bufp->chgBit(oldp+635,(0U));
        bufp->chgBit(oldp+636,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q))));
        bufp->chgBit(oldp+637,(0U));
        bufp->chgSData(oldp+638,((0x7fffU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q) 
                                             << 0x10U))),15);
        bufp->chgIData(oldp+639,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+640,((0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)));
        bufp->chgIData(oldp+641,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
        bufp->chgBit(oldp+642,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
        bufp->chgBit(oldp+643,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                      >> 0x11U))));
        bufp->chgBit(oldp+644,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                      >> 0x10U))));
        bufp->chgBit(oldp+645,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                      >> 0xfU))));
        bufp->chgSData(oldp+646,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)),15);
        bufp->chgBit(oldp+647,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__new_irq));
        bufp->chgBit(oldp+648,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
        bufp->chgCData(oldp+649,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
        bufp->chgBit(oldp+650,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
        bufp->chgBit(oldp+651,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
        bufp->chgBit(oldp+652,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
        bufp->chgBit(oldp+653,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+654,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid
                               [0U]));
        bufp->chgIData(oldp+655,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn
                                 [0U]),32);
        bufp->chgCData(oldp+656,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr
                                 [0U]),5);
        bufp->chgCData(oldp+657,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr
                                 [0U]),5);
        bufp->chgCData(oldp+658,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr
                                 [0U]),5);
        bufp->chgIData(oldp+659,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata
                                 [0U]),32);
        bufp->chgIData(oldp+660,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata
                                 [0U]),32);
        bufp->chgIData(oldp+661,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata
                                 [0U]),32);
        bufp->chgCData(oldp+662,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr
                                 [0U]),5);
        bufp->chgIData(oldp+663,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata
                                 [0U]),32);
        bufp->chgIData(oldp+664,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata
                                 [0U]),32);
        bufp->chgIData(oldp+665,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr
                                 [0U]),32);
        bufp->chgCData(oldp+666,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask
                                 [0U]),4);
        bufp->chgCData(oldp+667,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask
                                 [0U]),4);
        bufp->chgIData(oldp+668,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata
                                 [0U]),32);
        bufp->chgIData(oldp+669,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata
                                 [0U]),32);
        bufp->chgBit(oldp+670,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
        bufp->chgCData(oldp+672,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
        bufp->chgBit(oldp+673,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int));
        bufp->chgBit(oldp+674,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid[0]));
        bufp->chgIData(oldp+677,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn[0]),32);
        bufp->chgCData(oldp+678,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr[0]),5);
        bufp->chgCData(oldp+679,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr[0]),5);
        bufp->chgCData(oldp+680,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr[0]),5);
        bufp->chgIData(oldp+681,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata[0]),32);
        bufp->chgIData(oldp+682,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata[0]),32);
        bufp->chgIData(oldp+683,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata[0]),32);
        bufp->chgCData(oldp+684,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr[0]),5);
        bufp->chgIData(oldp+685,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata[0]),32);
        bufp->chgIData(oldp+686,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata[0]),32);
        bufp->chgIData(oldp+687,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr[0]),32);
        bufp->chgCData(oldp+688,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask[0]),4);
        bufp->chgCData(oldp+689,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask[0]),4);
        bufp->chgIData(oldp+690,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata[0]),32);
        bufp->chgIData(oldp+691,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata[0]),32);
        bufp->chgBit(oldp+692,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
        bufp->chgCData(oldp+694,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
        bufp->chgBit(oldp+695,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
        bufp->chgBit(oldp+696,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
        bufp->chgCData(oldp+697,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                        >> 1U))),2);
        bufp->chgCData(oldp+698,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
        bufp->chgCData(oldp+699,((((IData)((2U == (6U 
                                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
                                   << 2U) | (((IData)(
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
        bufp->chgBit(oldp+700,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__insn_is_compressed));
        bufp->chgCData(oldp+701,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed),5);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[7U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgBit(oldp+702,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready))));
        bufp->chgBit(oldp+703,(((7U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (7U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+704,(((8U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (8U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+705,(((9U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (9U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgBit(oldp+706,(((6U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                                & (6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
        bufp->chgCData(oldp+707,(((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                    & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                       & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21))) 
                                   << 2U) | ((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                               & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                   ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)
                                                   : (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16))) 
                                              << 1U) 
                                             | (1U 
                                                & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                                   & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                       ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)
                                                       : 
                                                      ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                       | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))))),3);
        bufp->chgCData(oldp+708,((((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21) 
                                   << 2U) | (((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
        bufp->chgCData(oldp+709,(((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)) 
                                   << 2U) | ((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)
                                                : (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)) 
                                              << 1U) 
                                             | (1U 
                                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                    ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)
                                                    : 
                                                   ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))))))),3);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+710,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata[0]),32);
        bufp->chgBit(oldp+711,(vlSymsp->TOP__ibex_simple_system.__PVT__host_err[0]));
        bufp->chgIData(oldp+712,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                 [0U]),32);
        bufp->chgBit(oldp+713,(vlSymsp->TOP__ibex_simple_system.__PVT__host_err
                               [0U]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[9U]))) {
        bufp->chgBit(oldp+714,(vlSymsp->TOP__ibex_simple_system.__PVT__host_req[0]));
        bufp->chgBit(oldp+715,(vlSymsp->TOP__ibex_simple_system.__PVT__host_gnt[0]));
        bufp->chgIData(oldp+716,(vlSymsp->TOP__ibex_simple_system.__PVT__host_addr[0]),32);
        bufp->chgBit(oldp+717,(vlSymsp->TOP__ibex_simple_system.__PVT__host_we[0]));
        bufp->chgCData(oldp+718,(vlSymsp->TOP__ibex_simple_system.__PVT__host_be[0]),4);
        bufp->chgIData(oldp+719,(vlSymsp->TOP__ibex_simple_system.__PVT__host_wdata[0]),32);
        bufp->chgBit(oldp+720,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[0]));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[1]));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[2]));
        bufp->chgIData(oldp+723,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[0]),32);
        bufp->chgIData(oldp+724,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[1]),32);
        bufp->chgIData(oldp+725,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[2]),32);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[0]));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[1]));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[2]));
        bufp->chgCData(oldp+729,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[0]),4);
        bufp->chgCData(oldp+730,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[1]),4);
        bufp->chgCData(oldp+731,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[2]),4);
        bufp->chgIData(oldp+732,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[0]),32);
        bufp->chgIData(oldp+733,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[1]),32);
        bufp->chgIData(oldp+734,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[2]),32);
        bufp->chgBit(oldp+735,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_valid));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_valid));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_req));
        bufp->chgCData(oldp+738,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_req),2);
        bufp->chgBit(oldp+739,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                               [0U]));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                               [0U]));
        bufp->chgCData(oldp+741,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                 [0U]),4);
        bufp->chgIData(oldp+742,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                 [0U]),32);
        bufp->chgIData(oldp+743,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                 [0U]),32);
        bufp->chgIData(oldp+744,((0x3ffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                              [0U] 
                                              >> 2U))),18);
        bufp->chgSData(oldp+745,(((0x3ffcU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                              [0U] 
                                              >> 0x12U)) 
                                  | (3U & vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                     [0U]))),14);
        bufp->chgIData(oldp+746,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__a_wmask),32);
        bufp->chgCData(oldp+747,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
        bufp->chgBit(oldp+748,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                               [1U]));
        bufp->chgBit(oldp+749,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                               [1U]));
        bufp->chgCData(oldp+750,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                 [1U]),4);
        bufp->chgIData(oldp+751,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                 [1U]),32);
        bufp->chgIData(oldp+752,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                 [1U]),32);
        bufp->chgCData(oldp+753,((0xffU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                           [1U] >> 2U))),8);
        bufp->chgBit(oldp+754,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                               [2U]));
        bufp->chgIData(oldp+755,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                 [2U]),32);
        bufp->chgBit(oldp+756,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                               [2U]));
        bufp->chgCData(oldp+757,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                 [2U]),4);
        bufp->chgIData(oldp+758,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                 [2U]),32);
        bufp->chgBit(oldp+759,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we));
        bufp->chgBit(oldp+760,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we) 
                                & (0U == (0x3ffU & 
                                          vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                          [2U])))));
        bufp->chgBit(oldp+761,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we) 
                                & (4U == (0x3ffU & 
                                          vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                          [2U])))));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_we));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmph_we));
        bufp->chgBit(oldp+764,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__error_d));
        bufp->chgBit(oldp+765,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out));
        bufp->chgBit(oldp+766,(vlSymsp->TOP__ibex_simple_system.__PVT__host_gnt
                               [0U]));
        bufp->chgBit(oldp+767,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
        bufp->chgCData(oldp+768,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
        bufp->chgIData(oldp+769,(((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                           >> 3U)) 
                                  << 2U)),32);
        bufp->chgIData(oldp+770,(((1U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 2U)))
                                   ? ((1U & (IData)(
                                                    (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                           << 0x18U) 
                                          | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                             >> 8U))
                                       : ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                           << 0x10U) 
                                          | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                             >> 0x10U)))
                                   : ((1U & (IData)(
                                                    (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))
                                       ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                           << 8U) | 
                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                           >> 0x18U))
                                       : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata))),32);
        bufp->chgQData(oldp+771,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
        bufp->chgQData(oldp+773,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
        bufp->chgCData(oldp+775,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
        bufp->chgBit(oldp+776,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval));
        bufp->chgCData(oldp+777,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
        bufp->chgIData(oldp+778,((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                          >> 1U))),32);
        bufp->chgBit(oldp+779,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a));
        bufp->chgBit(oldp+781,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b));
        bufp->chgBit(oldp+782,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id));
        bufp->chgCData(oldp+783,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
        bufp->chgIData(oldp+784,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
        bufp->chgIData(oldp+785,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex),32);
        bufp->chgIData(oldp+786,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex),32);
        bufp->chgBit(oldp+787,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
        bufp->chgBit(oldp+788,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex));
        bufp->chgCData(oldp+791,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
        bufp->chgCData(oldp+792,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
        bufp->chgIData(oldp+793,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex),32);
        bufp->chgIData(oldp+794,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex),32);
        bufp->chgBit(oldp+795,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access));
        bufp->chgCData(oldp+796,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op),2);
        bufp->chgBit(oldp+797,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
        bufp->chgCData(oldp+798,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
        bufp->chgBit(oldp+799,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req));
        bufp->chgIData(oldp+801,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata),32);
        bufp->chgBit(oldp+802,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
        bufp->chgIData(oldp+806,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval),32);
        bufp->chgBit(oldp+807,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store));
        bufp->chgBit(oldp+812,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id));
        bufp->chgCData(oldp+813,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d),5);
        bufp->chgCData(oldp+814,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d),5);
        bufp->chgIData(oldp+815,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d),32);
        bufp->chgIData(oldp+816,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d),32);
        bufp->chgCData(oldp+817,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int),4);
        bufp->chgIData(oldp+818,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d),32);
        bufp->chgIData(oldp+819,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d),32);
        bufp->chgBit(oldp+820,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
        bufp->chgIData(oldp+821,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
        bufp->chgQData(oldp+822,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
        bufp->chgQData(oldp+824,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
        bufp->chgBit(oldp+826,((0U == (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 1U)))));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
        bufp->chgQData(oldp+828,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
        bufp->chgQData(oldp+830,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
        bufp->chgCData(oldp+832,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                   << 1U) | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                             | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))),2);
        bufp->chgIData(oldp+833,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
        bufp->chgQData(oldp+834,((0x1ffffffffULL & 
                                  (~ ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                      << 1U)))),33);
        bufp->chgBit(oldp+836,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
        bufp->chgBit(oldp+837,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
        bufp->chgBit(oldp+838,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
        bufp->chgBit(oldp+839,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
        bufp->chgQData(oldp+840,((0x1ffffffffULL & 
                                  ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                    ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                    : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                        ? (~ ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                              << 1U))
                                        : ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                           << 1U))))),33);
        bufp->chgBit(oldp+842,((1U & (((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        ^ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex) 
                                       >> 0x1fU) ? 
                                      ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                        >> 0x1fU) ^ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                       : (~ (IData)(
                                                    (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 0x20U)))))));
        bufp->chgBit(oldp+843,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
        bufp->chgBit(oldp+844,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
        bufp->chgBit(oldp+845,((8U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
        bufp->chgCData(oldp+846,((0x3fU & ((IData)(0x20U) 
                                           - (0x1fU 
                                              & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)))),6);
        bufp->chgIData(oldp+847,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
        bufp->chgQData(oldp+848,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
        bufp->chgQData(oldp+850,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
        bufp->chgBit(oldp+852,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
        bufp->chgIData(oldp+853,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
        bufp->chgCData(oldp+855,(((0x10U & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0xfU 
                                                         & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                                            >> 0x18U))))) 
                                            << 4U)) 
                                  | (0xfU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                             >> 0x18U)))),5);
        bufp->chgCData(oldp+856,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                           >> 0x10U))),5);
        bufp->chgBit(oldp+857,(((3U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgBit(oldp+858,(((4U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                                | (7U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
        bufp->chgIData(oldp+859,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  | vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+860,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+861,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                  ^ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
        bufp->chgIData(oldp+862,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
        bufp->chgBit(oldp+863,((1U & (((IData)(0x20U) 
                                       - (0x1fU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                      >> 5U))));
        bufp->chgQData(oldp+864,((0x7ffffffffULL & 
                                  (VL_MULS_QQQ(35, 
                                               (0x7ffffffffULL 
                                                & VL_EXTENDS_QI(35,17, 
                                                                (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                               (0x7ffffffffULL 
                                                & VL_EXTENDS_QI(35,17, 
                                                                (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                   + VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
        bufp->chgQData(oldp+866,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
        bufp->chgBit(oldp+868,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
        bufp->chgBit(oldp+869,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
        bufp->chgBit(oldp+870,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
        bufp->chgBit(oldp+871,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
        bufp->chgQData(oldp+872,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
        bufp->chgQData(oldp+874,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
        bufp->chgQData(oldp+876,((0x3ffffffffULL & 
                                  ((0x7ffffffffULL 
                                    & VL_MULS_QQQ(35, 
                                                  (0x7ffffffffULL 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                  (0x7ffffffffULL 
                                                   & VL_EXTENDS_QI(35,17, 
                                                                   (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                     << 0x10U) 
                                                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                   + (0x7ffffffffULL 
                                      & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
        bufp->chgBit(oldp+878,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
        bufp->chgBit(oldp+879,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
        bufp->chgBit(oldp+880,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
        bufp->chgIData(oldp+881,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
        bufp->chgIData(oldp+882,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
        bufp->chgIData(oldp+883,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
        bufp->chgQData(oldp+885,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
        bufp->chgCData(oldp+887,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
        bufp->chgBit(oldp+888,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
        bufp->chgBit(oldp+889,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
        bufp->chgBit(oldp+890,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
        bufp->chgCData(oldp+893,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
        bufp->chgBit(oldp+894,((1U & (IData)((1ULL 
                                              & ((VL_MULS_QQQ(35, 
                                                              (0x7ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                              (0x7ffffffffULL 
                                                               & VL_EXTENDS_QI(35,17, 
                                                                               (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                  + 
                                                  VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                 >> 0x22U))))));
        bufp->chgCData(oldp+895,(((2U & ((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x21U)) 
                                         << 1U)) | 
                                  (1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
        bufp->chgSData(oldp+896,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
        bufp->chgSData(oldp+897,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
        bufp->chgCData(oldp+898,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
        bufp->chgBit(oldp+899,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
        bufp->chgBit(oldp+900,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+901,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
        bufp->chgBit(oldp+902,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
        bufp->chgBit(oldp+903,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
        bufp->chgBit(oldp+904,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
        bufp->chgBit(oldp+906,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
        bufp->chgBit(oldp+907,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
        bufp->chgBit(oldp+908,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
        bufp->chgBit(oldp+909,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
        bufp->chgBit(oldp+910,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
        bufp->chgBit(oldp+911,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
        bufp->chgBit(oldp+912,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
        bufp->chgBit(oldp+913,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
        bufp->chgIData(oldp+914,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
        bufp->chgBit(oldp+915,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
        bufp->chgBit(oldp+917,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
        bufp->chgBit(oldp+918,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
        bufp->chgBit(oldp+919,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
        bufp->chgCData(oldp+920,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
        bufp->chgCData(oldp+921,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
        bufp->chgBit(oldp+922,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
        bufp->chgBit(oldp+923,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
        bufp->chgCData(oldp+924,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
        bufp->chgCData(oldp+925,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
        bufp->chgBit(oldp+926,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
        bufp->chgBit(oldp+927,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
        bufp->chgBit(oldp+928,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
        bufp->chgBit(oldp+931,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
        bufp->chgBit(oldp+934,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
        bufp->chgBit(oldp+937,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
        bufp->chgBit(oldp+940,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
        bufp->chgBit(oldp+942,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
        bufp->chgBit(oldp+943,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
        bufp->chgCData(oldp+946,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
        bufp->chgCData(oldp+947,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
        bufp->chgCData(oldp+948,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
        bufp->chgCData(oldp+949,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
        bufp->chgBit(oldp+950,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
        bufp->chgCData(oldp+952,((3U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                >> 1U)))),2);
        bufp->chgBit(oldp+953,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[9U] 
                      | vlSelfRef.__Vm_traceActivity
                      [0xaU])))) {
        bufp->chgBit(oldp+954,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
        bufp->chgBit(oldp+955,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
        bufp->chgBit(oldp+956,(((0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
                                   & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                      | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id))))));
        bufp->chgBit(oldp+957,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
        bufp->chgBit(oldp+958,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                   | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                      | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err))))));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+959,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req));
        bufp->chgIData(oldp+960,((0xfffffffcU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
        bufp->chgIData(oldp+961,((0x3ffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                              >> 2U))),18);
        bufp->chgSData(oldp+962,((0x3ffcU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                             >> 0x12U))),14);
        bufp->chgQData(oldp+963,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_d),64);
        bufp->chgQData(oldp+965,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_d),64);
        bufp->chgIData(oldp+967,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rdata_d),32);
        bufp->chgBit(oldp+968,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__double_fault_seen_o));
        bufp->chgBit(oldp+969,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
        bufp->chgIData(oldp+970,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
        bufp->chgIData(oldp+971,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
        bufp->chgBit(oldp+972,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)));
        bufp->chgBit(oldp+973,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set));
        bufp->chgBit(oldp+975,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 6U))));
        bufp->chgBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                      >> 5U))));
        bufp->chgCData(oldp+977,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))),5);
        bufp->chgBit(oldp+978,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
        bufp->chgBit(oldp+979,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy));
        bufp->chgIData(oldp+981,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
        bufp->chgBit(oldp+982,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu));
        bufp->chgIData(oldp+983,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id),32);
        bufp->chgBit(oldp+984,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en));
        bufp->chgBit(oldp+985,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb));
        bufp->chgBit(oldp+988,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
        bufp->chgBit(oldp+991,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d));
        bufp->chgCData(oldp+993,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d),5);
        bufp->chgIData(oldp+994,(((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                   ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb
                                   : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext)),32);
        bufp->chgIData(oldp+995,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d),32);
        bufp->chgBit(oldp+996,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb));
        bufp->chgIData(oldp+997,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d),32);
        bufp->chgBit(oldp+998,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[0]));
        bufp->chgIData(oldp+1000,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
        bufp->chgCData(oldp+1001,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
        bufp->chgBit(oldp+1002,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 5U))));
        bufp->chgBit(oldp+1003,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 4U))));
        bufp->chgCData(oldp+1004,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                         >> 2U))),2);
        bufp->chgBit(oldp+1005,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                       >> 1U))));
        bufp->chgBit(oldp+1006,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
        bufp->chgBit(oldp+1007,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
        bufp->chgBit(oldp+1008,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 3U))));
        bufp->chgBit(oldp+1009,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 7U))));
        bufp->chgBit(oldp+1010,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 0xbU))));
        bufp->chgSData(oldp+1011,((0x7fffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                              >> 0x10U))),15);
        bufp->chgBit(oldp+1012,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
        bufp->chgBit(oldp+1013,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
        bufp->chgIData(oldp+1014,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
        bufp->chgBit(oldp+1015,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
        bufp->chgBit(oldp+1016,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                       >> 6U))));
        bufp->chgBit(oldp+1017,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                       >> 5U))));
        bufp->chgCData(oldp+1018,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
        bufp->chgBit(oldp+1019,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
        bufp->chgIData(oldp+1020,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
        bufp->chgBit(oldp+1021,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
        bufp->chgIData(oldp+1022,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                    ? 0x100001U : (1U 
                                                   | (0xffffff00U 
                                                      & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
        bufp->chgBit(oldp+1023,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
        bufp->chgCData(oldp+1024,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                   >> 0x1cU)),4);
        bufp->chgSData(oldp+1025,((0xfffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                             >> 0x10U))),12);
        bufp->chgBit(oldp+1026,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xfU))));
        bufp->chgBit(oldp+1027,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xeU))));
        bufp->chgBit(oldp+1028,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xdU))));
        bufp->chgBit(oldp+1029,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xcU))));
        bufp->chgBit(oldp+1030,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xbU))));
        bufp->chgBit(oldp+1031,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 0xaU))));
        bufp->chgBit(oldp+1032,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 9U))));
        bufp->chgCData(oldp+1033,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                         >> 6U))),3);
        bufp->chgBit(oldp+1034,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 5U))));
        bufp->chgBit(oldp+1035,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 4U))));
        bufp->chgBit(oldp+1036,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 3U))));
        bufp->chgBit(oldp+1037,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                       >> 2U))));
        bufp->chgCData(oldp+1038,((3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
        bufp->chgBit(oldp+1039,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
        bufp->chgIData(oldp+1040,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
        bufp->chgBit(oldp+1041,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
        bufp->chgBit(oldp+1042,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
        bufp->chgBit(oldp+1043,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
        bufp->chgBit(oldp+1044,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
        bufp->chgBit(oldp+1045,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
        bufp->chgIData(oldp+1046,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
        bufp->chgIData(oldp+1047,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
        bufp->chgIData(oldp+1048,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
        bufp->chgBit(oldp+1049,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 1U))));
        bufp->chgBit(oldp+1050,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 1U))));
        bufp->chgBit(oldp+1051,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                       >> 1U))));
        bufp->chgBit(oldp+1052,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 7U))));
        bufp->chgBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 6U))));
        bufp->chgCData(oldp+1054,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1055,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 2U))));
        bufp->chgBit(oldp+1056,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                       >> 1U))));
        bufp->chgBit(oldp+1057,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
        bufp->chgBit(oldp+1058,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 6U))));
        bufp->chgCData(oldp+1059,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                         >> 3U))),3);
        bufp->chgBit(oldp+1060,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 2U))));
        bufp->chgBit(oldp+1061,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                       >> 1U))));
        bufp->chgBit(oldp+1062,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
        bufp->chgBit(oldp+1063,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
        bufp->chgIData(oldp+1064,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
        bufp->chgBit(oldp+1065,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
        bufp->chgIData(oldp+1066,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                   >> 3U)),29);
        bufp->chgIData(oldp+1067,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                   >> 3U)),29);
        bufp->chgIData(oldp+1068,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                   >> 3U)),29);
        bufp->chgBit(oldp+1069,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
        bufp->chgBit(oldp+1070,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
        bufp->chgQData(oldp+1071,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+1073,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
        bufp->chgQData(oldp+1074,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
        bufp->chgBit(oldp+1076,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                       >> 2U))));
        bufp->chgBit(oldp+1077,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                       >> 2U))));
        bufp->chgQData(oldp+1078,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
        bufp->chgBit(oldp+1080,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
        bufp->chgQData(oldp+1081,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
        bufp->chgIData(oldp+1084,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
        bufp->chgCData(oldp+1085,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
        bufp->chgIData(oldp+1086,(((0x20000U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 0xeU)) 
                                   | ((0x10000U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                   << 9U)) 
                                      | ((0x8000U & 
                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           << 4U)) 
                                         | (0x7fffU 
                                            & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 0x10U)))))),18);
        bufp->chgCData(oldp+1087,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
        bufp->chgBit(oldp+1088,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
        bufp->chgBit(oldp+1089,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
        bufp->chgBit(oldp+1090,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
        bufp->chgBit(oldp+1091,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
        bufp->chgBit(oldp+1092,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
        bufp->chgBit(oldp+1093,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
        bufp->chgCData(oldp+1094,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
        bufp->chgBit(oldp+1095,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
        bufp->chgBit(oldp+1096,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
        bufp->chgBit(oldp+1097,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
        bufp->chgBit(oldp+1098,((6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns))));
        bufp->chgBit(oldp+1099,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
        bufp->chgBit(oldp+1100,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
        bufp->chgIData(oldp+1101,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
        bufp->chgBit(oldp+1102,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
        bufp->chgIData(oldp+1103,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
        bufp->chgBit(oldp+1104,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
        bufp->chgIData(oldp+1105,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
        bufp->chgBit(oldp+1106,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
        bufp->chgBit(oldp+1107,((3U != (3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
        bufp->chgIData(oldp+1108,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
        bufp->chgCData(oldp+1109,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
        bufp->chgBit(oldp+1110,((IData)((0U != (0x60U 
                                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))))));
        bufp->chgBit(oldp+1111,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw))));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
        bufp->chgCData(oldp+1114,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
        bufp->chgCData(oldp+1115,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
        bufp->chgIData(oldp+1116,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
        bufp->chgBit(oldp+1117,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6))));
        bufp->chgBit(oldp+1118,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                                 | (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6))));
        bufp->chgIData(oldp+1119,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
        bufp->chgIData(oldp+1120,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
        bufp->chgIData(oldp+1121,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
        bufp->chgCData(oldp+1122,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
        bufp->chgBit(oldp+1123,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
        bufp->chgIData(oldp+1124,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
        bufp->chgBit(oldp+1126,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
        bufp->chgBit(oldp+1129,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                                 | (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_9))));
        bufp->chgBit(oldp+1130,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
        bufp->chgIData(oldp+1132,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
        bufp->chgIData(oldp+1133,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext),32);
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
        bufp->chgBit(oldp+1135,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
        bufp->chgCData(oldp+1138,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
        bufp->chgIData(oldp+1139,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
        bufp->chgIData(oldp+1140,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
        bufp->chgCData(oldp+1141,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
    }
    bufp->chgBit(oldp+1142,(vlSelfRef.IO_CLK));
    bufp->chgBit(oldp+1143,(vlSelfRef.IO_RST_N));
    bufp->chgBit(oldp+1144,(vlSymsp->TOP__ibex_simple_system.__PVT__clk_sys));
    bufp->chgIData(oldp+1145,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->chgIData(oldp+1146,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->chgIData(oldp+1147,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                   [2U]) ? (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                            [2U] >> 0x18U)
                                   : (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                              >> 0x18U))) 
                                 << 0x18U) | (0xff0000U 
                                              & (((4U 
                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                   [2U])
                                                   ? 
                                                  (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                              >> 0x10U))) 
                                                 << 0x10U))) 
                               | ((0xff00U & (((2U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? (
                                                   vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 8U)
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                           >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & ((1U & 
                                               vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                               [2U])
                                               ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                              [2U] : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q)))))),32);
    bufp->chgIData(oldp+1148,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                   [2U]) ? (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                            [2U] >> 0x18U)
                                   : (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                              >> 0x38U))) 
                                 << 0x18U) | (0xff0000U 
                                              & (((4U 
                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                   [2U])
                                                   ? 
                                                  (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                              >> 0x30U))) 
                                                 << 0x10U))) 
                               | ((0xff00U & (((2U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? (
                                                   vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 8U)
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                           >> 0x28U))) 
                                              << 8U)) 
                                  | (0xffU & ((1U & 
                                               vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                               [2U])
                                               ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                              [2U] : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                              >> 0x20U))))))),32);
    bufp->chgIData(oldp+1149,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                   [2U]) ? (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                            [2U] >> 0x18U)
                                   : (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                              >> 0x18U))) 
                                 << 0x18U) | (0xff0000U 
                                              & (((4U 
                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                   [2U])
                                                   ? 
                                                  (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                              >> 0x10U))) 
                                                 << 0x10U))) 
                               | ((0xff00U & (((2U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? (
                                                   vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 8U)
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                           >> 8U))) 
                                              << 8U)) 
                                  | (0xffU & ((1U & 
                                               vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                               [2U])
                                               ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                              [2U] : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q)))))),32);
    bufp->chgIData(oldp+1150,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                   [2U]) ? (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                            [2U] >> 0x18U)
                                   : (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                              >> 0x38U))) 
                                 << 0x18U) | (0xff0000U 
                                              & (((4U 
                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                   [2U])
                                                   ? 
                                                  (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 0x10U)
                                                   : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                              >> 0x30U))) 
                                                 << 0x10U))) 
                               | ((0xff00U & (((2U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? (
                                                   vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                   [2U] 
                                                   >> 8U)
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x28U))) 
                                              << 8U)) 
                                  | (0xffU & ((1U & 
                                               vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                               [2U])
                                               ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                              [2U] : (IData)(
                                                             (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                              >> 0x20U))))))),32);
    bufp->chgBit(oldp+1151,(((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_we) 
                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmph_we))) 
                             & ((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                 >= vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q)))));
    bufp->chgBit(oldp+1152,((1U & (~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                      | (0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs))))));
    bufp->chgBit(oldp+1153,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk));
    bufp->chgBit(oldp+1154,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                   | (0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)))));
    bufp->chgBit(oldp+1155,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    bufp->chgBit(oldp+1156,((1U & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                   & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                      & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                         & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                                            & (~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))))));
    bufp->chgBit(oldp+1157,((1U & ((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering) 
                                       | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
    bufp->chgBit(oldp+1158,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))));
    bufp->chgBit(oldp+1159,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                              & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
    bufp->chgBit(oldp+1160,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) 
                              | (0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->chgBit(oldp+1161,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
    bufp->chgBit(oldp+1162,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))));
    bufp->chgCData(oldp+1163,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                ? 0U : (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),5);
    bufp->chgIData(oldp+1164,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                ? 0U : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex)),32);
    bufp->chgBit(oldp+1165,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                              | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err)) 
                             & (~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))));
    bufp->chgBit(oldp+1166,(((3U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x1eU)) & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
    bufp->chgCData(oldp+1167,((0x1fU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                         ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex
                                         : (- vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)))),6);
    bufp->chgBit(oldp+1168,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->chgBit(oldp+1169,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
    bufp->chgIData(oldp+1170,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                ? 0U : (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0xfU)))),32);
    bufp->chgBit(oldp+1171,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                             & ((~ ((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                    | (0x341U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)))) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->chgCData(oldp+1172,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                ? 1U : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                         ? 4U : 0U))),3);
    bufp->chgBit(oldp+1173,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                             | (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                 & ((~ ((0x340U == 
                                         (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)) 
                                        | (0x341U == 
                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U)))) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->chgBit(oldp+1174,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                              & ((~ ((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                     | (0x341U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->chgBit(oldp+1175,(((3U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & ((4U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                   | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 2U))))));
    bufp->chgBit(oldp+1176,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    bufp->chgIData(oldp+1177,(((4U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                ? ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? 0x100080U : (
                                                   (1U 
                                                    & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                                    ? 0x100080U
                                                    : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                : ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                        : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                    : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                   >> 1U))
                                        : 0x100080U)))),32);
    bufp->chgBit(oldp+1178,((1U & ((4U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                    ? ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? 0x100080U
                                        : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? 0x100080U
                                            : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                    : ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                        ? ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                            : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                        : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                            ? (IData)(
                                                      (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U))
                                            : 0x100080U))))));
    bufp->chgBit(oldp+1179,(((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
                             && (IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                          >> 1U) & 
                                         (2U == (3U 
                                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
    bufp->chgCData(oldp+1180,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                      : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)))),2);
    bufp->chgCData(oldp+1181,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid)
                                      ? VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                      : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)))),2);
    bufp->chgIData(oldp+1182,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                 ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                 : (0xfffffffcU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                               + ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6) 
                                  << 2U))),32);
    bufp->chgBit(oldp+1183,((1U & (~ (IData)((3U == 
                                              (3U & 
                                               (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                 >> 1U) 
                                                | ((2U 
                                                    & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                         >> 1U)))))))))));
    bufp->chgIData(oldp+1184,(((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                    << 0x10U) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U))
                                : ((vlSymsp->TOP__ibex_simple_system.__PVT__instr_rdata 
                                    << 0x10U) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                 >> 0x10U)))),32);
    bufp->chgBit(oldp+1185,((1U & ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                    ? (((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                        & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                           >> 1U)) 
                                       | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                    : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)))));
    bufp->chgBit(oldp+1186,((IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                      >> 1U) & (2U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
    bufp->chgBit(oldp+1187,((1U & (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                    >> 1U) | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->chgIData(oldp+1188,((0x7fffffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                              + ((2U 
                                                  & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                     << 1U)) 
                                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->chgIData(oldp+1189,((0x7fffffffU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                               ? (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                  >> 1U)
                                               : (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                  + 
                                                  ((2U 
                                                    & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->chgIData(oldp+1190,(((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                ? ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                        [0U] << 8U) 
                                       | (0xffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                                   >> 0x10U)))
                                    : ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                        [0U] << 0x10U) 
                                       | (0xffffU & 
                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                           >> 8U))))
                                : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                    ? ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                        [0U] << 0x18U) 
                                       | vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                    : vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                   [0U]))),32);
    bufp->chgBit(oldp+1191,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
    bufp->chgBit(oldp+1192,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                             & (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                 & vlSymsp->TOP__ibex_simple_system.__PVT__host_err
                                 [0U]) | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
}

void Vibex_simple_system___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_cleanup\n"); );
    // Init
    Vibex_simple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_simple_system___024root*>(voidSelf);
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
