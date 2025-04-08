// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vibex_simple_system__Syms.h"


VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_1p_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_2p_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_cipher_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_secded_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_tracer_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_mubi_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_simple_system__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ibex_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_ram_1p_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_1p_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_ram_2p_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_2p_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_cipher_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__prim_cipher_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_secded_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__prim_secded_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ibex_tracer_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_tracer_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("prim_mubi_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__prim_mubi_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("ibex_simple_system", VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_simple_system__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1143,0,"IO_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"IO_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_simple_system__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_simple_system__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1143,0,"IO_CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"IO_RST_N",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"SecureIbex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheScramble",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1200,0,"RegFile",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1201,0,"SRAMInitFile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1145,0,"clk_sys",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_sys_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1202,0,"NrDevices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1203,0,"NrHosts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+634,0,"timer_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("host_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+715+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_gnt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+716+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+717+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+718+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_be", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+719+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+720+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_rvalid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+711+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_err", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+712+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+1204,0,"data_rdata_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1204,0,"instr_rdata_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("device_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+721+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+724+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_we", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+727+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_be", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+730+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+733+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_rvalid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+588+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_err", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+591+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("cfg_device_addr_base", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cfg_device_addr_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+960,0,"instr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_gnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_bus", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1202,0,"NrDevices",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1203,0,"NrHosts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1206,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1206,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("host_req_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+715+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_gnt_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+716+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_addr_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+717+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_we_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+718+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_be_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+719+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_wdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+720+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_rvalid_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_rdata_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+711+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("host_err_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+712+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_req_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+721+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_addr_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+724+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_we_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+727+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_be_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+730+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_wdata_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+733+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_rvalid_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+588+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("device_err_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+591+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("cfg_device_addr_base", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cfg_device_addr_mask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1207,0,"NumBitsHostSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"NumBitsDeviceSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+736,0,"host_sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+737,0,"device_sel_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+155,0,"decode_err_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+738,0,"host_sel_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+156,0,"host_sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+739,0,"device_sel_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+157,0,"device_sel_resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1209,0,"host",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1210,0,"device",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1210,0,"device",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1211,0,"host",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1212,0,"Depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1201,0,"MemInitFile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"a_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"a_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+742,0,"a_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+743,0,"a_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+744,0,"a_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+158,0,"a_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+595,0,"a_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"b_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"b_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"b_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+961,0,"b_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"b_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+635,0,"b_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"b_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1215,0,"Aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+745,0,"a_addr_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+746,0,"unused_a_addr_parts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+962,0,"b_addr_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+963,0,"unused_b_addr_parts",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+747,0,"a_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"b_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("u_ram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1212,0,"Depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1216,0,"DataBitsPerMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1201,0,"MemInitFile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"Aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1145,0,"clk_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"clk_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"a_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"a_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"a_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+744,0,"a_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"a_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"a_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"b_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"b_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+962,0,"b_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1214,0,"b_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"b_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"b_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cfg_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_impl_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1146,0,"simutil_set_mem__Vstatic__valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1147,0,"simutil_get_mem__Vstatic__valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1212,0,"Depth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1216,0,"DataBitsPerMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1201,0,"MemInitFile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1215,0,"Aw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1145,0,"clk_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1145,0,"clk_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+740,0,"a_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+741,0,"a_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+745,0,"a_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+744,0,"a_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+747,0,"a_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+595,0,"a_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"b_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"b_write_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+962,0,"b_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBus(c+1214,0,"b_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"b_wmask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"b_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cfg_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"unused_cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1217,0,"MaskWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+748,0,"a_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+8,0,"b_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+596,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1218,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+9,0,"show_mem_paths",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1219,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_simulator_ctrl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1220,0,"FlushOnChar",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+749,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+750,0,"we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+751,0,"be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+752,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+753,0,"wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+159,0,"rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1201,0,"CHAR_OUT_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1221,0,"SIM_CTRL_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+754,0,"ctrl_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"sim_finish",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+10,0,"log_fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_timer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1222,0,"AddressWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+755,0,"timer_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+756,0,"timer_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+757,0,"timer_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+758,0,"timer_be_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+759,0,"timer_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"timer_rvalid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"timer_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+598,0,"timer_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"timer_intr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1223,0,"TW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1224,0,"ADDR_OFFSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1225,0,"MTIME_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 9,0);
    tracep->declBus(c+1226,0,"MTIME_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 9,0);
    tracep->declBus(c+1227,0,"MTIMECMP_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 9,0);
    tracep->declBus(c+1228,0,"MTIMECMP_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 9,0);
    tracep->declBit(c+760,0,"timer_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+761,0,"mtime_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+762,0,"mtimeh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+763,0,"mtimecmp_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+764,0,"mtimecmph_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1148,0,"mtime_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,0,"mtimeh_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1150,0,"mtimecmp_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1151,0,"mtimecmph_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+162,0,"mtime_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+964,0,"mtime_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+164,0,"mtime_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+166,0,"mtimecmp_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+966,0,"mtimecmp_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+634,0,"interrupt_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"interrupt_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+598,0,"error_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+765,0,"error_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+968,0,"rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+161,0,"rvalid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1200,0,"RegFile",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1207,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"SecureIbex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheScramble",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1229,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RndCnstLfsrPerm", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1241,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+1262,0,"DmBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1263,0,"DmAddrMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"scan_rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_cfg_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("ram_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1214,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1265,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"instr_rdata_intg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1205,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+770,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"data_wdata_intg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+713,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"data_rdata_intg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+714,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+1205,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"scramble_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1267,0,"scramble_key_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1271,0,"scramble_nonce_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1205,0,"scramble_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("crash_dump_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+601,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"last_data_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"exception_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"exception_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBit(c+969,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1205,0,"alert_minor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_internal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_bus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"rvfi_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+174,0,"rvfi_order",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+656,0,"rvfi_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"rvfi_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"rvfi_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"rvfi_intr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"rvfi_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"rvfi_ixl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"rvfi_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+658,0,"rvfi_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+659,0,"rvfi_rs3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+660,0,"rvfi_rs1_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"rvfi_rs2_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"rvfi_rs3_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+664,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+668,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"rvfi_ext_pre_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"rvfi_ext_post_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"rvfi_ext_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rvfi_ext_nmi_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"rvfi_ext_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"rvfi_ext_debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rvfi_ext_rf_wr_suppress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+188,0,"rvfi_ext_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("rvfi_ext_mhpmcounters", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+190+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_mhpmcountersh", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+210,0,"rvfi_ext_ic_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"rvfi_ext_irq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unused_perf_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+212+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unused_perf_regsh", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+222+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+182,0,"unused_rvfi_ext_pre_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"unused_rvfi_ext_post_mip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"unused_rvfi_ext_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"unused_rvfi_ext_nmi_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"unused_rvfi_ext_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"unused_rvfi_ext_debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_rvfi_ext_rf_wr_suppress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+188,0,"unused_rvfi_ext_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+210,0,"unused_rvfi_ext_ic_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"unused_rvfi_ext_irq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_ibex_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMPRstCfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstAddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1275+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstMsecCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1200,0,"RegFile",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1207,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"SecureIbex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheScramble",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1208,0,"ICacheScrNumPrinceRoundsHalf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1229,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RndCnstLfsrPerm", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1241,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+1262,0,"DmBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1263,0,"DmAddrMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declArray(c+1307,0,"RndCnstIbexKey",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1311,0,"RndCnstIbexNonce",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ram_cfg_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("ram_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+1214,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1265,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"instr_rdata_intg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1205,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+770,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"data_wdata_intg_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+713,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1204,0,"data_rdata_intg_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+714,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+1205,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"scramble_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1267,0,"scramble_key_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1271,0,"scramble_nonce_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1205,0,"scramble_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("crash_dump_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+601,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"last_data_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"exception_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"exception_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBit(c+969,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+174,0,"rvfi_order",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+656,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"rvfi_trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"rvfi_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"rvfi_intr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"rvfi_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"rvfi_ixl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"rvfi_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+658,0,"rvfi_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+659,0,"rvfi_rs3_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+660,0,"rvfi_rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"rvfi_rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"rvfi_rs3_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+664,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+668,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"rvfi_ext_pre_mip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"rvfi_ext_post_mip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"rvfi_ext_nmi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rvfi_ext_nmi_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"rvfi_ext_debug_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"rvfi_ext_debug_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rvfi_ext_rf_wr_suppress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+188,0,"rvfi_ext_mcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("rvfi_ext_mhpmcounters", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+190+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_mhpmcountersh", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+210,0,"rvfi_ext_ic_scr_key_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"rvfi_ext_irq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1205,0,"alert_minor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_internal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_bus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1153,0,"core_sleep_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"scan_rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1194,0,"Lockstep",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"RegFileECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"RegFileWrenCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"RegFileRdataMuxCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"RegFileDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1222,0,"BusSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1223,0,"LineSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1313,0,"TagSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"NumAddrScrRounds",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,0,"core_busy_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+169,0,"core_busy_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1155,0,"clock_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"irq_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"rf_raddr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+604,0,"rf_raddr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+605,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+970,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"rf_wdata_wb_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"rf_rdata_a_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"rf_rdata_a_ecc_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"rf_rdata_b_ecc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"rf_rdata_b_ecc_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"data_wdata_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"data_rdata_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata_core",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1314,0,"ic_tag_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_tag_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_tag_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"ic_tag_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ic_tag_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1314,0,"ic_data_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_data_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1271,0,"ic_data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ic_data_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+13+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"ic_scr_key_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"core_alert_major_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"core_alert_major_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"core_alert_minor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lockstep_alert_major_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lockstep_alert_major_bus",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lockstep_alert_minor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1267,0,"scramble_key_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1271,0,"scramble_nonce_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1264,0,"scramble_key_valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"scramble_key_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"scramble_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"scramble_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"fetch_enable_buf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1205,0,"rf_alert_major_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1314,0,"icache_tag_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1314,0,"icache_data_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"icache_alert_major_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core_clock_gate_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"NoFpgaGate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1220,0,"FpgaBufGlobal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1316,0,"Impl",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("gen_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_impl_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"NoFpgaGate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1220,0,"FpgaBufGlobal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1155,0,"en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1154,0,"clk_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1156,0,"en_latch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_clock_en_non_secure", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+170,0,"unused_core_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_lockstep", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1264,0,"unused_scan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_non_mem_rdata_ecc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1205,0,"unused_intg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_norams", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unused_ram_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("ram_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"unused_ram_inputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_noscramble", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1205,0,"unused_scramble_inputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_regfile_ff", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_file_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"DataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WrenCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"RdataMuxCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1214,0,"WordZeroVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"test_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"raddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"rdata_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"raddr_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,0,"rdata_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"waddr_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+971,0,"wdata_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+970,0,"we_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1317,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1222,0,"NUM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rf_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+232+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+972,0,"we_a_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"oh_raddr_a_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"oh_raddr_b_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"oh_we_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_test_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_normal_r0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1205,0,"unused_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+264,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+265,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+266,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+267,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+268,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+269,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+270,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+271,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+272,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+273,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+274,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+275,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+276,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+277,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+278,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+279,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+280,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+281,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+282,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[29]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[30]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[31]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+290,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+291,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+292,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+293,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_rf_flops[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+294,0,"rf_reg_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_wren_check", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+973,0,"unused_strobe",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("we_a_decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_fetch_enable_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1273,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1316,0,"Impl",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("gen_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_impl_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1273,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ibex_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMPRstCfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstAddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1319+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstMsecCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+1195,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"BusSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1313,0,"TagSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1223,0,"LineSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1207,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1229,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RndCnstLfsrPerm", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1241,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+1194,0,"SecureIbex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"RegFileECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"RegFileDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmBaseAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1263,0,"DmAddrMask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1265,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+770,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+771,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+714,0,"data_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+604,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+605,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+970,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+971,0,"rf_wdata_wb_ecc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"rf_rdata_a_ecc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"rf_rdata_b_ecc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1314,0,"ic_tag_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_tag_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_tag_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"ic_tag_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ic_tag_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1314,0,"ic_data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_data_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1271,0,"ic_data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ic_data_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+13+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1264,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"ic_scr_key_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+1205,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"irq_pending_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("crash_dump_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+601,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"last_data_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"exception_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"exception_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBit(c+969,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+655,0,"rvfi_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+174,0,"rvfi_order",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+656,0,"rvfi_insn",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"rvfi_trap",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"rvfi_halt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"rvfi_intr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"rvfi_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"rvfi_ixl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"rvfi_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+658,0,"rvfi_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+659,0,"rvfi_rs3_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+660,0,"rvfi_rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"rvfi_rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"rvfi_rs3_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+664,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+668,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"rvfi_ext_pre_mip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"rvfi_ext_post_mip",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+184,0,"rvfi_ext_nmi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+185,0,"rvfi_ext_nmi_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+186,0,"rvfi_ext_debug_req",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"rvfi_ext_debug_mode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rvfi_ext_rf_wr_suppress",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+188,0,"rvfi_ext_mcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("rvfi_ext_mhpmcounters", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+190+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_mhpmcountersh", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 10; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+210,0,"rvfi_ext_ic_scr_key_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"rvfi_ext_irq_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1273,0,"fetch_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+1205,0,"alert_minor_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_internal_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alert_major_bus_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+581,0,"core_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1263,0,"PMPNumChan",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"PCIncrCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ShadowCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"instr_valid_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"instr_new_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr_rdata_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"instr_rdata_alu_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"instr_rdata_c_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+609,0,"instr_is_compressed_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"instr_perf_count_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_bp_taken_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"instr_fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"instr_fetch_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"illegal_c_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"pc_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"pc_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("imd_val_d_ex", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+772+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_ex", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+296+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+776,0,"imd_val_we_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+300,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"dummy_instr_seed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"dummy_instr_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1158,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"icache_inval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"icache_ecc_error",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"pc_mismatch_alert",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_shadow_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"instr_first_cycle_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"instr_valid_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"pc_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"nt_branch_mispredict",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"nt_branch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+778,0,"pc_mux_id",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+673,0,"exc_pc_mux_id",7, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("exc_cause", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+976,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+978,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"instr_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"lsu_load_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"lsu_load_err_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"lsu_store_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"lsu_store_err_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lsu_load_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lsu_store_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"expecting_load_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"expecting_store_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"lsu_addr_incr_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"lsu_addr_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"branch_target_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+780,0,"branch_decision",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+981,0,"ctrl_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"if_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"rf_raddr_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"rf_rdata_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"rf_raddr_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,0,"rf_rdata_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+781,0,"rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+971,0,"rf_wdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"rf_wdata_fwd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"rf_wdata_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+970,0,"rf_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"rf_we_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_ecc_err_comb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"rf_waddr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"rf_wdata_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+783,0,"rf_we_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_rd_a_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_rd_b_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"alu_operator_ex",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+785,0,"alu_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"alu_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bt_a_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bt_b_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"alu_adder_result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"result_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+788,0,"mult_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"div_en_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"mult_sel_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"div_sel_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"multdiv_operator_ex",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"multdiv_signed_mode_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+794,0,"multdiv_operand_a_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"multdiv_operand_b_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1264,0,"multdiv_ready_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"csr_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"csr_op",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+985,0,"csr_op_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"csr_addr",11, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+642,0,"csr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+785,0,"csr_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+798,0,"illegal_csr_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"lsu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+800,0,"lsu_sign_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"lsu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+983,0,"lsu_rdata_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+802,0,"lsu_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1161,0,"lsu_req_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"id_in_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"ex_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"lsu_resp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"lsu_resp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"instr_req_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"instr_req_gated",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"instr_exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"en_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1351,0,"instr_type_wb",12, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1264,0,"ready_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_write_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_load_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_store_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"nmi_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("irqs", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+644,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+306,0,"csr_mstatus_mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"csr_mepc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"csr_depc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("csr_pmp_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_cfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+25,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+30,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+35,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+40,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_mseccfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pmp_req_err", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+766,0,"data_req_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"csr_save_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"csr_save_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_save_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"csr_restore_mret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"csr_restore_dret_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"csr_save_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+991,0,"csr_mtvec_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+807,0,"csr_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+309,0,"csr_mstatus_tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+310,0,"priv_mode_id",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+311,0,"priv_mode_lsu",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+312,0,"debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"debug_mode_entering",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"debug_cause",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+676,0,"debug_csr_save",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"debug_single_step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"debug_ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"debug_ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"trigger_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"instr_id_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_done_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"perf_instr_ret_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"perf_instr_ret_compressed_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"perf_instr_ret_wb_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"perf_instr_ret_compressed_wb_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"perf_iside_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"perf_dside_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"perf_mul_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"perf_div_wait",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"perf_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"perf_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"perf_tbranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"perf_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"perf_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"illegal_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"unused_illegal_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"crash_dump_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1203,0,"RVFI_STAGES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rvfi_stage_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+677+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_order", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+317+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_insn", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+678+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_trap", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+319+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_halt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+320+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_intr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+321+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+322+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_ixl", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+323+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs1_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+679+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs2_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+680+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs3_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+681+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs1_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+682+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs2_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+683+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rs3_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+684+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rd_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+685+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_rd_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+686+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_pc_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+687+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_pc_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+324+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mem_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+688+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mem_rmask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+689+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mem_wmask", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+690+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mem_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+691+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_mem_wdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+692+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+295,0,"rvfi_instr_new_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+693,0,"rvfi_intr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"rvfi_intr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+993,0,"rvfi_set_trap_pc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"rvfi_set_trap_pc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+614,0,"rvfi_insn_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+814,0,"rvfi_rs1_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+327,0,"rvfi_rs1_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+815,0,"rvfi_rs2_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+328,0,"rvfi_rs2_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1164,0,"rvfi_rs3_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+816,0,"rvfi_rs1_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+329,0,"rvfi_rs1_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+817,0,"rvfi_rs2_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+330,0,"rvfi_rs2_data_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1165,0,"rvfi_rs3_data_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"rvfi_rd_addr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+331,0,"rvfi_rd_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+994,0,"rvfi_rd_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+995,0,"rvfi_rd_wdata_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+996,0,"rvfi_rd_wdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+332,0,"rvfi_rd_wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+997,0,"rvfi_rd_we_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+818,0,"rvfi_mem_mask_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+998,0,"rvfi_mem_rdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+333,0,"rvfi_mem_rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+819,0,"rvfi_mem_wdata_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+334,0,"rvfi_mem_wdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"rvfi_mem_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+335,0,"rvfi_mem_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1166,0,"rvfi_trap_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rvfi_trap_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"rvfi_irq_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+337,0,"rvfi_stage_order_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+999,0,"rvfi_id_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rvfi_wb_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"new_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"new_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"new_nmi_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+648,0,"new_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("captured_mip", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+339,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+340,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+341,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+343,0,"captured_nmi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+344,0,"captured_nmi_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+345,0,"captured_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+346,0,"captured_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rvfi_ext_stage_pre_mip", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+347,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+348,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+349,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+350,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+351,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+352,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+354,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_post_mip", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+355,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+356,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+357,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+358,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_nmi", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+359+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_nmi_int", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+361+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_debug_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+363+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_debug_mode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+365+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_mcycle", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declQuad(c+366+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_mhpmcounters", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+368,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+369,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+370,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+371,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+372,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+373,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_mhpmcountersh", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+378,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+380,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+381,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+382,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+383,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+384,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+385,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+386,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+387,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_ic_scr_key_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+388+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_ext_stage_irq_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+389+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rvfi_stage_valid_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1000+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"fcov_rf_ecc_err_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_rf_ecc_err_a_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"fcov_rf_ecc_err_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_rf_ecc_err_b_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"fcov_csr_read_only",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"unused_fcov_csr_read_only",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"fcov_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"unused_fcov_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cs_registers_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"DbgTriggerEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1207,0,"DbgHwBreakNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ShadowCSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"MHPMCounterNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1197,0,"MHPMCounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"PMPEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1195,0,"PMPGranularity",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"PMPNumRegions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("PMPRstCfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstAddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1352+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PMPRstMsecCfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"priv_mode_id_o",13, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+311,0,"priv_mode_lsu_o",13, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+309,0,"csr_mstatus_tw_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"csr_mtvec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+991,0,"csr_mtvec_init_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1265,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+796,0,"csr_access_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+613,0,"csr_addr_i",11, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+785,0,"csr_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+797,0,"csr_op_i",10, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+985,0,"csr_op_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+642,0,"csr_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"irq_software_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+634,0,"irq_timer_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_external_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1266,0,"irq_fast_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBit(c+305,0,"nmi_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"irq_pending_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("irqs_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+644,0,"irq_software",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"irq_timer",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"irq_external",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"irq_fast",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+306,0,"csr_mstatus_mie_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"csr_mepc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("csr_pmp_cfg_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+25,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"mode",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+27,0,"exec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+30,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"mode",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+32,0,"exec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+35,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"mode",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+37,0,"exec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+40,0,"lock",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+41,0,"mode",4, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+42,0,"exec",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"write",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"read",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_addr_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+17+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("csr_pmp_mseccfg_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+312,0,"debug_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"debug_mode_entering_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"debug_cause_i",14, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+676,0,"debug_csr_save_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"csr_depc_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+314,0,"debug_single_step_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"debug_ebreakm_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"debug_ebreaku_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"trigger_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"pc_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"pc_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+300,0,"data_ind_timing_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"dummy_instr_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"dummy_instr_mask_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"dummy_instr_seed_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"dummy_instr_seed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1158,0,"icache_enable_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_shadow_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"csr_save_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"csr_save_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_save_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"csr_restore_mret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"csr_restore_dret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"csr_save_cause_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("csr_mcause_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+976,0,"irq_int",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"irq_ext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+978,0,"lower_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+807,0,"csr_mtval_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+798,0,"illegal_csr_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+969,0,"double_fault_seen_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+992,0,"instr_ret_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"instr_ret_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_ret_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_ret_compressed_spec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+703,0,"iside_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"jump_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"mem_load_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"mem_store_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"dside_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"mul_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"div_wait_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1195,0,"RV32BExtra",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1207,0,"RV32MEnabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1222,0,"PMPAddrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1384,0,"MISA_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1001,0,"exception_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"priv_lvl_q",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1002,0,"priv_lvl_d",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("mstatus_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+306,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+393,0,"mprv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mstatus_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1003,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1004,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1005,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1006,0,"mprv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1007,0,"tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"mstatus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1008,0,"mstatus_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mie_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+394,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+395,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+396,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+397,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("mie_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1009,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1010,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1011,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1012,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+1013,0,"mie_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"mscratch_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1014,0,"mscratch_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"mepc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1015,0,"mepc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1016,0,"mepc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mcause_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+399,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mcause_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1017,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1019,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+1020,0,"mcause_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"mtval_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1021,0,"mtval_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1022,0,"mtval_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"mtvec_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1023,0,"mtvec_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"mtvec_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1024,0,"mtvec_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mip", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+636,0,"irq_software",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+638,0,"irq_external",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+639,0,"irq_fast",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->pushPrefix("dcsr_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+402,0,"xdebugver",15, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+403,0,"zero2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+315,0,"ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+404,0,"zero1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+405,0,"ebreaks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+406,0,"stepie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+407,0,"stopcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+408,0,"stoptime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+409,0,"cause",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+410,0,"zero0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+411,0,"mprven",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"nmip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+413,0,"prv",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("dcsr_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1025,0,"xdebugver",15, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1026,0,"zero2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1027,0,"ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1028,0,"zero1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1029,0,"ebreaks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1030,0,"ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1031,0,"stepie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1032,0,"stopcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"stoptime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1034,0,"cause",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1035,0,"zero0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1036,0,"mprven",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1037,0,"nmip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1039,0,"prv",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+1040,0,"dcsr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"depc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1041,0,"depc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1042,0,"depc_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"dscratch0_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"dscratch1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1043,0,"dscratch0_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1044,0,"dscratch1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mstack_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+416,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("mstack_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+391,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+418,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+1045,0,"mstack_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"mstack_epc_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"mstack_epc_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mstack_cause_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+420,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+421,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+422,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("mstack_cause_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+399,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+400,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+401,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("pmp_addr_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pmp_cfg_rdata", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+64+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"pmp_csr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pmp_mseccfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBus(c+423,0,"mcountinhibit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+583,0,"mcountinhibit_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+424,0,"mcountinhibit_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1046,0,"mcountinhibit_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("mhpmcounter", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+425+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1047,0,"mhpmcounter_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1048,0,"mhpmcounterh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1049,0,"mhpmcounter_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mhpmevent", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+604,0,"mhpmcounter_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1050,0,"unused_mhpmcounter_we_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"unused_mhpmcounterh_we_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1052,0,"unused_mhpmcounter_incr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+489,0,"minstret_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+491,0,"minstret_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1214,0,"tselect_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"tmatch_control_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"tmatch_value_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("cpuctrlsts_part_q", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+493,0,"double_fault_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+494,0,"sync_exc_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+301,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpuctrlsts_part_d", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1053,0,"double_fault_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1054,0,"sync_exc_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1055,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1056,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1057,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1058,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpuctrlsts_part_wdata_raw", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1010,0,"double_fault_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1059,0,"sync_exc_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1060,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1061,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1062,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1063,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("cpuctrlsts_part_wdata", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1010,0,"double_fault_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1059,0,"sync_exc_seen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1385,0,"dummy_instr_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"dummy_instr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"data_ind_timing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"icache_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->declBit(c+1064,0,"cpuctrlsts_part_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"cpuctrlsts_part_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"cpuctrlsts_ic_scr_key_valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"cpuctrlsts_ic_scr_key_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"csr_wdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"csr_rdata_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1066,0,"csr_we_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+821,0,"csr_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+615,0,"dbg_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"illegal_csr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+564,0,"illegal_csr_priv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+565,0,"illegal_csr_dbg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1167,0,"illegal_csr_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"unused_boot_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+617,0,"unused_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+613,0,"csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->pushPrefix("MSTATUS_RST_VAL", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"mie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1386,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"mprv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"tw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("DCSR_RESET_VAL", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBus(c+1387,0,"xdebugver",15, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1388,0,"zero2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+1205,0,"ebreakm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"zero1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"ebreaks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"ebreaku",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stepie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stopcount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stoptime",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1389,0,"cause",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"zero0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mprven",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"nmip",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"step",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1390,0,"prv",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("MSTACK_RESET_VAL", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1264,0,"mpie",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1386,0,"mpp",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("g_mcountinhibit_reduced", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1067,0,"unused_mhphcounter_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1068,0,"unused_mhphcounterh_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->declBus(c+1069,0,"unused_mhphcounter_incr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 28,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1202,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1391,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1392,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1393,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1394,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1395,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1215,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[16]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1396,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[17]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1397,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[18]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1398,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[19]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1399,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[20]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1400,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[21]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1401,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[22]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1402,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[23]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1403,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[24]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1404,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[25]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1405,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[26]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1406,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[27]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1407,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[28]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1408,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1409,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1410,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1411,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1216,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1412,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1413,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("gen_unimp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("gen_no_compressed_instr_cnt", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1205,0,"unused_instr_ret_compressed_spec_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1414,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_cntrs[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1415,0,"Cnt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mhpmcounter_incr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mhpmevent", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1416,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dit", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1062,0,"unused_dit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dummy", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1061,0,"unused_dummy_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1060,0,"unused_dummy_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_icache", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1063,0,"unused_icen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"unused_ic_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("mcycle_counter_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1417,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ProvideValUpd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+584,0,"counter_inc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1070,0,"counterh_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1071,0,"counter_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"counter_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+496,0,"counter_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1271,0,"counter_val_upd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+496,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+498,0,"counter_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1072,0,"counter_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1074,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1075,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1418,0,"UseDsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+496,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("minstret_counter_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1417,0,"CounterWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1220,0,"ProvideValUpd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+585,0,"counter_inc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1077,0,"counterh_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1078,0,"counter_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"counter_val_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+491,0,"counter_val_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"counter_val_upd_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+491,0,"counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+489,0,"counter_upd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1079,0,"counter_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+1081,0,"we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1082,0,"counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1418,0,"UseDsp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declQuad(c+491,0,"counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_cpuctrlsts_part_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1419,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1420,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 7,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1084,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1064,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+500,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dcsr_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1421,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1085,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1040,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+501,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_depc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1041,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1042,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+307,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dscratch0_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1043,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+414,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_dscratch1_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1044,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+415,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mcause_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1423,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1424,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 6,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1086,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1020,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mepc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1015,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1016,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mie_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1425,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1426,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 17,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1087,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+1013,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+503,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mscratch_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1065,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1014,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+398,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_cause_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1423,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1424,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 6,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+502,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1045,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+504,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1263,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1427,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 2,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+505,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1045,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+506,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstack_epc_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1045,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+419,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mstatus_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1428,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1429,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 5,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1088,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1008,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+507,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mtval_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1422,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1021,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1022,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+173,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_mtvec_csr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ShadowCopy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1430,0,"ResetValue",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1023,0,"wr_data_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1024,0,"wr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"rd_data_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rd_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+308,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ex_block_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"alu_operator_i",8, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+785,0,"alu_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"alu_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+672,0,"alu_instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"bt_a_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bt_b_operand_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+792,0,"multdiv_operator_i",9, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+788,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+793,0,"multdiv_signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+794,0,"multdiv_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"multdiv_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1264,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+776,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+772+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+296+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+779,0,"alu_adder_result_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+787,0,"result_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+779,0,"branch_target_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+780,0,"branch_decision_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+803,0,"ex_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+822,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+568,0,"multdiv_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+823,0,"multdiv_alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+508,0,"multdiv_alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+825,0,"alu_adder_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+780,0,"alu_cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"alu_is_equal_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+569,0,"multdiv_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+828,0,"multdiv_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_imd_val_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+112+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1314,0,"alu_imd_val_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("multdiv_imd_val_d", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+829+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+833,0,"multdiv_imd_val_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("alu_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+784,0,"operator_i",8, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+785,0,"operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+672,0,"instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+508,0,"multdiv_operand_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+823,0,"multdiv_operand_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+828,0,"multdiv_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+112+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1314,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+779,0,"adder_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+825,0,"adder_result_ext_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+822,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+780,0,"comparison_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+827,0,"is_equal_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+834,0,"operand_a_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+835,0,"operand_b_neg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+837,0,"adder_op_a_shift1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+838,0,"adder_op_a_shift2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+839,0,"adder_op_a_shift3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+840,0,"adder_op_b_negate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+570,0,"adder_in_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+841,0,"adder_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+779,0,"adder_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+827,0,"is_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+843,0,"is_greater_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+844,0,"cmp_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"cmp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+845,0,"shift_left",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"shift_ones",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"shift_arith",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"shift_funnel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"shift_sbmode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1168,0,"shift_amt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+847,0,"shift_amt_compl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+848,0,"shift_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+849,0,"shift_result_ext_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+851,0,"shift_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+853,0,"unused_shift_result_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+854,0,"shift_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+855,0,"shift_result_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"bfp_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+856,0,"bfp_len",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+857,0,"bfp_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1214,0,"bfp_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bfp_mask_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bfp_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+858,0,"bwlogic_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+859,0,"bwlogic_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"bwlogic_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+860,0,"bwlogic_or_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+861,0,"bwlogic_and_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+862,0,"bwlogic_xor_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+863,0,"bwlogic_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"bwlogic_op_b_negate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1431,0,"bitcnt_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1214,0,"minmax_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"pack_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"sext_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"singlebit_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"rev_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"shuffle_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"xperm_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"butterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"invbutterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"clmul_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"multicycle_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+864,0,"unused_shift_amt_compl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_no_alu_rvb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unused_imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+512+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1214,0,"unused_butterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"unused_invbutterfly_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_no_branch_target_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1214,0,"unused_bt_a_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"unused_bt_b_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_multdiv_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("multdiv_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+788,0,"mult_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"div_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"mult_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"div_sel_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"operator_i",9, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"signed_mode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+794,0,"op_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"op_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+825,0,"alu_adder_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+779,0,"alu_adder_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+827,0,"equal_to_zero_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+508,0,"alu_operand_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+823,0,"alu_operand_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("imd_val_q_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+296+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_d_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+829+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+833,0,"imd_val_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1264,0,"multdiv_ready_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+568,0,"multdiv_result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+569,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+865,0,"mac_res_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+865,0,"mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 34,0);
    tracep->declQuad(c+867,0,"accum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+869,0,"sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+870,0,"sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+871,0,"mult_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+872,0,"signed_mult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+873,0,"mac_res_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+875,0,"op_remainder_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+877,0,"mac_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBit(c+879,0,"div_sign_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"div_sign_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+881,0,"is_greater_equal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+572,0,"div_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+879,0,"rem_change_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+514,0,"one_shift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+515,0,"op_denominator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+516,0,"op_numerator_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+517,0,"op_quotient_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+882,0,"op_denominator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+883,0,"op_numerator_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+884,0,"op_quotient_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+885,0,"next_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+886,0,"next_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+779,0,"res_adder_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+518,0,"div_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+519,0,"div_counter_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+888,0,"div_counter_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+889,0,"multdiv_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+890,0,"mult_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"div_hold",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+891,0,"div_by_zero_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"div_by_zero_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+892,0,"mult_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+893,0,"div_en_internal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+523,0,"md_state_q",16, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+894,0,"md_state_d",16, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+790,0,"unused_mult_sel_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+524,0,"unused_imd_val",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+895,0,"unused_mac_res_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+896,0,"unused_alu_adder_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+522,0,"unused_sva_mul_fsm_idle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("gen_mult_fast", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+897,0,"mult_op_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+898,0,"mult_op_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+525,0,"mult_state_q",17, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+899,0,"mult_state_d",17, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_instr_req_gated_non_secure", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1264,0,"unused_fetch_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_no_check_mem_response", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1159,0,"unused_expecting_load_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"unused_expecting_store_resp_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_no_pmp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"unused_priv_lvl_ls",13, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unused_csr_pmp_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declQuad(c+114+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unused_csr_pmp_cfg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+122,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+123,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+124,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+127,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+128,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+129,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+130,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+132,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+133,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+134,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+137,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+139,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+140,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+141,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unused_csr_pmp_mseccfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_rvfi_stages[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_regfile_ecc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+781,0,"unused_rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"unused_rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_rf_rd_a_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_rf_rd_b_wb_match",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("id_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"DataIndTiming",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+981,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"instr_rdata_alu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"instr_rdata_c_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+609,0,"instr_is_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_bp_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"instr_first_cycle_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"instr_valid_clear_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"id_in_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"icache_inval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+780,0,"branch_decision_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+778,0,"pc_mux_o",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"nt_branch_mispredict_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"nt_branch_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"exc_pc_mux_o",7, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("exc_cause_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+976,0,"irq_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"irq_ext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+978,0,"lower_cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+612,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"instr_fetch_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"instr_fetch_err_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+601,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+803,0,"ex_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"lsu_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"alu_operator_ex_o",8, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+785,0,"alu_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"alu_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+776,0,"imd_val_we_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("imd_val_d_ex_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+772+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imd_val_q_ex_o", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+296+i*2,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1214,0,"bt_a_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"bt_b_operand_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+788,0,"mult_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"div_en_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"mult_sel_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"div_sel_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"multdiv_operator_ex_o",9, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"multdiv_signed_mode_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+794,0,"multdiv_operand_a_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+795,0,"multdiv_operand_b_ex_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1264,0,"multdiv_ready_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+796,0,"csr_access_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"csr_op_o",10, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+613,0,"csr_addr_o",11, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+985,0,"csr_op_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_save_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"priv_mode_i",13, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+309,0,"csr_mstatus_tw_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+798,0,"illegal_csr_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+300,0,"data_ind_timing_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"lsu_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"lsu_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"lsu_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+800,0,"lsu_sign_ext_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+802,0,"lsu_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1161,0,"lsu_req_done_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+303,0,"lsu_addr_incr_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"lsu_addr_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+306,0,"csr_mstatus_mie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"irq_pending_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("irqs_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+644,0,"irq_software",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"irq_timer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"irq_external",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"irq_fast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"irq_nm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"nmi_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"lsu_load_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lsu_load_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"lsu_store_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"lsu_store_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1159,0,"expecting_load_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1160,0,"expecting_store_resp_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"debug_mode_entering_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"debug_cause_o",14, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+676,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+787,0,"result_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+642,0,"csr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+562,0,"rf_rdata_a_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+563,0,"rf_rdata_b_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+781,0,"rf_ren_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"rf_ren_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"rf_waddr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"rf_wdata_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+783,0,"rf_we_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_rd_a_wb_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_rd_b_wb_match_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"rf_waddr_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1214,0,"rf_wdata_fwd_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"rf_write_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"en_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1351,0,"instr_type_wb_o",12, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1157,0,"instr_perf_count_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ready_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_load_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_store_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"perf_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+809,0,"perf_branch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"perf_tbranch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1163,0,"perf_dside_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+955,0,"perf_mul_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"perf_div_wait_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"instr_id_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"illegal_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+573,0,"illegal_dret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+574,0,"illegal_umode_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ebrk_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"mret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"dret_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ecall_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"wfi_insn_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"wb_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"id_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"branch_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"branch_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+528,0,"branch_set_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+908,0,"branch_set_raw_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+529,0,"branch_jump_set_done_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1169,0,"branch_jump_set_done_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"branch_not_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"jump_in_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"jump_set_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"jump_set",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+912,0,"jump_set_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"instr_first_cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"instr_executing_spec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+913,0,"instr_executing",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"instr_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"controller_run",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stall_ld_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1170,0,"stall_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1089,0,"stall_multdiv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1090,0,"stall_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1091,0,"stall_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"stall_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stall_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"flush_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1093,0,"multicycle_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mem_resp_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+618,0,"imm_i_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"imm_s_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"imm_b_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"imm_u_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"imm_j_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"zimm_rs1_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1171,0,"imm_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"imm_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+916,0,"rf_wdata_sel",18, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"rf_we_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+918,0,"rf_we_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+781,0,"rf_ren_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+782,0,"rf_ren_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+919,0,"rf_ren_a_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"rf_ren_b_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+562,0,"rf_rdata_a_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"rf_rdata_b_fwd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+784,0,"alu_operator",8, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+921,0,"alu_op_a_mux_sel",19, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+922,0,"alu_op_a_mux_sel_dec",19, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+575,0,"alu_op_b_mux_sel",20, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+923,0,"alu_op_b_mux_sel_dec",20, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alu_multicycle_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+142,0,"stall_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("imd_val_q", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+530+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1432,0,"bt_a_mux_sel",19, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1433,0,"bt_b_mux_sel",21, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+924,0,"imm_a_mux_sel",22, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+925,0,"imm_b_mux_sel",21, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+926,0,"imm_b_mux_sel_dec",21, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+788,0,"mult_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"mult_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+789,0,"div_en_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"div_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+929,0,"multdiv_en_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"multdiv_operator",9, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"multdiv_signed_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+768,0,"lsu_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"lsu_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+800,0,"lsu_sign_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"lsu_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+930,0,"lsu_req_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"data_req_allowed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+624,0,"no_flush_csr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"csr_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+785,0,"alu_operand_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+786,0,"alu_operand_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+534,0,"id_fsm_q",23, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1094,0,"id_fsm_d",23, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"fcov_rf_rd_wb_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_rf_rd_wb_hz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"fcov_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+576,0,"unused_fcov_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"fcov_branch_not_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+577,0,"unused_fcov_branch_not_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("controller_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+981,0,"ctrl_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+813,0,"illegal_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ecall_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"mret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"dret_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"wfi_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ebrk_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1172,0,"csr_pipe_flush_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"instr_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"instr_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+609,0,"instr_is_compressed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_bp_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"instr_fetch_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"instr_fetch_err_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+601,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+974,0,"instr_valid_clear_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"id_in_ready_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+694,0,"controller_run_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"instr_exec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"pc_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+778,0,"pc_mux_o",6, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"nt_branch_mispredict_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+673,0,"exc_pc_mux_o",7, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("exc_cause_o", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+976,0,"irq_int",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"irq_ext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+978,0,"lower_cause",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+171,0,"lsu_addr_last_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+979,0,"load_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"store_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mem_resp_intg_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"wb_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"id_exception_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"branch_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"branch_not_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+911,0,"jump_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"csr_mstatus_mie_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"irq_pending_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("irqs_i", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+644,0,"irq_software",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+645,0,"irq_timer",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+646,0,"irq_external",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+647,0,"irq_fast",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->popPrefix();
    tracep->declBit(c+1205,0,"irq_nm_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"nmi_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"debug_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"debug_cause_o",14, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+676,0,"debug_csr_save_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"debug_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+675,0,"debug_mode_entering_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"debug_single_step_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"debug_ebreakm_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"debug_ebreaku_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"trigger_match_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+989,0,"csr_save_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+804,0,"csr_save_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"csr_save_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+805,0,"csr_restore_mret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+806,0,"csr_restore_dret_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+990,0,"csr_save_cause_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+807,0,"csr_mtval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"priv_mode_i",13, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1092,0,"stall_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stall_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"flush_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ready_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+808,0,"perf_jump_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+810,0,"perf_tbranch_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+695,0,"ctrl_fsm_cs",24, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1095,0,"ctrl_fsm_ns",24, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+305,0,"nmi_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+931,0,"nmi_mode_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"debug_mode_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+932,0,"debug_mode_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1173,0,"debug_cause_d",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+313,0,"debug_cause_q",14, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+535,0,"load_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"load_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"store_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"store_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+537,0,"exc_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+906,0,"exc_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+538,0,"illegal_insn_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+933,0,"illegal_insn_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+934,0,"instr_fetch_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+935,0,"illegal_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+936,0,"ecall_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+937,0,"ebrk_insn_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+938,0,"store_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+939,0,"load_err_prio",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1092,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1096,0,"halt_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1097,0,"retain_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"flush_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"exc_req_lsu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1098,0,"special_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+959,0,"special_req_pc_change",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1174,0,"special_req_flush_only",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+696,0,"do_single_step_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"do_single_step_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"enter_debug_mode_prio_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"enter_debug_mode_prio_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+697,0,"enter_debug_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"ebreak_into_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+542,0,"irq_enabled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"handle_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"id_wb_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_nm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_nm_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"irq_nm_int_mtval",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1434,0,"irq_nm_int_cause",25, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+650,0,"mfip_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+645,0,"unused_irq_timer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+940,0,"ecall_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+941,0,"mret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+942,0,"dret_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+943,0,"wfi_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+944,0,"ebrk_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1175,0,"csr_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+945,0,"instr_fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"fcov_all_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+543,0,"unused_fcov_all_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"fcov_debug_wakeup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1176,0,"unused_fcov_debug_wakeup",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"fcov_interrupt_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+704,0,"unused_fcov_interrupt_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"fcov_debug_entry_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+705,0,"unused_fcov_debug_entry_if",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"fcov_debug_entry_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+706,0,"unused_fcov_debug_entry_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"fcov_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+707,0,"unused_fcov_pipe_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"fcov_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_debug_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"fcov_debug_single_step_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1177,0,"unused_fcov_debug_single_step_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1099,0,"rvfi_flush_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_no_intg_irq_int", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1205,0,"unused_mem_resp_intg_err_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_mfip_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1435,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"RV32E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1198,0,"RV32M",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+1199,0,"RV32B",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+1194,0,"BranchTargetALU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"illegal_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+901,0,"ebrk_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+902,0,"mret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+903,0,"dret_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+904,0,"ecall_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+905,0,"wfi_insn_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+910,0,"jump_set_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"branch_taken_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"icache_inval_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+672,0,"instr_first_cycle_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"instr_rdata_alu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+612,0,"illegal_c_insn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+924,0,"imm_a_mux_sel_o",22, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+926,0,"imm_b_mux_sel_o",21, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1432,0,"bt_a_mux_sel_o",19, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1433,0,"bt_b_mux_sel_o",21, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+618,0,"imm_i_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+619,0,"imm_s_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+620,0,"imm_b_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+621,0,"imm_u_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+622,0,"imm_j_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+623,0,"zimm_rs1_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+916,0,"rf_wdata_sel_o",18, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"rf_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+603,0,"rf_raddr_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+604,0,"rf_raddr_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+605,0,"rf_waddr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+919,0,"rf_ren_a_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"rf_ren_b_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+784,0,"alu_operator_o",8, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+922,0,"alu_op_a_mux_sel_o",19, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+923,0,"alu_op_b_mux_sel_o",20, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"alu_multicycle_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+927,0,"mult_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+928,0,"div_en_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+790,0,"mult_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+791,0,"div_sel_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"multdiv_operator_o",9, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"multdiv_signed_mode_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+796,0,"csr_access_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+797,0,"csr_op_o",10, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+613,0,"csr_addr_o",11, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBit(c+930,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+768,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"data_type_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+800,0,"data_sign_extension_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+909,0,"jump_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+907,0,"branch_in_dec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"illegal_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"illegal_reg_rv32e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+946,0,"csr_illegal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+917,0,"rf_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"instr_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+625,0,"unused_instr_alu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+603,0,"instr_rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+604,0,"instr_rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+626,0,"instr_rs3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+605,0,"instr_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1205,0,"use_rs3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"use_rs3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+947,0,"csr_op",10, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+948,0,"opcode",26, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+949,0,"opcode_alu",26, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("gen_no_rs3_flop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1154,0,"unused_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"unused_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_branch_set_flop", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+528,0,"branch_set_raw_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("g_nobtalu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1432,0,"unused_a_mux_sel",19, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1433,0,"unused_b_mux_sel",21, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_stall_mem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1161,0,"unused_data_req_done_ex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"unused_rf_waddr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+1205,0,"unused_rf_write_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_outstanding_load_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_outstanding_store_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_wb_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"unused_rf_wdata_fwd_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+906,0,"unused_id_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("if_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1262,0,"DmHaltAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"DmExceptionAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICache",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ICacheECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"BusSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1313,0,"TagSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1223,0,"LineSizeECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"PCIncrCheck",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1229,0,"RndCnstLfsrSeed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RndCnstLfsrPerm", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1241,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+1194,0,"BranchPredictor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1265,0,"boot_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+674,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+960,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+594,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"instr_bus_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1314,0,"ic_tag_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_tag_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_tag_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1315,0,"ic_tag_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->pushPrefix("ic_tag_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1314,0,"ic_data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"ic_data_write_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1201,0,"ic_data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declQuad(c+1271,0,"ic_data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->pushPrefix("ic_data_rdata_i", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+13+i*2,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1264,0,"ic_scr_key_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"ic_scr_key_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"instr_valid_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"instr_new_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+606,0,"instr_rdata_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+607,0,"instr_rdata_alu_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+608,0,"instr_rdata_c_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+609,0,"instr_is_compressed_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_bp_taken_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+610,0,"instr_fetch_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+611,0,"instr_fetch_err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"illegal_c_insn_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"pc_if_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"pc_id_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"pmp_err_if_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"pmp_err_if_plus2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+974,0,"instr_valid_clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"pc_set_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+778,0,"pc_mux_i",6, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"nt_branch_mispredict_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"nt_branch_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+673,0,"exc_pc_mux_i",7, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("exc_cause", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+976,0,"irq_int",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+977,0,"irq_ext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+978,0,"lower_cause",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBit(c+301,0,"dummy_instr_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"dummy_instr_mask_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"dummy_instr_seed_en_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"dummy_instr_seed_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1158,0,"icache_enable_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"icache_inval_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"icache_ecc_error_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"branch_target_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+172,0,"csr_mepc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"csr_depc_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"csr_mtvec_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+991,0,"csr_mtvec_init_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"id_in_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"pc_mismatch_alert_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"if_busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1100,0,"instr_valid_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+671,0,"instr_valid_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1101,0,"instr_new_id_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"instr_new_id_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"prefetch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"branch_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1178,0,"fetch_addr_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1179,0,"unused_fetch_addr_n0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"prefetch_branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"prefetch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1103,0,"fetch_valid_raw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"fetch_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"fetch_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1104,0,"fetch_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"fetch_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1105,0,"fetch_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"fetch_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1106,0,"instr_decompressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1107,0,"illegal_c_insn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1108,0,"instr_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"if_instr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1104,0,"if_instr_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"if_instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1105,0,"if_instr_bus_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"if_instr_pmp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"if_instr_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"if_instr_err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1109,0,"exc_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1101,0,"if_id_pipe_reg_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"stall_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1106,0,"instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1108,0,"instr_is_compressed_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"illegal_c_instr_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1105,0,"instr_err_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"predict_branch_taken",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"predict_branch_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,0,"irq_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+778,0,"pc_mux_internal",6, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1201,0,"unused_boot_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+544,0,"unused_csr_mtvec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1111,0,"unused_exc_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1314,0,"fcov_dummy_instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1314,0,"unused_fcov_dummy_instr_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"fcov_insert_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_insert_dummy_instr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("compressed_decoder_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1112,0,"valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1104,0,"instr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1106,0,"instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1108,0,"is_compressed_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1107,0,"illegal_instr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1112,0,"unused_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("gen_no_dummy_instr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+301,0,"unused_dummy_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"unused_dummy_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1205,0,"unused_dummy_seed_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"unused_dummy_seed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_prefetch_buffer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1158,0,"unused_icen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+777,0,"unused_icinv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"unused_scr_key_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unused_tag_ram_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+143+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 21,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unused_data_ram_input", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+145+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefetch_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+674,0,"req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"branch_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+986,0,"ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1104,0,"rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1105,0,"err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"instr_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+961,0,"instr_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"instr_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"instr_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+635,0,"instr_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+582,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1208,0,"NUM_REQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1113,0,"valid_new_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+960,0,"valid_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"valid_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+545,0,"valid_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1114,0,"discard_req_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+546,0,"discard_req_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1115,0,"rdata_outstanding_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1181,0,"rdata_outstanding_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+547,0,"rdata_outstanding_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1116,0,"branch_discard_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1182,0,"branch_discard_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+548,0,"branch_discard_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+549,0,"rdata_outstanding_rev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1117,0,"stored_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+627,0,"stored_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1118,0,"stored_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1183,0,"fetch_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+628,0,"fetch_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1119,0,"fetch_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1117,0,"instr_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+961,0,"instr_addr_w_aligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+651,0,"fifo_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"fifo_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1184,0,"fifo_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"fifo_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+698,0,"fifo_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("fifo_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1208,0,"NUM_REQS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+975,0,"clear_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+698,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+651,0,"in_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1102,0,"in_addr_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+594,0,"in_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"in_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1103,0,"out_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+986,0,"out_ready_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+602,0,"out_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,0,"out_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1105,0,"out_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1180,0,"out_err_plus2_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1263,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rdata_d", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1120,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1121,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1122,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rdata_q", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+629,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+630,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+631,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+950,0,"err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+632,0,"err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+708,0,"valid_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+699,0,"valid_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+700,0,"lowest_free_entry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+709,0,"valid_pushed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+710,0,"valid_popped",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1123,0,"entry_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1124,0,"pop_fifo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1125,0,"rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1185,0,"rdata_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+951,0,"err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1186,0,"err_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1187,0,"err_plus2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1126,0,"valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1188,0,"valid_unaligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1127,0,"aligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"unaligned_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1129,0,"addr_incr_two",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1189,0,"instr_addr_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBus(c+1190,0,"instr_addr_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBus(c+633,0,"instr_addr_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,1);
    tracep->declBit(c+1130,0,"instr_addr_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1131,0,"unused_addr_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("load_store_unit_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"MemECC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBus(c+1222,0,"MemDataWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+766,0,"data_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+767,0,"data_gnt_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+168,0,"data_rvalid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+714,0,"data_bus_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"data_pmp_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+770,0,"data_addr_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+768,0,"data_we_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+769,0,"data_be_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+771,0,"data_wdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+713,0,"data_rdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+768,0,"lsu_we_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+799,0,"lsu_type_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+802,0,"lsu_wdata_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+800,0,"lsu_sign_ext_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"lsu_rdata_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+983,0,"lsu_rdata_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+801,0,"lsu_req_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"adder_result_ex_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+303,0,"addr_incr_req_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+171,0,"addr_last_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1161,0,"lsu_req_done_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"lsu_resp_valid_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+979,0,"load_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"load_resp_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+980,0,"store_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"store_resp_intg_err_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"busy_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+811,0,"perf_load_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+812,0,"perf_store_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+779,0,"data_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+770,0,"data_addr_w_aligned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"addr_last_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+578,0,"addr_last_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1132,0,"addr_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+952,0,"ctrl_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+652,0,"rdata_update",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+550,0,"rdata_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,8);
    tracep->declBus(c+551,0,"rdata_offset_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+552,0,"data_type_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+553,0,"data_sign_ext_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+554,0,"data_we_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+953,0,"data_offset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+769,0,"data_be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+771,0,"data_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+982,0,"data_rdata_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1191,0,"rdata_w_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1133,0,"rdata_h_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1134,0,"rdata_b_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+954,0,"split_misaligned_access",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+555,0,"handle_misaligned_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1135,0,"handle_misaligned_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+556,0,"pmp_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1136,0,"pmp_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+557,0,"lsu_err_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1137,0,"lsu_err_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"data_intg_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1138,0,"data_or_pmp_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+558,0,"ls_fsm_cs",27, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1139,0,"ls_fsm_ns",27, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1192,0,"fcov_mis_2_en_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+559,0,"fcov_mis_2_en_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"fcov_mis_rvalid_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"fcov_mis_rvalid_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1193,0,"fcov_mis_bus_err_1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+560,0,"fcov_mis_bus_err_1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"fcov_ls_error_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+586,0,"unused_fcov_ls_error_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"fcov_ls_pmp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+587,0,"unused_fcov_ls_pmp_exception",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"fcov_ls_first_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"unused_fcov_ls_first_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"fcov_ls_second_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"unused_fcov_ls_second_req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"fcov_ls_mis_pmp_err_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+561,0,"unused_fcov_ls_mis_pmp_err_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"fcov_ls_mis_pmp_err_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_ls_mis_pmp_err_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("wb_stage_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1194,0,"ResetAll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"WritebackStage",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1194,0,"DummyInstructions",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::BIT, false,-1);
    tracep->declBit(c+1154,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+988,0,"en_wb_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1351,0,"instr_type_wb_i",12, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"pc_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+609,0,"instr_is_compressed_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1157,0,"instr_perf_count_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"ready_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"rf_write_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_load_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"outstanding_store_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"pc_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+992,0,"perf_instr_ret_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1162,0,"perf_instr_ret_compressed_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"perf_instr_ret_wb_spec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"perf_instr_ret_compressed_wb_spec_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+605,0,"rf_waddr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+984,0,"rf_wdata_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+783,0,"rf_we_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+982,0,"rf_wdata_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+983,0,"rf_we_lsu_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"rf_wdata_fwd_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+605,0,"rf_waddr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+971,0,"rf_wdata_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+970,0,"rf_we_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"dummy_instr_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+643,0,"lsu_resp_valid_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+987,0,"lsu_resp_err_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"instr_done_wb_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rf_wdata_wb_mux", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1142,0,"rf_wdata_wb_mux_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"fcov_wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"unused_fcov_wb_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("g_bypass_wb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1154,0,"unused_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"unused_rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1351,0,"unused_instr_type_wb",12, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+601,0,"unused_pc_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1205,0,"unused_dummy_instr_id",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_rf_rdata_a_ecc_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+562,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1316,0,"Impl",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("gen_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_impl_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+562,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+562,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+566,0,"inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_rf_rdata_b_ecc_buf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+563,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1316,0,"Impl",5, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("gen_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_impl_generic", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1206,0,"Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+563,0,"in_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+563,0,"out_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+567,0,"inv",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ibex_tracer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1145,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1144,0,"rst_ni",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1214,0,"hart_id_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+655,0,"rvfi_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+174,0,"rvfi_order",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+656,0,"rvfi_insn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+176,0,"rvfi_trap",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"rvfi_halt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"rvfi_intr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"rvfi_mode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"rvfi_ixl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+657,0,"rvfi_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+658,0,"rvfi_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+659,0,"rvfi_rs3_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+660,0,"rvfi_rs1_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+661,0,"rvfi_rs2_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+662,0,"rvfi_rs3_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+663,0,"rvfi_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+664,0,"rvfi_rd_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+665,0,"rvfi_pc_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"rvfi_pc_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+666,0,"rvfi_mem_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+667,0,"rvfi_mem_rmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+668,0,"rvfi_mem_wmask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+669,0,"rvfi_mem_rdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+670,0,"rvfi_mem_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+174,0,"unused_rvfi_order",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+176,0,"unused_rvfi_trap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+177,0,"unused_rvfi_halt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"unused_rvfi_intr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"unused_rvfi_mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+180,0,"unused_rvfi_ixl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+599,0,"file_handle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+640,0,"cycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+701,0,"insn_is_compressed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1236,0,"RS1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"RS2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"RS3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"RD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"MEM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+702,0,"data_accessed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+149,0,"trace_log_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"fh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+600,0,"fh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_cipher_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__prim_cipher_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("PRINCE_SBOX4", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1440,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1448,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRINCE_SBOX4_INV", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1436,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1448,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1440,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRINCE_SHIFT_ROWS64", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1448,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1440,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRINCE_SHIFT_ROWS64_INV", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1440,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1448,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRINCE_ROUND_CONST", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declQuad(c+1271,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1449,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1451,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1453,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1455,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1457,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1459,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1461,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1463,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1465,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1467,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+1469,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->declQuad(c+1469,0,"PRINCE_ALPHA_CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1471,0,"PRINCE_SHIFT_ROWS_CONST0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1472,0,"PRINCE_SHIFT_ROWS_CONST1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1473,0,"PRINCE_SHIFT_ROWS_CONST2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1474,0,"PRINCE_SHIFT_ROWS_CONST3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("PRESENT_SBOX4", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1440,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1273,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1448,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRESENT_SBOX4_INV", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1273,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1446,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1437,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1445,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1440,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1442,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1439,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1447,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1436,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1448,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1443,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1438,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1213,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1444,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1441,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1318,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRESENT_PERM32", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1241,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1230,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRESENT_PERM32_INV", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1241,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1230,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRESENT_PERM64", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1431,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1475,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1476,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1477,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1478,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1479,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1480,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1481,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1482,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1483,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1484,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1485,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1486,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1487,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1488,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1489,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1490,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1491,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1492,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1493,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1494,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1495,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1496,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1497,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1498,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1499,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1500,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1501,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1502,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1503,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1504,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1505,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1506,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1507,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1508,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1509,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1510,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1511,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1512,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1513,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1514,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1515,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1516,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1517,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1518,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1519,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1520,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1521,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1522,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1523,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1524,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1525,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1526,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1527,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1528,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1529,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1530,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1531,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1532,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1533,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1534,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1535,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1536,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1537,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("PRESENT_PERM64_INV", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1431,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1490,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1506,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1522,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1475,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1491,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1507,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1523,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1476,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1492,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1508,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1524,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1477,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1493,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1509,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1525,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1478,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1494,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1510,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1526,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1479,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1495,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1511,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1527,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1480,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1496,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1512,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1528,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1481,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1497,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1513,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1529,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1482,0,"[32]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1498,0,"[33]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1514,0,"[34]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1530,0,"[35]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1483,0,"[36]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1499,0,"[37]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1515,0,"[38]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1531,0,"[39]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1484,0,"[40]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1500,0,"[41]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1516,0,"[42]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1532,0,"[43]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1485,0,"[44]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1501,0,"[45]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1517,0,"[46]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1533,0,"[47]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1486,0,"[48]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1502,0,"[49]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1518,0,"[50]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1534,0,"[51]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1487,0,"[52]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1503,0,"[53]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1519,0,"[54]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1535,0,"[55]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1488,0,"[56]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1504,0,"[57]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1520,0,"[58]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1536,0,"[59]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1489,0,"[60]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1505,0,"[61]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1521,0,"[62]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1537,0,"[63]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_secded_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__prim_secded_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1431,0,"Secded2216ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1315,0,"Secded2216ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1431,0,"Secded2822ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1538,0,"Secded2822ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1204,0,"Secded3932ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1539,0,"Secded3932ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+1204,0,"Secded6457ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1271,0,"Secded6457ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1201,0,"Secded7264ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1541,0,"Secded7264ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+1431,0,"SecdedHamming2216ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1315,0,"SecdedHamming2216ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1204,0,"SecdedHamming3932ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1539,0,"SecdedHamming3932ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+1201,0,"SecdedHamming7264ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1541,0,"SecdedHamming7264ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+1201,0,"SecdedHamming7668ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1544,0,"SecdedHamming7668ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declBus(c+1516,0,"SecdedInv2216ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1547,0,"SecdedInv2216ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1516,0,"SecdedInv2822ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1548,0,"SecdedInv2822ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 27,0);
    tracep->declBus(c+1549,0,"SecdedInv3932ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1550,0,"SecdedInv3932ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+1549,0,"SecdedInv6457ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1552,0,"SecdedInv6457ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1554,0,"SecdedInv7264ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1555,0,"SecdedInv7264ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+1516,0,"SecdedInvHamming2216ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1547,0,"SecdedInvHamming2216ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 21,0);
    tracep->declBus(c+1549,0,"SecdedInvHamming3932ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declQuad(c+1550,0,"SecdedInvHamming3932ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 38,0);
    tracep->declBus(c+1554,0,"SecdedInvHamming7264ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1555,0,"SecdedInvHamming7264ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+1554,0,"SecdedInvHamming7668ZeroEcc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1558,0,"SecdedInvHamming7668ZeroWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_tracer_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_tracer_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1314,0,"OPCODE_C0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1561,0,"OPCODE_C1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1562,0,"OPCODE_C2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1563,0,"INSN_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1564,0,"INSN_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1565,0,"INSN_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1566,0,"INSN_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1567,0,"INSN_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1568,0,"INSN_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1569,0,"INSN_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1570,0,"INSN_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1571,0,"INSN_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1572,0,"INSN_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1573,0,"INSN_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1574,0,"INSN_SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1575,0,"INSN_SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1576,0,"INSN_XORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1577,0,"INSN_ORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1578,0,"INSN_ANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1579,0,"INSN_SLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1580,0,"INSN_SRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1581,0,"INSN_SRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1582,0,"INSN_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1583,0,"INSN_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1584,0,"INSN_SLL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1585,0,"INSN_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1586,0,"INSN_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1587,0,"INSN_XOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1588,0,"INSN_SRL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1589,0,"INSN_SRA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1590,0,"INSN_OR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1591,0,"INSN_AND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1592,0,"INSN_CSRRW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1593,0,"INSN_CSRRS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1594,0,"INSN_CSRRC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1595,0,"INSN_CSRRWI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1596,0,"INSN_CSRRSI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1597,0,"INSN_CSRRCI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1598,0,"INSN_ECALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1599,0,"INSN_EBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1600,0,"INSN_MRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1601,0,"INSN_DRET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1602,0,"INSN_WFI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1603,0,"INSN_DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1604,0,"INSN_DIVU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1605,0,"INSN_REM",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1606,0,"INSN_REMU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1607,0,"INSN_PMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1608,0,"INSN_PMUH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1609,0,"INSN_PMULHSU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1610,0,"INSN_PMULHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1611,0,"INSN_SH1ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1612,0,"INSN_SH2ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1613,0,"INSN_SH3ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1614,0,"INSN_RORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1615,0,"INSN_CLZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1616,0,"INSN_CTZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1617,0,"INSN_CPOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1618,0,"INSN_SEXTB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1619,0,"INSN_SEXTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1620,0,"INSN_ROL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1621,0,"INSN_ROR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1622,0,"INSN_MIN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1623,0,"INSN_MAX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1624,0,"INSN_MINU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1625,0,"INSN_MAXU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1626,0,"INSN_XNOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1627,0,"INSN_ORN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1628,0,"INSN_ANDN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1629,0,"INSN_PACK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1630,0,"INSN_PACKU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1631,0,"INSN_PACKH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1632,0,"INSN_BCLRI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1633,0,"INSN_BSETI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1634,0,"INSN_BINVI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1635,0,"INSN_BEXTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1636,0,"INSN_BCLR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1637,0,"INSN_BSET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1638,0,"INSN_BINV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1639,0,"INSN_BEXT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1640,0,"INSN_GREVI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1641,0,"INSN_REV_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1642,0,"INSN_REV2_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1643,0,"INSN_REV_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1644,0,"INSN_REV4_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1645,0,"INSN_REV2_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1646,0,"INSN_REV_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1647,0,"INSN_REV8_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1648,0,"INSN_REV4_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1649,0,"INSN_REV2_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1650,0,"INSN_REV_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1651,0,"INSN_REV16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1652,0,"INSN_REV8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1653,0,"INSN_REV4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1654,0,"INSN_REV2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1655,0,"INSN_REV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1656,0,"INSN_GORCI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1657,0,"INSN_ORC_P",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1658,0,"INSN_ORC2_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1659,0,"INSN_ORC_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1660,0,"INSN_ORC4_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1661,0,"INSN_ORC2_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1662,0,"INSN_ORC_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1663,0,"INSN_ORC8_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1664,0,"INSN_ORC4_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1665,0,"INSN_ORC2_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1666,0,"INSN_ORC_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1667,0,"INSN_ORC16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1668,0,"INSN_ORC8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1669,0,"INSN_ORC4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1670,0,"INSN_ORC2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1671,0,"INSN_ORC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1672,0,"INSN_SHFLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1673,0,"INSN_ZIP_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1674,0,"INSN_ZIP2_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1675,0,"INSN_ZIP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1676,0,"INSN_ZIP4_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1677,0,"INSN_ZIP2_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1678,0,"INSN_ZIP_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1679,0,"INSN_ZIP8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1680,0,"INSN_ZIP4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1681,0,"INSN_ZIP2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1682,0,"INSN_ZIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1683,0,"INSN_UNSHFLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1684,0,"INSN_UNZIP_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1685,0,"INSN_UNZIP2_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1686,0,"INSN_UNZIP_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1687,0,"INSN_UNZIP4_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1688,0,"INSN_UNZIP2_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1689,0,"INSN_UNZIP_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1690,0,"INSN_UNZIP8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1691,0,"INSN_UNZIP4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1692,0,"INSN_UNZIP2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1693,0,"INSN_UNZIP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1694,0,"INSN_GREV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1695,0,"INSN_GORC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1696,0,"INSN_SHFL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1697,0,"INSN_UNSHFL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1698,0,"INSN_XPERM_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1699,0,"INSN_XPERM_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1700,0,"INSN_XPERM_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1701,0,"INSN_SLO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1702,0,"INSN_SRO",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1703,0,"INSN_SLOI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1704,0,"INSN_SROI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1705,0,"INSN_BDECOMPRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1706,0,"INSN_BCOMPRESS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1707,0,"INSN_FSRI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1708,0,"INSN_CMIX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1709,0,"INSN_CMOV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1710,0,"INSN_FSL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1711,0,"INSN_FSR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1712,0,"INSN_BFP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1713,0,"INSN_CLMUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1714,0,"INSN_CLMULR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1715,0,"INSN_CLMULH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1716,0,"INSN_CRC32_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1717,0,"INSN_CRC32_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1718,0,"INSN_CRC32_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1719,0,"INSN_CRC32C_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1720,0,"INSN_CRC32C_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1721,0,"INSN_CRC32C_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1722,0,"INSN_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1723,0,"INSN_STORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1724,0,"INSN_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1725,0,"INSN_FENCEI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1726,0,"INSN_CADDI4SPN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1727,0,"INSN_CLW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1728,0,"INSN_CSW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1729,0,"INSN_CADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1730,0,"INSN_CJAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1731,0,"INSN_CJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1732,0,"INSN_CLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1733,0,"INSN_CLUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1734,0,"INSN_CBEQZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1735,0,"INSN_CBNEZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1736,0,"INSN_CSRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1737,0,"INSN_CSRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1738,0,"INSN_CANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1739,0,"INSN_CSUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1740,0,"INSN_CXOR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1741,0,"INSN_COR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1742,0,"INSN_CAND",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1743,0,"INSN_CSLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1744,0,"INSN_CLWSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1745,0,"INSN_SWSP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1746,0,"INSN_CMV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1747,0,"INSN_CADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1747,0,"INSN_CEBREAK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1746,0,"INSN_CJR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1747,0,"INSN_CJALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_2p_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_2p_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("RAM_2P_CFG_DEFAULT", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("a_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_fcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("a_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("b_ram_lcfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_mubi_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__prim_mubi_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1217,0,"MuBi4Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1216,0,"MuBi8Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1415,0,"MuBi12Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1394,0,"MuBi16Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1397,0,"MuBi20Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1401,0,"MuBi24Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1405,0,"MuBi28Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1206,0,"MuBi32Width",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__ibex_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__ibex_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("ExcCauseIrqSoftwareM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1261,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseIrqTimerM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1237,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseIrqExternalM", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1248,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseIrqNm", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1264,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1252,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseInsnAddrMisa", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1241,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseInstrAccessFault", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1236,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseIllegalInsn", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1249,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseBreakpoint", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1261,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseLoadAccessFault", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1244,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseStoreAccessFault", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1237,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseEcallUMode", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1251,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("ExcCauseEcallMMode", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"irq_int",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"irq_ext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1248,0,"lower_cause",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declBus(c+1222,0,"ADDR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1222,0,"BUS_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1196,0,"BUS_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"BUS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1748,0,"IC_SIZE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"IC_NUM_WAYS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1223,0,"IC_LINE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1419,0,"IC_LINE_BYTES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1263,0,"IC_LINE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1749,0,"IC_NUM_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"IC_LINE_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1207,0,"IC_LINE_BEATS_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1419,0,"IC_INDEX_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1224,0,"IC_INDEX_HI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1313,0,"IC_TAG_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"IC_OUTPUT_BEATS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1750,0,"SCRAMBLE_KEY_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1223,0,"SCRAMBLE_NONCE_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1751,0,"PMP_MAX_REGIONS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1419,0,"PMP_CFG_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"PMP_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1207,0,"PMP_I2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"PMP_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1752,0,"CSR_OFF_PMP_CFG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1753,0,"CSR_OFF_PMP_ADDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1263,0,"CSR_MSTATUS_MIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1423,0,"CSR_MSTATUS_MPIE_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1754,0,"CSR_MSTATUS_MPP_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1755,0,"CSR_MSTATUS_MPP_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1756,0,"CSR_MSTATUS_MPRV_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1757,0,"CSR_MSTATUS_TW_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1561,0,"CSR_MISA_MXL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1263,0,"CSR_MSIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1423,0,"CSR_MTIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1754,0,"CSR_MEIX_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1751,0,"CSR_MFIX_BIT_LOW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1758,0,"CSR_MFIX_BIT_HIGH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1195,0,"CSR_MSECCFG_MML_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1207,0,"CSR_MSECCFG_MMWP_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1208,0,"CSR_MSECCFG_RLB_BIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1214,0,"CSR_MVENDORID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1759,0,"CSR_MARCHID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"CSR_MIMPID_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1214,0,"CSR_MCONFIGPTR_VALUE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1206,0,"LfsrWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1229,0,"RndCnstLfsrSeedDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("RndCnstLfsrPermDefault", VerilatedTracePrefixType::ARRAY_PACKED);
    tracep->declBus(c+1230,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1231,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1232,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1233,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1234,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1235,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1236,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1237,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1238,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1239,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1240,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1241,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1242,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1243,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1244,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1245,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1246,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1247,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1248,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1249,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1250,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1251,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1252,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1253,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1254,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1255,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1256,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1257,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1258,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1259,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1260,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+1261,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->declArray(c+1307,0,"RndCnstIbexKeyDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declQuad(c+1311,0,"RndCnstIbexNonceDefault",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1217,0,"IbexMuBiWidth",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1760,0,"IbexMuBiOn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1761,0,"IbexMuBiOff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("PmpCfgRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[8]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[9]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[10]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[11]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[12]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[13]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[14]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[15]", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"lock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1274,0,"mode",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1205,0,"exec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PmpAddrRst", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+1762+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, true,(i+0), 33,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("PmpMseccfgRst", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"rlb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mmwp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1205,0,"mml",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_1p_pkg__0(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_sub__TOP__prim_ram_1p_pkg__0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("RAM_1P_CFG_DEFAULT", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->pushPrefix("ram_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("rf_cfg", VerilatedTracePrefixType::STRUCT_PACKED);
    tracep->declBit(c+1205,0,"cfg_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1213,0,"cfg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_init_top(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_init_top\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vibex_simple_system___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vibex_simple_system___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vibex_simple_system___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vibex_simple_system___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vibex_simple_system___024root__trace_register(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_register\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vibex_simple_system___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vibex_simple_system___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vibex_simple_system___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vibex_simple_system___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_const_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vibex_simple_system___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_const_0\n"); );
    // Init
    Vibex_simple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_simple_system___024root*>(voidSelf);
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_simple_system___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_const_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_const_0_sub_0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    // Body
    bufp->fullBit(oldp+1194,(0U));
    bufp->fullIData(oldp+1195,(0U),32);
    bufp->fullIData(oldp+1196,(4U),32);
    bufp->fullIData(oldp+1197,(0x28U),32);
    bufp->fullIData(oldp+1198,(2U),32);
    bufp->fullIData(oldp+1199,(0U),32);
    bufp->fullIData(oldp+1200,(0U),32);
    bufp->fullCData(oldp+1201,(0U),8);
    bufp->fullIData(oldp+1202,(3U),32);
    bufp->fullIData(oldp+1203,(1U),32);
    bufp->fullCData(oldp+1204,(0U),7);
    bufp->fullBit(oldp+1205,(0U));
    bufp->fullIData(oldp+1206,(0x20U),32);
    bufp->fullIData(oldp+1207,(1U),32);
    bufp->fullIData(oldp+1208,(2U),32);
    bufp->fullIData(oldp+1209,(0xffffffffU),32);
    bufp->fullIData(oldp+1210,(3U),32);
    bufp->fullIData(oldp+1211,(1U),32);
    bufp->fullIData(oldp+1212,(0x40000U),32);
    bufp->fullCData(oldp+1213,(0U),4);
    bufp->fullIData(oldp+1214,(0U),32);
    bufp->fullIData(oldp+1215,(0x12U),32);
    bufp->fullIData(oldp+1216,(8U),32);
    bufp->fullIData(oldp+1217,(4U),32);
    bufp->fullIData(oldp+1218,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1219,(4U),32);
    bufp->fullBit(oldp+1220,(1U));
    bufp->fullCData(oldp+1221,(2U),8);
    bufp->fullIData(oldp+1222,(0x20U),32);
    bufp->fullIData(oldp+1223,(0x40U),32);
    bufp->fullIData(oldp+1224,(0xaU),32);
    bufp->fullSData(oldp+1225,(0U),10);
    bufp->fullSData(oldp+1226,(4U),10);
    bufp->fullSData(oldp+1227,(8U),10);
    bufp->fullSData(oldp+1228,(0xcU),10);
    bufp->fullIData(oldp+1229,(0xac533bf4U),32);
    bufp->fullCData(oldp+1230,(0xdU),5);
    bufp->fullCData(oldp+1231,(0x17U),5);
    bufp->fullCData(oldp+1232,(0x16U),5);
    bufp->fullCData(oldp+1233,(0x11U),5);
    bufp->fullCData(oldp+1234,(0xaU),5);
    bufp->fullCData(oldp+1235,(0x1cU),5);
    bufp->fullCData(oldp+1236,(1U),5);
    bufp->fullCData(oldp+1237,(7U),5);
    bufp->fullCData(oldp+1238,(4U),5);
    bufp->fullCData(oldp+1239,(0x1dU),5);
    bufp->fullCData(oldp+1240,(0x13U),5);
    bufp->fullCData(oldp+1241,(0U),5);
    bufp->fullCData(oldp+1242,(0xcU),5);
    bufp->fullCData(oldp+1243,(9U),5);
    bufp->fullCData(oldp+1244,(5U),5);
    bufp->fullCData(oldp+1245,(0x10U),5);
    bufp->fullCData(oldp+1246,(0x15U),5);
    bufp->fullCData(oldp+1247,(0x14U),5);
    bufp->fullCData(oldp+1248,(0xbU),5);
    bufp->fullCData(oldp+1249,(2U),5);
    bufp->fullCData(oldp+1250,(0x1bU),5);
    bufp->fullCData(oldp+1251,(8U),5);
    bufp->fullCData(oldp+1252,(0x1fU),5);
    bufp->fullCData(oldp+1253,(0xfU),5);
    bufp->fullCData(oldp+1254,(6U),5);
    bufp->fullCData(oldp+1255,(0x12U),5);
    bufp->fullCData(oldp+1256,(0xeU),5);
    bufp->fullCData(oldp+1257,(0x19U),5);
    bufp->fullCData(oldp+1258,(0x1eU),5);
    bufp->fullCData(oldp+1259,(0x1aU),5);
    bufp->fullCData(oldp+1260,(0x18U),5);
    bufp->fullCData(oldp+1261,(3U),5);
    bufp->fullIData(oldp+1262,(0x100000U),32);
    bufp->fullIData(oldp+1263,(3U),32);
    bufp->fullBit(oldp+1264,(1U));
    bufp->fullIData(oldp+1265,(0x100000U),32);
    bufp->fullSData(oldp+1266,(0U),15);
    __Vtemp_1[0U] = 0U;
    __Vtemp_1[1U] = 0U;
    __Vtemp_1[2U] = 0U;
    __Vtemp_1[3U] = 0U;
    bufp->fullWData(oldp+1267,(__Vtemp_1),128);
    bufp->fullQData(oldp+1271,(0ULL),64);
    bufp->fullCData(oldp+1273,(5U),4);
    bufp->fullCData(oldp+1274,(0U),2);
    bufp->fullQData(oldp+1275,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[0]),34);
    bufp->fullQData(oldp+1277,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[1]),34);
    bufp->fullQData(oldp+1279,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[2]),34);
    bufp->fullQData(oldp+1281,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[3]),34);
    bufp->fullQData(oldp+1283,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[4]),34);
    bufp->fullQData(oldp+1285,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[5]),34);
    bufp->fullQData(oldp+1287,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[6]),34);
    bufp->fullQData(oldp+1289,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[7]),34);
    bufp->fullQData(oldp+1291,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[8]),34);
    bufp->fullQData(oldp+1293,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[9]),34);
    bufp->fullQData(oldp+1295,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[10]),34);
    bufp->fullQData(oldp+1297,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[11]),34);
    bufp->fullQData(oldp+1299,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[12]),34);
    bufp->fullQData(oldp+1301,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[13]),34);
    bufp->fullQData(oldp+1303,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[14]),34);
    bufp->fullQData(oldp+1305,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__PMPRstAddr[15]),34);
    __Vtemp_2[0U] = 0xcc113298U;
    __Vtemp_2[1U] = 0x12286bb3U;
    __Vtemp_2[2U] = 0xe3040d5eU;
    __Vtemp_2[3U] = 0x14e8cecaU;
    bufp->fullWData(oldp+1307,(__Vtemp_2),128);
    bufp->fullQData(oldp+1311,(0xf79780bc735f3843ULL),64);
    bufp->fullIData(oldp+1313,(0x16U),32);
    bufp->fullCData(oldp+1314,(0U),2);
    bufp->fullIData(oldp+1315,(0U),22);
    bufp->fullIData(oldp+1316,(0U),32);
    bufp->fullIData(oldp+1317,(5U),32);
    bufp->fullCData(oldp+1318,(0xaU),4);
    bufp->fullQData(oldp+1319,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[0]),34);
    bufp->fullQData(oldp+1321,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[1]),34);
    bufp->fullQData(oldp+1323,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[2]),34);
    bufp->fullQData(oldp+1325,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[3]),34);
    bufp->fullQData(oldp+1327,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[4]),34);
    bufp->fullQData(oldp+1329,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[5]),34);
    bufp->fullQData(oldp+1331,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[6]),34);
    bufp->fullQData(oldp+1333,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[7]),34);
    bufp->fullQData(oldp+1335,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[8]),34);
    bufp->fullQData(oldp+1337,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[9]),34);
    bufp->fullQData(oldp+1339,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[10]),34);
    bufp->fullQData(oldp+1341,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[11]),34);
    bufp->fullQData(oldp+1343,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[12]),34);
    bufp->fullQData(oldp+1345,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[13]),34);
    bufp->fullQData(oldp+1347,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[14]),34);
    bufp->fullQData(oldp+1349,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__PMPRstAddr[15]),34);
    bufp->fullCData(oldp+1351,(2U),2);
    bufp->fullQData(oldp+1352,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[0]),34);
    bufp->fullQData(oldp+1354,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[1]),34);
    bufp->fullQData(oldp+1356,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[2]),34);
    bufp->fullQData(oldp+1358,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[3]),34);
    bufp->fullQData(oldp+1360,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[4]),34);
    bufp->fullQData(oldp+1362,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[5]),34);
    bufp->fullQData(oldp+1364,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[6]),34);
    bufp->fullQData(oldp+1366,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[7]),34);
    bufp->fullQData(oldp+1368,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[8]),34);
    bufp->fullQData(oldp+1370,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[9]),34);
    bufp->fullQData(oldp+1372,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[10]),34);
    bufp->fullQData(oldp+1374,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[11]),34);
    bufp->fullQData(oldp+1376,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[12]),34);
    bufp->fullQData(oldp+1378,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[13]),34);
    bufp->fullQData(oldp+1380,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[14]),34);
    bufp->fullQData(oldp+1382,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__PMPRstAddr[15]),34);
    bufp->fullIData(oldp+1384,(0x40101104U),32);
    bufp->fullCData(oldp+1385,(0U),3);
    bufp->fullCData(oldp+1386,(0U),2);
    bufp->fullCData(oldp+1387,(4U),4);
    bufp->fullSData(oldp+1388,(0U),12);
    bufp->fullCData(oldp+1389,(0U),3);
    bufp->fullCData(oldp+1390,(3U),2);
    bufp->fullIData(oldp+1391,(0xdU),32);
    bufp->fullIData(oldp+1392,(0xeU),32);
    bufp->fullIData(oldp+1393,(0xfU),32);
    bufp->fullIData(oldp+1394,(0x10U),32);
    bufp->fullIData(oldp+1395,(0x11U),32);
    bufp->fullIData(oldp+1396,(0x13U),32);
    bufp->fullIData(oldp+1397,(0x14U),32);
    bufp->fullIData(oldp+1398,(0x15U),32);
    bufp->fullIData(oldp+1399,(0x16U),32);
    bufp->fullIData(oldp+1400,(0x17U),32);
    bufp->fullIData(oldp+1401,(0x18U),32);
    bufp->fullIData(oldp+1402,(0x19U),32);
    bufp->fullIData(oldp+1403,(0x1aU),32);
    bufp->fullIData(oldp+1404,(0x1bU),32);
    bufp->fullIData(oldp+1405,(0x1cU),32);
    bufp->fullIData(oldp+1406,(0x1dU),32);
    bufp->fullIData(oldp+1407,(0x1eU),32);
    bufp->fullIData(oldp+1408,(0x1fU),32);
    bufp->fullIData(oldp+1409,(5U),32);
    bufp->fullIData(oldp+1410,(6U),32);
    bufp->fullIData(oldp+1411,(7U),32);
    bufp->fullIData(oldp+1412,(9U),32);
    bufp->fullIData(oldp+1413,(0xaU),32);
    bufp->fullIData(oldp+1414,(0xbU),32);
    bufp->fullIData(oldp+1415,(0xcU),32);
    bufp->fullIData(oldp+1416,(0x20U),32);
    bufp->fullIData(oldp+1417,(0x40U),32);
    bufp->fullIData(oldp+1418,(0x6e6fU),32);
    bufp->fullIData(oldp+1419,(8U),32);
    bufp->fullCData(oldp+1420,(0U),8);
    bufp->fullIData(oldp+1421,(0x40000003U),32);
    bufp->fullIData(oldp+1422,(0U),32);
    bufp->fullIData(oldp+1423,(7U),32);
    bufp->fullCData(oldp+1424,(0U),7);
    bufp->fullIData(oldp+1425,(0x12U),32);
    bufp->fullIData(oldp+1426,(0U),18);
    bufp->fullCData(oldp+1427,(4U),3);
    bufp->fullIData(oldp+1428,(6U),32);
    bufp->fullCData(oldp+1429,(0x10U),6);
    bufp->fullIData(oldp+1430,(1U),32);
    bufp->fullCData(oldp+1431,(0U),6);
    bufp->fullCData(oldp+1432,(2U),2);
    bufp->fullCData(oldp+1433,(0U),3);
    bufp->fullCData(oldp+1434,(0U),5);
    bufp->fullIData(oldp+1435,(0xffffffffU),32);
    bufp->fullCData(oldp+1436,(0xbU),4);
    bufp->fullCData(oldp+1437,(0xfU),4);
    bufp->fullCData(oldp+1438,(3U),4);
    bufp->fullCData(oldp+1439,(2U),4);
    bufp->fullCData(oldp+1440,(0xcU),4);
    bufp->fullCData(oldp+1441,(9U),4);
    bufp->fullCData(oldp+1442,(1U),4);
    bufp->fullCData(oldp+1443,(6U),4);
    bufp->fullCData(oldp+1444,(7U),4);
    bufp->fullCData(oldp+1445,(8U),4);
    bufp->fullCData(oldp+1446,(0xeU),4);
    bufp->fullCData(oldp+1447,(0xdU),4);
    bufp->fullCData(oldp+1448,(4U),4);
    bufp->fullQData(oldp+1449,(0x13198a2e03707344ULL),64);
    bufp->fullQData(oldp+1451,(0xa4093822299f31d0ULL),64);
    bufp->fullQData(oldp+1453,(0x82efa98ec4e6c89ULL),64);
    bufp->fullQData(oldp+1455,(0x452821e638d01377ULL),64);
    bufp->fullQData(oldp+1457,(0xbe5466cf34e90c6cULL),64);
    bufp->fullQData(oldp+1459,(0x7ef84f78fd955cb1ULL),64);
    bufp->fullQData(oldp+1461,(0x85840851f1ac43aaULL),64);
    bufp->fullQData(oldp+1463,(0xc882d32f25323c54ULL),64);
    bufp->fullQData(oldp+1465,(0x64a51195e0e3610dULL),64);
    bufp->fullQData(oldp+1467,(0xd3b5a399ca0c2399ULL),64);
    bufp->fullQData(oldp+1469,(0xc0ac29b7c97c50ddULL),64);
    bufp->fullSData(oldp+1471,(0x7bdeU),16);
    bufp->fullSData(oldp+1472,(0xbde7U),16);
    bufp->fullSData(oldp+1473,(0xde7bU),16);
    bufp->fullSData(oldp+1474,(0xe7bdU),16);
    bufp->fullCData(oldp+1475,(0x10U),6);
    bufp->fullCData(oldp+1476,(0x20U),6);
    bufp->fullCData(oldp+1477,(0x30U),6);
    bufp->fullCData(oldp+1478,(1U),6);
    bufp->fullCData(oldp+1479,(0x11U),6);
    bufp->fullCData(oldp+1480,(0x21U),6);
    bufp->fullCData(oldp+1481,(0x31U),6);
    bufp->fullCData(oldp+1482,(2U),6);
    bufp->fullCData(oldp+1483,(0x12U),6);
    bufp->fullCData(oldp+1484,(0x22U),6);
    bufp->fullCData(oldp+1485,(0x32U),6);
    bufp->fullCData(oldp+1486,(3U),6);
    bufp->fullCData(oldp+1487,(0x13U),6);
    bufp->fullCData(oldp+1488,(0x23U),6);
    bufp->fullCData(oldp+1489,(0x33U),6);
    bufp->fullCData(oldp+1490,(4U),6);
    bufp->fullCData(oldp+1491,(0x14U),6);
    bufp->fullCData(oldp+1492,(0x24U),6);
    bufp->fullCData(oldp+1493,(0x34U),6);
    bufp->fullCData(oldp+1494,(5U),6);
    bufp->fullCData(oldp+1495,(0x15U),6);
    bufp->fullCData(oldp+1496,(0x25U),6);
    bufp->fullCData(oldp+1497,(0x35U),6);
    bufp->fullCData(oldp+1498,(6U),6);
    bufp->fullCData(oldp+1499,(0x16U),6);
    bufp->fullCData(oldp+1500,(0x26U),6);
    bufp->fullCData(oldp+1501,(0x36U),6);
    bufp->fullCData(oldp+1502,(7U),6);
    bufp->fullCData(oldp+1503,(0x17U),6);
    bufp->fullCData(oldp+1504,(0x27U),6);
    bufp->fullCData(oldp+1505,(0x37U),6);
    bufp->fullCData(oldp+1506,(8U),6);
    bufp->fullCData(oldp+1507,(0x18U),6);
    bufp->fullCData(oldp+1508,(0x28U),6);
    bufp->fullCData(oldp+1509,(0x38U),6);
    bufp->fullCData(oldp+1510,(9U),6);
    bufp->fullCData(oldp+1511,(0x19U),6);
    bufp->fullCData(oldp+1512,(0x29U),6);
    bufp->fullCData(oldp+1513,(0x39U),6);
    bufp->fullCData(oldp+1514,(0xaU),6);
    bufp->fullCData(oldp+1515,(0x1aU),6);
    bufp->fullCData(oldp+1516,(0x2aU),6);
    bufp->fullCData(oldp+1517,(0x3aU),6);
    bufp->fullCData(oldp+1518,(0xbU),6);
    bufp->fullCData(oldp+1519,(0x1bU),6);
    bufp->fullCData(oldp+1520,(0x2bU),6);
    bufp->fullCData(oldp+1521,(0x3bU),6);
    bufp->fullCData(oldp+1522,(0xcU),6);
    bufp->fullCData(oldp+1523,(0x1cU),6);
    bufp->fullCData(oldp+1524,(0x2cU),6);
    bufp->fullCData(oldp+1525,(0x3cU),6);
    bufp->fullCData(oldp+1526,(0xdU),6);
    bufp->fullCData(oldp+1527,(0x1dU),6);
    bufp->fullCData(oldp+1528,(0x2dU),6);
    bufp->fullCData(oldp+1529,(0x3dU),6);
    bufp->fullCData(oldp+1530,(0xeU),6);
    bufp->fullCData(oldp+1531,(0x1eU),6);
    bufp->fullCData(oldp+1532,(0x2eU),6);
    bufp->fullCData(oldp+1533,(0x3eU),6);
    bufp->fullCData(oldp+1534,(0xfU),6);
    bufp->fullCData(oldp+1535,(0x1fU),6);
    bufp->fullCData(oldp+1536,(0x2fU),6);
    bufp->fullCData(oldp+1537,(0x3fU),6);
    bufp->fullIData(oldp+1538,(0U),28);
    bufp->fullQData(oldp+1539,(0ULL),39);
    __Vtemp_3[0U] = 0U;
    __Vtemp_3[1U] = 0U;
    __Vtemp_3[2U] = 0U;
    bufp->fullWData(oldp+1541,(__Vtemp_3),72);
    __Vtemp_4[0U] = 0U;
    __Vtemp_4[1U] = 0U;
    __Vtemp_4[2U] = 0U;
    bufp->fullWData(oldp+1544,(__Vtemp_4),76);
    bufp->fullIData(oldp+1547,(0x2a0000U),22);
    bufp->fullIData(oldp+1548,(0xa800000U),28);
    bufp->fullCData(oldp+1549,(0x2aU),7);
    bufp->fullQData(oldp+1550,(0x2a00000000ULL),39);
    bufp->fullQData(oldp+1552,(0x5400000000000000ULL),64);
    bufp->fullCData(oldp+1554,(0xaaU),8);
    __Vtemp_5[0U] = 0U;
    __Vtemp_5[1U] = 0U;
    __Vtemp_5[2U] = 0xaaU;
    bufp->fullWData(oldp+1555,(__Vtemp_5),72);
    __Vtemp_6[0U] = 0U;
    __Vtemp_6[1U] = 0U;
    __Vtemp_6[2U] = 0xaa0U;
    bufp->fullWData(oldp+1558,(__Vtemp_6),76);
    bufp->fullCData(oldp+1561,(1U),2);
    bufp->fullCData(oldp+1562,(2U),2);
    bufp->fullIData(oldp+1563,(0x37U),32);
    bufp->fullIData(oldp+1564,(0x17U),32);
    bufp->fullIData(oldp+1565,(0x6fU),32);
    bufp->fullIData(oldp+1566,(0x67U),32);
    bufp->fullIData(oldp+1567,(0x63U),32);
    bufp->fullIData(oldp+1568,(0x1063U),32);
    bufp->fullIData(oldp+1569,(0x4063U),32);
    bufp->fullIData(oldp+1570,(0x5063U),32);
    bufp->fullIData(oldp+1571,(0x6063U),32);
    bufp->fullIData(oldp+1572,(0x7063U),32);
    bufp->fullIData(oldp+1573,(0x13U),32);
    bufp->fullIData(oldp+1574,(0x2013U),32);
    bufp->fullIData(oldp+1575,(0x3013U),32);
    bufp->fullIData(oldp+1576,(0x4013U),32);
    bufp->fullIData(oldp+1577,(0x6013U),32);
    bufp->fullIData(oldp+1578,(0x7013U),32);
    bufp->fullIData(oldp+1579,(0x1013U),32);
    bufp->fullIData(oldp+1580,(0x5013U),32);
    bufp->fullIData(oldp+1581,(0x40005013U),32);
    bufp->fullIData(oldp+1582,(0x33U),32);
    bufp->fullIData(oldp+1583,(0x40000033U),32);
    bufp->fullIData(oldp+1584,(0x1033U),32);
    bufp->fullIData(oldp+1585,(0x2033U),32);
    bufp->fullIData(oldp+1586,(0x3033U),32);
    bufp->fullIData(oldp+1587,(0x4033U),32);
    bufp->fullIData(oldp+1588,(0x5033U),32);
    bufp->fullIData(oldp+1589,(0x40005033U),32);
    bufp->fullIData(oldp+1590,(0x6033U),32);
    bufp->fullIData(oldp+1591,(0x7033U),32);
    bufp->fullIData(oldp+1592,(0x1073U),32);
    bufp->fullIData(oldp+1593,(0x2073U),32);
    bufp->fullIData(oldp+1594,(0x3073U),32);
    bufp->fullIData(oldp+1595,(0x5073U),32);
    bufp->fullIData(oldp+1596,(0x6073U),32);
    bufp->fullIData(oldp+1597,(0x7073U),32);
    bufp->fullIData(oldp+1598,(0x73U),32);
    bufp->fullIData(oldp+1599,(0x100073U),32);
    bufp->fullIData(oldp+1600,(0x30200073U),32);
    bufp->fullIData(oldp+1601,(0x7b200073U),32);
    bufp->fullIData(oldp+1602,(0x10500073U),32);
    bufp->fullIData(oldp+1603,(0x2004033U),32);
    bufp->fullIData(oldp+1604,(0x2005033U),32);
    bufp->fullIData(oldp+1605,(0x2006033U),32);
    bufp->fullIData(oldp+1606,(0x2007033U),32);
    bufp->fullIData(oldp+1607,(0x2000033U),32);
    bufp->fullIData(oldp+1608,(0x2001033U),32);
    bufp->fullIData(oldp+1609,(0x2002033U),32);
    bufp->fullIData(oldp+1610,(0x2003033U),32);
    bufp->fullIData(oldp+1611,(0x20002033U),32);
    bufp->fullIData(oldp+1612,(0x20004033U),32);
    bufp->fullIData(oldp+1613,(0x20006033U),32);
    bufp->fullIData(oldp+1614,(0x60005013U),32);
    bufp->fullIData(oldp+1615,(0x60001013U),32);
    bufp->fullIData(oldp+1616,(0x60101013U),32);
    bufp->fullIData(oldp+1617,(0x60201013U),32);
    bufp->fullIData(oldp+1618,(0x60401013U),32);
    bufp->fullIData(oldp+1619,(0x60501013U),32);
    bufp->fullIData(oldp+1620,(0x60001033U),32);
    bufp->fullIData(oldp+1621,(0x60005033U),32);
    bufp->fullIData(oldp+1622,(0xa004033U),32);
    bufp->fullIData(oldp+1623,(0xa006033U),32);
    bufp->fullIData(oldp+1624,(0xa005033U),32);
    bufp->fullIData(oldp+1625,(0xa007033U),32);
    bufp->fullIData(oldp+1626,(0x40004033U),32);
    bufp->fullIData(oldp+1627,(0x40006033U),32);
    bufp->fullIData(oldp+1628,(0x40007033U),32);
    bufp->fullIData(oldp+1629,(0x8004033U),32);
    bufp->fullIData(oldp+1630,(0x48004033U),32);
    bufp->fullIData(oldp+1631,(0x8007033U),32);
    bufp->fullIData(oldp+1632,(0x48001013U),32);
    bufp->fullIData(oldp+1633,(0x28001013U),32);
    bufp->fullIData(oldp+1634,(0x68001013U),32);
    bufp->fullIData(oldp+1635,(0x48005013U),32);
    bufp->fullIData(oldp+1636,(0x48001033U),32);
    bufp->fullIData(oldp+1637,(0x28001033U),32);
    bufp->fullIData(oldp+1638,(0x68001033U),32);
    bufp->fullIData(oldp+1639,(0x48005033U),32);
    bufp->fullIData(oldp+1640,(0x68005013U),32);
    bufp->fullIData(oldp+1641,(0x68105013U),32);
    bufp->fullIData(oldp+1642,(0x68205013U),32);
    bufp->fullIData(oldp+1643,(0x68305013U),32);
    bufp->fullIData(oldp+1644,(0x68405013U),32);
    bufp->fullIData(oldp+1645,(0x68605013U),32);
    bufp->fullIData(oldp+1646,(0x68705013U),32);
    bufp->fullIData(oldp+1647,(0x68805013U),32);
    bufp->fullIData(oldp+1648,(0x68c05013U),32);
    bufp->fullIData(oldp+1649,(0x68e05013U),32);
    bufp->fullIData(oldp+1650,(0x68f05013U),32);
    bufp->fullIData(oldp+1651,(0x69005013U),32);
    bufp->fullIData(oldp+1652,(0x69805013U),32);
    bufp->fullIData(oldp+1653,(0x69c05013U),32);
    bufp->fullIData(oldp+1654,(0x69e05013U),32);
    bufp->fullIData(oldp+1655,(0x69f05013U),32);
    bufp->fullIData(oldp+1656,(0x28005013U),32);
    bufp->fullIData(oldp+1657,(0x28105013U),32);
    bufp->fullIData(oldp+1658,(0x28205013U),32);
    bufp->fullIData(oldp+1659,(0x28305013U),32);
    bufp->fullIData(oldp+1660,(0x28405013U),32);
    bufp->fullIData(oldp+1661,(0x28605013U),32);
    bufp->fullIData(oldp+1662,(0x28705013U),32);
    bufp->fullIData(oldp+1663,(0x28805013U),32);
    bufp->fullIData(oldp+1664,(0x28c05013U),32);
    bufp->fullIData(oldp+1665,(0x28e05013U),32);
    bufp->fullIData(oldp+1666,(0x28f05013U),32);
    bufp->fullIData(oldp+1667,(0x29005013U),32);
    bufp->fullIData(oldp+1668,(0x29805013U),32);
    bufp->fullIData(oldp+1669,(0x29c05013U),32);
    bufp->fullIData(oldp+1670,(0x29e05013U),32);
    bufp->fullIData(oldp+1671,(0x29f05013U),32);
    bufp->fullIData(oldp+1672,(0x8001013U),32);
    bufp->fullIData(oldp+1673,(0x8101013U),32);
    bufp->fullIData(oldp+1674,(0x8201013U),32);
    bufp->fullIData(oldp+1675,(0x8301013U),32);
    bufp->fullIData(oldp+1676,(0x8401013U),32);
    bufp->fullIData(oldp+1677,(0x8601013U),32);
    bufp->fullIData(oldp+1678,(0x8701013U),32);
    bufp->fullIData(oldp+1679,(0x8801013U),32);
    bufp->fullIData(oldp+1680,(0x8c01013U),32);
    bufp->fullIData(oldp+1681,(0x8e01013U),32);
    bufp->fullIData(oldp+1682,(0x8f01013U),32);
    bufp->fullIData(oldp+1683,(0x8005013U),32);
    bufp->fullIData(oldp+1684,(0x8105013U),32);
    bufp->fullIData(oldp+1685,(0x8205013U),32);
    bufp->fullIData(oldp+1686,(0x8305013U),32);
    bufp->fullIData(oldp+1687,(0x8405013U),32);
    bufp->fullIData(oldp+1688,(0x8605013U),32);
    bufp->fullIData(oldp+1689,(0x8705013U),32);
    bufp->fullIData(oldp+1690,(0x8805013U),32);
    bufp->fullIData(oldp+1691,(0x8c05013U),32);
    bufp->fullIData(oldp+1692,(0x8e05013U),32);
    bufp->fullIData(oldp+1693,(0x8f05013U),32);
    bufp->fullIData(oldp+1694,(0x68005033U),32);
    bufp->fullIData(oldp+1695,(0x28005033U),32);
    bufp->fullIData(oldp+1696,(0x8001033U),32);
    bufp->fullIData(oldp+1697,(0x8005033U),32);
    bufp->fullIData(oldp+1698,(0x28002033U),32);
    bufp->fullIData(oldp+1699,(0x28004033U),32);
    bufp->fullIData(oldp+1700,(0x28006033U),32);
    bufp->fullIData(oldp+1701,(0x20001033U),32);
    bufp->fullIData(oldp+1702,(0x20005033U),32);
    bufp->fullIData(oldp+1703,(0x20001013U),32);
    bufp->fullIData(oldp+1704,(0x20005013U),32);
    bufp->fullIData(oldp+1705,(0x48006033U),32);
    bufp->fullIData(oldp+1706,(0x8006033U),32);
    bufp->fullIData(oldp+1707,(0x4005013U),32);
    bufp->fullIData(oldp+1708,(0x6001033U),32);
    bufp->fullIData(oldp+1709,(0x6005033U),32);
    bufp->fullIData(oldp+1710,(0x4001033U),32);
    bufp->fullIData(oldp+1711,(0x4005033U),32);
    bufp->fullIData(oldp+1712,(0x48007033U),32);
    bufp->fullIData(oldp+1713,(0xa001033U),32);
    bufp->fullIData(oldp+1714,(0xa002033U),32);
    bufp->fullIData(oldp+1715,(0xa003033U),32);
    bufp->fullIData(oldp+1716,(0x61001013U),32);
    bufp->fullIData(oldp+1717,(0x61101013U),32);
    bufp->fullIData(oldp+1718,(0x61201013U),32);
    bufp->fullIData(oldp+1719,(0x61801013U),32);
    bufp->fullIData(oldp+1720,(0x61901013U),32);
    bufp->fullIData(oldp+1721,(0x61a01013U),32);
    bufp->fullIData(oldp+1722,(3U),32);
    bufp->fullIData(oldp+1723,(0x23U),32);
    bufp->fullIData(oldp+1724,(0xfU),32);
    bufp->fullIData(oldp+1725,(0x100fU),32);
    bufp->fullSData(oldp+1726,(0U),16);
    bufp->fullSData(oldp+1727,(0x4000U),16);
    bufp->fullSData(oldp+1728,(0xc000U),16);
    bufp->fullSData(oldp+1729,(1U),16);
    bufp->fullSData(oldp+1730,(0x2001U),16);
    bufp->fullSData(oldp+1731,(0xa001U),16);
    bufp->fullSData(oldp+1732,(0x4001U),16);
    bufp->fullSData(oldp+1733,(0x6001U),16);
    bufp->fullSData(oldp+1734,(0xc001U),16);
    bufp->fullSData(oldp+1735,(0xe001U),16);
    bufp->fullSData(oldp+1736,(0x8001U),16);
    bufp->fullSData(oldp+1737,(0x8401U),16);
    bufp->fullSData(oldp+1738,(0x8801U),16);
    bufp->fullSData(oldp+1739,(0x8c01U),16);
    bufp->fullSData(oldp+1740,(0x8c21U),16);
    bufp->fullSData(oldp+1741,(0x8c41U),16);
    bufp->fullSData(oldp+1742,(0x8c61U),16);
    bufp->fullSData(oldp+1743,(2U),16);
    bufp->fullSData(oldp+1744,(0x4002U),16);
    bufp->fullSData(oldp+1745,(0xc002U),16);
    bufp->fullSData(oldp+1746,(0x8002U),16);
    bufp->fullSData(oldp+1747,(0x9002U),16);
    bufp->fullIData(oldp+1748,(0x1000U),32);
    bufp->fullIData(oldp+1749,(0x100U),32);
    bufp->fullIData(oldp+1750,(0x80U),32);
    bufp->fullIData(oldp+1751,(0x10U),32);
    bufp->fullSData(oldp+1752,(0x3a0U),12);
    bufp->fullSData(oldp+1753,(0x3b0U),12);
    bufp->fullIData(oldp+1754,(0xbU),32);
    bufp->fullIData(oldp+1755,(0xcU),32);
    bufp->fullIData(oldp+1756,(0x11U),32);
    bufp->fullIData(oldp+1757,(0x15U),32);
    bufp->fullIData(oldp+1758,(0x1eU),32);
    bufp->fullIData(oldp+1759,(0x16U),32);
    bufp->fullCData(oldp+1760,(5U),4);
    bufp->fullCData(oldp+1761,(0xaU),4);
    bufp->fullQData(oldp+1762,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[0]),34);
    bufp->fullQData(oldp+1764,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[1]),34);
    bufp->fullQData(oldp+1766,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[2]),34);
    bufp->fullQData(oldp+1768,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[3]),34);
    bufp->fullQData(oldp+1770,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[4]),34);
    bufp->fullQData(oldp+1772,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[5]),34);
    bufp->fullQData(oldp+1774,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[6]),34);
    bufp->fullQData(oldp+1776,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[7]),34);
    bufp->fullQData(oldp+1778,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[8]),34);
    bufp->fullQData(oldp+1780,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[9]),34);
    bufp->fullQData(oldp+1782,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[10]),34);
    bufp->fullQData(oldp+1784,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[11]),34);
    bufp->fullQData(oldp+1786,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[12]),34);
    bufp->fullQData(oldp+1788,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[13]),34);
    bufp->fullQData(oldp+1790,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[14]),34);
    bufp->fullQData(oldp+1792,(vlSymsp->TOP__ibex_pkg.__PVT__PmpAddrRst[15]),34);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_full_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vibex_simple_system___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_full_0\n"); );
    // Init
    Vibex_simple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_simple_system___024root*>(voidSelf);
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vibex_simple_system___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_full_0_sub_0(Vibex_simple_system___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vibex_simple_system___024root__trace_full_0_sub_0\n"); );
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+2,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+3,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_base[2]),32);
    bufp->fullIData(oldp+4,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+5,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+6,(vlSymsp->TOP__ibex_simple_system.__PVT__cfg_device_addr_mask[2]),32);
    bufp->fullIData(oldp+7,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask),32);
    bufp->fullCData(oldp+8,((((((IData)((0xffU == (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                                   >> 0x18U))) 
                                << 1U) | (0xffU == 
                                          (0xffU & 
                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                            >> 0x10U)))) 
                              << 2U) | (((IData)((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask 
                                                      >> 8U)))) 
                                         << 1U) | (0xffU 
                                                   == 
                                                   (0xffU 
                                                    & vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__b_wmask))))),4);
    bufp->fullBit(oldp+9,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk3__DOT__show_mem_paths));
    bufp->fullIData(oldp+10,(vlSymsp->TOP__ibex_simple_system.__PVT__u_simulator_ctrl__DOT__log_fd),32);
    bufp->fullIData(oldp+11,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_tag_rdata[0]),22);
    bufp->fullIData(oldp+12,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_tag_rdata[1]),22);
    bufp->fullQData(oldp+13,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_data_rdata[0]),64);
    bufp->fullQData(oldp+15,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__ic_data_rdata[1]),64);
    bufp->fullQData(oldp+17,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[0]),34);
    bufp->fullQData(oldp+19,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[1]),34);
    bufp->fullQData(oldp+21,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[2]),34);
    bufp->fullQData(oldp+23,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_addr[3]),34);
    bufp->fullBit(oldp+25,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [0U] >> 5U))));
    bufp->fullCData(oldp+26,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                    [0U] >> 3U))),2);
    bufp->fullBit(oldp+27,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [0U] >> 2U))));
    bufp->fullBit(oldp+28,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [0U] >> 1U))));
    bufp->fullBit(oldp+29,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                            [0U])));
    bufp->fullBit(oldp+30,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [1U] >> 5U))));
    bufp->fullCData(oldp+31,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                    [1U] >> 3U))),2);
    bufp->fullBit(oldp+32,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [1U] >> 2U))));
    bufp->fullBit(oldp+33,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [1U] >> 1U))));
    bufp->fullBit(oldp+34,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                            [1U])));
    bufp->fullBit(oldp+35,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [2U] >> 5U))));
    bufp->fullCData(oldp+36,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                    [2U] >> 3U))),2);
    bufp->fullBit(oldp+37,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [2U] >> 2U))));
    bufp->fullBit(oldp+38,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [2U] >> 1U))));
    bufp->fullBit(oldp+39,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                            [2U])));
    bufp->fullBit(oldp+40,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [3U] >> 5U))));
    bufp->fullCData(oldp+41,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                    [3U] >> 3U))),2);
    bufp->fullBit(oldp+42,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [3U] >> 2U))));
    bufp->fullBit(oldp+43,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                                  [3U] >> 1U))));
    bufp->fullBit(oldp+44,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_pmp_cfg
                            [3U])));
    bufp->fullBit(oldp+45,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[0]));
    bufp->fullBit(oldp+46,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[1]));
    bufp->fullBit(oldp+47,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pmp_req_err[2]));
    bufp->fullIData(oldp+48,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[0]),32);
    bufp->fullIData(oldp+49,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[1]),32);
    bufp->fullIData(oldp+50,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[2]),32);
    bufp->fullIData(oldp+51,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[3]),32);
    bufp->fullIData(oldp+52,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[4]),32);
    bufp->fullIData(oldp+53,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[5]),32);
    bufp->fullIData(oldp+54,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[6]),32);
    bufp->fullIData(oldp+55,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[7]),32);
    bufp->fullIData(oldp+56,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[8]),32);
    bufp->fullIData(oldp+57,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[9]),32);
    bufp->fullIData(oldp+58,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[10]),32);
    bufp->fullIData(oldp+59,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[11]),32);
    bufp->fullIData(oldp+60,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[12]),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[13]),32);
    bufp->fullIData(oldp+62,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[14]),32);
    bufp->fullIData(oldp+63,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_addr_rdata[15]),32);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[0]),8);
    bufp->fullCData(oldp+65,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[1]),8);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[2]),8);
    bufp->fullCData(oldp+67,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[3]),8);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[4]),8);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[5]),8);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[6]),8);
    bufp->fullCData(oldp+71,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[7]),8);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[8]),8);
    bufp->fullCData(oldp+73,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[9]),8);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[10]),8);
    bufp->fullCData(oldp+75,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[11]),8);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[12]),8);
    bufp->fullCData(oldp+77,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[13]),8);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[14]),8);
    bufp->fullCData(oldp+79,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__pmp_cfg_rdata[15]),8);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[0]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[1]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[2]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[3]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[4]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[5]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[6]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[7]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[8]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[9]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[10]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[11]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[12]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[13]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[14]),32);
    bufp->fullIData(oldp+95,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[15]),32);
    bufp->fullIData(oldp+96,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[16]),32);
    bufp->fullIData(oldp+97,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[17]),32);
    bufp->fullIData(oldp+98,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[18]),32);
    bufp->fullIData(oldp+99,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[19]),32);
    bufp->fullIData(oldp+100,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[20]),32);
    bufp->fullIData(oldp+101,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[21]),32);
    bufp->fullIData(oldp+102,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[22]),32);
    bufp->fullIData(oldp+103,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[23]),32);
    bufp->fullIData(oldp+104,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[24]),32);
    bufp->fullIData(oldp+105,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[25]),32);
    bufp->fullIData(oldp+106,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[26]),32);
    bufp->fullIData(oldp+107,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[27]),32);
    bufp->fullIData(oldp+108,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[28]),32);
    bufp->fullIData(oldp+109,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[29]),32);
    bufp->fullIData(oldp+110,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[30]),32);
    bufp->fullIData(oldp+111,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmevent[31]),32);
    bufp->fullIData(oldp+112,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[0]),32);
    bufp->fullIData(oldp+113,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_d[1]),32);
    bufp->fullQData(oldp+114,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[0]),34);
    bufp->fullQData(oldp+116,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[1]),34);
    bufp->fullQData(oldp+118,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[2]),34);
    bufp->fullQData(oldp+120,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_addr[3]),34);
    bufp->fullBit(oldp+122,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [0U] >> 5U))));
    bufp->fullCData(oldp+123,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [0U] >> 3U))),2);
    bufp->fullBit(oldp+124,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [0U] >> 2U))));
    bufp->fullBit(oldp+125,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [0U] >> 1U))));
    bufp->fullBit(oldp+126,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                             [0U])));
    bufp->fullBit(oldp+127,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [1U] >> 5U))));
    bufp->fullCData(oldp+128,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [1U] >> 3U))),2);
    bufp->fullBit(oldp+129,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [1U] >> 2U))));
    bufp->fullBit(oldp+130,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [1U] >> 1U))));
    bufp->fullBit(oldp+131,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                             [1U])));
    bufp->fullBit(oldp+132,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [2U] >> 5U))));
    bufp->fullCData(oldp+133,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [2U] >> 3U))),2);
    bufp->fullBit(oldp+134,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [2U] >> 2U))));
    bufp->fullBit(oldp+135,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [2U] >> 1U))));
    bufp->fullBit(oldp+136,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                             [2U])));
    bufp->fullBit(oldp+137,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [3U] >> 5U))));
    bufp->fullCData(oldp+138,((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                     [3U] >> 3U))),2);
    bufp->fullBit(oldp+139,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [3U] >> 2U))));
    bufp->fullBit(oldp+140,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                                   [3U] >> 1U))));
    bufp->fullBit(oldp+141,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_no_pmp__DOT__unused_csr_pmp_cfg
                             [3U])));
    bufp->fullBit(oldp+142,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_alu));
    bufp->fullIData(oldp+143,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[0]),22);
    bufp->fullIData(oldp+144,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_tag_ram_input[1]),22);
    bufp->fullQData(oldp+145,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[0]),64);
    bufp->fullQData(oldp+147,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__unused_data_ram_input[1]),64);
    bufp->fullBit(oldp+149,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__trace_log_enable));
    bufp->fullIData(oldp+150,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk1__DOT__fh),32);
    bufp->fullBit(oldp+151,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rvalid[0]));
    bufp->fullBit(oldp+152,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[0]));
    bufp->fullBit(oldp+153,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[1]));
    bufp->fullBit(oldp+154,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rvalid[2]));
    bufp->fullBit(oldp+155,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__decode_err_resp));
    bufp->fullBit(oldp+156,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_resp));
    bufp->fullCData(oldp+157,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_resp),2);
    bufp->fullBit(oldp+158,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_ram__a_rvalid_o));
    bufp->fullBit(oldp+159,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_simulator_ctrl__rvalid_o));
    bufp->fullCData(oldp+160,(vlSymsp->TOP__ibex_simple_system.__PVT__u_simulator_ctrl__DOT__sim_finish),3);
    bufp->fullBit(oldp+161,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rvalid_q));
    bufp->fullQData(oldp+162,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q),64);
    bufp->fullQData(oldp+164,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q)),64);
    bufp->fullQData(oldp+166,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q),64);
    bufp->fullBit(oldp+168,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rvalid
                            [0U]));
    bufp->fullCData(oldp+169,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q),4);
    bufp->fullBit(oldp+170,((1U & VL_REDXOR_32((7U 
                                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                                   >> 1U))))));
    bufp->fullIData(oldp+171,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_last_q),32);
    bufp->fullIData(oldp+172,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+173,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
    bufp->fullQData(oldp+174,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                              [0U]),64);
    bufp->fullBit(oldp+176,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap
                            [0U]));
    bufp->fullBit(oldp+177,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt
                            [0U]));
    bufp->fullBit(oldp+178,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr
                            [0U]));
    bufp->fullCData(oldp+179,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode
                              [0U]),2);
    bufp->fullCData(oldp+180,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl
                              [0U]),2);
    bufp->fullIData(oldp+181,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata
                              [0U]),32);
    bufp->fullIData(oldp+182,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_pre_mip),32);
    bufp->fullIData(oldp+183,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_post_mip),32);
    bufp->fullBit(oldp+184,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi
                            [1U]));
    bufp->fullBit(oldp+185,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int
                            [1U]));
    bufp->fullBit(oldp+186,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req
                            [1U]));
    bufp->fullBit(oldp+187,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode
                            [0U]));
    bufp->fullQData(oldp+188,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle
                              [0U]),64);
    bufp->fullIData(oldp+190,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[0]),32);
    bufp->fullIData(oldp+191,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[1]),32);
    bufp->fullIData(oldp+192,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[2]),32);
    bufp->fullIData(oldp+193,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[3]),32);
    bufp->fullIData(oldp+194,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[4]),32);
    bufp->fullIData(oldp+195,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[5]),32);
    bufp->fullIData(oldp+196,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[6]),32);
    bufp->fullIData(oldp+197,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[7]),32);
    bufp->fullIData(oldp+198,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[8]),32);
    bufp->fullIData(oldp+199,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcounters[9]),32);
    bufp->fullIData(oldp+200,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[0]),32);
    bufp->fullIData(oldp+201,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[1]),32);
    bufp->fullIData(oldp+202,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[2]),32);
    bufp->fullIData(oldp+203,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[3]),32);
    bufp->fullIData(oldp+204,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[4]),32);
    bufp->fullIData(oldp+205,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[5]),32);
    bufp->fullIData(oldp+206,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[6]),32);
    bufp->fullIData(oldp+207,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[7]),32);
    bufp->fullIData(oldp+208,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[8]),32);
    bufp->fullIData(oldp+209,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__rvfi_ext_mhpmcountersh[9]),32);
    bufp->fullBit(oldp+210,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid
                            [0U]));
    bufp->fullBit(oldp+211,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid
                            [1U]));
    bufp->fullIData(oldp+212,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[0]),32);
    bufp->fullIData(oldp+213,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[1]),32);
    bufp->fullIData(oldp+214,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[2]),32);
    bufp->fullIData(oldp+215,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[3]),32);
    bufp->fullIData(oldp+216,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[4]),32);
    bufp->fullIData(oldp+217,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[5]),32);
    bufp->fullIData(oldp+218,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[6]),32);
    bufp->fullIData(oldp+219,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[7]),32);
    bufp->fullIData(oldp+220,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[8]),32);
    bufp->fullIData(oldp+221,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regs[9]),32);
    bufp->fullIData(oldp+222,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[0]),32);
    bufp->fullIData(oldp+223,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[1]),32);
    bufp->fullIData(oldp+224,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[2]),32);
    bufp->fullIData(oldp+225,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[3]),32);
    bufp->fullIData(oldp+226,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[4]),32);
    bufp->fullIData(oldp+227,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[5]),32);
    bufp->fullIData(oldp+228,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[6]),32);
    bufp->fullIData(oldp+229,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[7]),32);
    bufp->fullIData(oldp+230,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[8]),32);
    bufp->fullIData(oldp+231,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__unused_perf_regsh[9]),32);
    bufp->fullIData(oldp+232,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[0]),32);
    bufp->fullIData(oldp+233,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[1]),32);
    bufp->fullIData(oldp+234,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[2]),32);
    bufp->fullIData(oldp+235,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[3]),32);
    bufp->fullIData(oldp+236,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[4]),32);
    bufp->fullIData(oldp+237,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[5]),32);
    bufp->fullIData(oldp+238,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[6]),32);
    bufp->fullIData(oldp+239,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[7]),32);
    bufp->fullIData(oldp+240,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[8]),32);
    bufp->fullIData(oldp+241,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[9]),32);
    bufp->fullIData(oldp+242,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[10]),32);
    bufp->fullIData(oldp+243,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[11]),32);
    bufp->fullIData(oldp+244,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[12]),32);
    bufp->fullIData(oldp+245,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[13]),32);
    bufp->fullIData(oldp+246,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[14]),32);
    bufp->fullIData(oldp+247,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[15]),32);
    bufp->fullIData(oldp+248,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[16]),32);
    bufp->fullIData(oldp+249,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[17]),32);
    bufp->fullIData(oldp+250,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[18]),32);
    bufp->fullIData(oldp+251,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[19]),32);
    bufp->fullIData(oldp+252,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[20]),32);
    bufp->fullIData(oldp+253,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[21]),32);
    bufp->fullIData(oldp+254,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[22]),32);
    bufp->fullIData(oldp+255,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[23]),32);
    bufp->fullIData(oldp+256,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[24]),32);
    bufp->fullIData(oldp+257,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[25]),32);
    bufp->fullIData(oldp+258,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[26]),32);
    bufp->fullIData(oldp+259,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[27]),32);
    bufp->fullIData(oldp+260,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[28]),32);
    bufp->fullIData(oldp+261,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[29]),32);
    bufp->fullIData(oldp+262,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[30]),32);
    bufp->fullIData(oldp+263,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[31]),32);
    bufp->fullIData(oldp+264,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+265,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+266,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+267,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+268,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+269,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+270,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+271,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+272,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+273,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+274,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+275,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+276,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+277,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+278,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+279,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+280,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+281,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+282,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+283,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+284,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+285,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+286,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+287,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+288,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+289,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+290,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+291,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+292,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+293,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q),32);
    bufp->fullIData(oldp+294,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q),32);
    bufp->fullBit(oldp+295,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_q));
    bufp->fullQData(oldp+296,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[0]),34);
    bufp->fullQData(oldp+298,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex[1]),34);
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 2U))));
    bufp->fullCData(oldp+302,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                     >> 3U))),3);
    bufp->fullBit(oldp+303,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req));
    bufp->fullBit(oldp+304,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
    bufp->fullBit(oldp+305,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
    bufp->fullBit(oldp+306,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 5U))));
    bufp->fullIData(oldp+307,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+308,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
    bufp->fullBit(oldp+309,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
    bufp->fullCData(oldp+310,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q),2);
    bufp->fullCData(oldp+311,((3U & ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                      ? ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                         >> 2U) : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
    bufp->fullBit(oldp+312,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
    bufp->fullCData(oldp+313,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_cause_q),3);
    bufp->fullBit(oldp+314,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 2U))));
    bufp->fullBit(oldp+315,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xfU))));
    bufp->fullBit(oldp+316,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xcU))));
    bufp->fullQData(oldp+317,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order[0]),64);
    bufp->fullBit(oldp+319,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_trap[0]));
    bufp->fullBit(oldp+320,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_halt[0]));
    bufp->fullBit(oldp+321,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_intr[0]));
    bufp->fullCData(oldp+322,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mode[0]),2);
    bufp->fullCData(oldp+323,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_ixl[0]),2);
    bufp->fullIData(oldp+324,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_wdata[0]),32);
    bufp->fullBit(oldp+325,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_q));
    bufp->fullBit(oldp+326,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_q));
    bufp->fullCData(oldp+327,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_q),5);
    bufp->fullCData(oldp+328,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_q),5);
    bufp->fullIData(oldp+329,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_q),32);
    bufp->fullIData(oldp+330,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_q),32);
    bufp->fullCData(oldp+331,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_q),5);
    bufp->fullIData(oldp+332,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_q),32);
    bufp->fullIData(oldp+333,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_q),32);
    bufp->fullIData(oldp+334,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_q),32);
    bufp->fullIData(oldp+335,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_q),32);
    bufp->fullBit(oldp+336,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_irq_valid));
    bufp->fullQData(oldp+337,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_order
                               [0U])),64);
    bufp->fullBit(oldp+339,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                   >> 0x11U))));
    bufp->fullBit(oldp+340,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                   >> 0x10U))));
    bufp->fullBit(oldp+341,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip 
                                   >> 0xfU))));
    bufp->fullSData(oldp+342,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_mip)),15);
    bufp->fullBit(oldp+343,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi));
    bufp->fullBit(oldp+344,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_nmi_int));
    bufp->fullBit(oldp+345,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_debug_req));
    bufp->fullBit(oldp+346,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__captured_valid));
    bufp->fullBit(oldp+347,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [0U] >> 0x11U))));
    bufp->fullBit(oldp+348,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [0U] >> 0x10U))));
    bufp->fullBit(oldp+349,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [0U] >> 0xfU))));
    bufp->fullSData(oldp+350,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                               [0U])),15);
    bufp->fullBit(oldp+351,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [1U] >> 0x11U))));
    bufp->fullBit(oldp+352,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [1U] >> 0x10U))));
    bufp->fullBit(oldp+353,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                                   [1U] >> 0xfU))));
    bufp->fullSData(oldp+354,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_pre_mip
                               [1U])),15);
    bufp->fullBit(oldp+355,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                   [0U] >> 0x11U))));
    bufp->fullBit(oldp+356,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                   [0U] >> 0x10U))));
    bufp->fullBit(oldp+357,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                                   [0U] >> 0xfU))));
    bufp->fullSData(oldp+358,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_post_mip
                               [0U])),15);
    bufp->fullBit(oldp+359,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[0]));
    bufp->fullBit(oldp+360,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi[1]));
    bufp->fullBit(oldp+361,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[0]));
    bufp->fullBit(oldp+362,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_nmi_int[1]));
    bufp->fullBit(oldp+363,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[0]));
    bufp->fullBit(oldp+364,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_req[1]));
    bufp->fullBit(oldp+365,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_debug_mode[0]));
    bufp->fullQData(oldp+366,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mcycle[0]),64);
    bufp->fullIData(oldp+368,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][0U]),32);
    bufp->fullIData(oldp+369,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][1U]),32);
    bufp->fullIData(oldp+370,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][2U]),32);
    bufp->fullIData(oldp+371,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][3U]),32);
    bufp->fullIData(oldp+372,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][4U]),32);
    bufp->fullIData(oldp+373,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][5U]),32);
    bufp->fullIData(oldp+374,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][6U]),32);
    bufp->fullIData(oldp+375,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][7U]),32);
    bufp->fullIData(oldp+376,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][8U]),32);
    bufp->fullIData(oldp+377,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcounters
                              [0U][9U]),32);
    bufp->fullIData(oldp+378,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][0U]),32);
    bufp->fullIData(oldp+379,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][1U]),32);
    bufp->fullIData(oldp+380,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][2U]),32);
    bufp->fullIData(oldp+381,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][3U]),32);
    bufp->fullIData(oldp+382,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][4U]),32);
    bufp->fullIData(oldp+383,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][5U]),32);
    bufp->fullIData(oldp+384,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][6U]),32);
    bufp->fullIData(oldp+385,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][7U]),32);
    bufp->fullIData(oldp+386,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][8U]),32);
    bufp->fullIData(oldp+387,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_mhpmcountersh
                              [0U][9U]),32);
    bufp->fullBit(oldp+388,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_ic_scr_key_valid[0]));
    bufp->fullBit(oldp+389,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[0]));
    bufp->fullBit(oldp+390,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_ext_stage_irq_valid[1]));
    bufp->fullBit(oldp+391,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 4U))));
    bufp->fullCData(oldp+392,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                     >> 2U))),2);
    bufp->fullBit(oldp+393,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+394,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                   >> 0x11U))));
    bufp->fullBit(oldp+395,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                   >> 0x10U))));
    bufp->fullBit(oldp+396,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                   >> 0xfU))));
    bufp->fullSData(oldp+397,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
    bufp->fullIData(oldp+398,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
    bufp->fullBit(oldp+399,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                   >> 6U))));
    bufp->fullBit(oldp+400,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q) 
                                   >> 5U))));
    bufp->fullCData(oldp+401,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q))),5);
    bufp->fullCData(oldp+402,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                               >> 0x1cU)),4);
    bufp->fullSData(oldp+403,((0xfffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                         >> 0x10U))),12);
    bufp->fullBit(oldp+404,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xeU))));
    bufp->fullBit(oldp+405,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xdU))));
    bufp->fullBit(oldp+406,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xbU))));
    bufp->fullBit(oldp+407,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 0xaU))));
    bufp->fullBit(oldp+408,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 9U))));
    bufp->fullCData(oldp+409,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                     >> 6U))),3);
    bufp->fullBit(oldp+410,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 5U))));
    bufp->fullBit(oldp+411,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 4U))));
    bufp->fullBit(oldp+412,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                   >> 3U))));
    bufp->fullCData(oldp+413,((3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
    bufp->fullIData(oldp+414,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
    bufp->fullIData(oldp+415,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
    bufp->fullBit(oldp+416,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                   >> 2U))));
    bufp->fullCData(oldp+417,((3U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
    bufp->fullCData(oldp+418,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                     >> 2U))),2);
    bufp->fullIData(oldp+419,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
    bufp->fullBit(oldp+420,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                   >> 6U))));
    bufp->fullBit(oldp+421,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q) 
                                   >> 5U))));
    bufp->fullCData(oldp+422,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q))),5);
    bufp->fullIData(oldp+423,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),32);
    bufp->fullCData(oldp+424,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
    bufp->fullQData(oldp+425,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
    bufp->fullQData(oldp+427,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
    bufp->fullQData(oldp+429,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
    bufp->fullQData(oldp+431,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
    bufp->fullQData(oldp+433,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
    bufp->fullQData(oldp+435,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
    bufp->fullQData(oldp+437,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
    bufp->fullQData(oldp+439,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
    bufp->fullQData(oldp+441,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
    bufp->fullQData(oldp+443,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
    bufp->fullQData(oldp+445,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
    bufp->fullQData(oldp+447,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
    bufp->fullQData(oldp+449,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
    bufp->fullQData(oldp+451,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
    bufp->fullQData(oldp+453,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
    bufp->fullQData(oldp+455,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
    bufp->fullQData(oldp+457,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
    bufp->fullQData(oldp+459,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
    bufp->fullQData(oldp+461,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
    bufp->fullQData(oldp+463,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
    bufp->fullQData(oldp+465,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
    bufp->fullQData(oldp+467,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
    bufp->fullQData(oldp+469,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
    bufp->fullQData(oldp+471,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
    bufp->fullQData(oldp+473,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
    bufp->fullQData(oldp+475,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
    bufp->fullQData(oldp+477,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
    bufp->fullQData(oldp+479,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
    bufp->fullQData(oldp+481,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
    bufp->fullQData(oldp+483,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
    bufp->fullQData(oldp+485,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
    bufp->fullQData(oldp+487,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
    bufp->fullQData(oldp+489,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
    bufp->fullQData(oldp+491,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
    bufp->fullBit(oldp+493,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 7U))));
    bufp->fullBit(oldp+494,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q) 
                                   >> 6U))));
    bufp->fullBit(oldp+495,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q))));
    bufp->fullQData(oldp+496,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
    bufp->fullQData(oldp+498,((1ULL + vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
    bufp->fullCData(oldp+500,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q),8);
    bufp->fullIData(oldp+501,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
    bufp->fullCData(oldp+502,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),7);
    bufp->fullIData(oldp+503,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
    bufp->fullCData(oldp+504,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),7);
    bufp->fullCData(oldp+505,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                     >> 2U))),3);
    bufp->fullCData(oldp+506,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
    bufp->fullCData(oldp+507,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
    bufp->fullQData(oldp+508,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
    bufp->fullIData(oldp+510,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
    bufp->fullIData(oldp+511,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
    bufp->fullIData(oldp+512,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
    bufp->fullIData(oldp+513,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
    bufp->fullIData(oldp+514,(((IData)(1U) << (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
    bufp->fullIData(oldp+515,((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                      [1U])),32);
    bufp->fullIData(oldp+516,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
    bufp->fullIData(oldp+517,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
    bufp->fullBit(oldp+518,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
    bufp->fullCData(oldp+519,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
    bufp->fullBit(oldp+520,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
    bufp->fullBit(oldp+521,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
    bufp->fullBit(oldp+522,((0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q))));
    bufp->fullCData(oldp+523,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
    bufp->fullCData(oldp+524,((3U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                             [1U] >> 0x20U)))),2);
    bufp->fullCData(oldp+525,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
    bufp->fullIData(oldp+526,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__g_rvfi_stages__BRA__0__KET____DOT__unnamedblk1__DOT__k),32);
    bufp->fullBit(oldp+527,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set));
    bufp->fullBit(oldp+528,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
    bufp->fullBit(oldp+529,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q));
    bufp->fullQData(oldp+530,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[0]),34);
    bufp->fullQData(oldp+532,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imd_val_q[1]),34);
    bufp->fullBit(oldp+534,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q));
    bufp->fullBit(oldp+535,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
    bufp->fullBit(oldp+536,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
    bufp->fullBit(oldp+537,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
    bufp->fullBit(oldp+538,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
    bufp->fullBit(oldp+539,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
    bufp->fullBit(oldp+540,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
    bufp->fullBit(oldp+541,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
    bufp->fullBit(oldp+542,((IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                      >> 5U) | (0U 
                                                == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))))));
    bufp->fullBit(oldp+543,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                   | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                      >> 2U)))));
    bufp->fullCData(oldp+544,((0xffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
    bufp->fullBit(oldp+545,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
    bufp->fullBit(oldp+546,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
    bufp->fullCData(oldp+547,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
    bufp->fullCData(oldp+548,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
    bufp->fullCData(oldp+549,(((2U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                      << 1U)) | (1U 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                    >> 1U)))),2);
    bufp->fullIData(oldp+550,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q),24);
    bufp->fullCData(oldp+551,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
    bufp->fullCData(oldp+552,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_type_q),2);
    bufp->fullBit(oldp+553,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_sign_ext_q));
    bufp->fullBit(oldp+554,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_we_q));
    bufp->fullBit(oldp+555,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_q));
    bufp->fullBit(oldp+556,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q));
    bufp->fullBit(oldp+557,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_q));
    bufp->fullCData(oldp+558,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
    bufp->fullBit(oldp+559,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q));
    bufp->fullBit(oldp+560,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q));
    bufp->fullBit(oldp+561,((((2U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                              | (1U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->fullIData(oldp+562,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+563,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                              [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U))]),32);
    bufp->fullBit(oldp+564,(((3U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                    >> 0x1cU)) > (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q))));
    bufp->fullBit(oldp+565,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr))));
    bufp->fullIData(oldp+566,((~ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                               [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0xfU))])),32);
    bufp->fullIData(oldp+567,((~ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg
                               [(0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U))])),32);
    bufp->fullIData(oldp+568,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex)
                                ? (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_q_ex
                                          [0U]) : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
    bufp->fullBit(oldp+569,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid) 
                             | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid))));
    bufp->fullQData(oldp+570,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                    ? (1ULL | ((QData)((IData)(
                                                               (0x7fffffffU 
                                                                & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a))) 
                                               << 2U))
                                    : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                        ? (1ULL | ((QData)((IData)(
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
    bufp->fullBit(oldp+572,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                ^ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)))));
    bufp->fullBit(oldp+573,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec))));
    bufp->fullBit(oldp+574,(((3U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec) 
                                | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                   & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec))))));
    bufp->fullBit(oldp+575,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec) 
                             | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req))));
    bufp->fullBit(oldp+576,((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result))));
    bufp->fullBit(oldp+577,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result)) 
                             & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_q)) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec)))));
    bufp->fullIData(oldp+578,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)
                                ? ((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 3U)) 
                                   << 2U) : (IData)(
                                                    (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))),32);
    bufp->fullBit(oldp+579,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) 
                             & (0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
    bufp->fullBit(oldp+580,(((2U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out) 
                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_addr_incr_req)))));
    bufp->fullCData(oldp+581,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy) 
                                | (((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req)) 
                                   | (0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))))
                                ? 5U : 0xaU)),4);
    bufp->fullBit(oldp+582,(((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                             | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req))));
    bufp->fullCData(oldp+583,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                ? (5U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)
                                : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
    bufp->fullBit(oldp+584,((1U & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q)) 
                                   & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr))));
    bufp->fullBit(oldp+585,((1U & ((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                       >> 2U)) & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                                  >> 2U)))));
    bufp->fullBit(oldp+586,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err))));
    bufp->fullBit(oldp+587,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_q))));
    bufp->fullIData(oldp+588,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[0]),32);
    bufp->fullIData(oldp+589,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[1]),32);
    bufp->fullIData(oldp+590,(vlSymsp->TOP__ibex_simple_system.__PVT__device_rdata[2]),32);
    bufp->fullBit(oldp+591,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[0]));
    bufp->fullBit(oldp+592,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[1]));
    bufp->fullBit(oldp+593,(vlSymsp->TOP__ibex_simple_system.__PVT__device_err[2]));
    bufp->fullIData(oldp+594,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rdata),32);
    bufp->fullIData(oldp+595,(vlSymsp->TOP__ibex_simple_system.__Vcellout__u_ram__a_rdata_o),32);
    bufp->fullIData(oldp+596,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+597,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rdata_q),32);
    bufp->fullBit(oldp+598,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__error_q));
    bufp->fullIData(oldp+599,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__file_handle),32);
    bufp->fullIData(oldp+600,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__unnamedblk2__DOT__fh),32);
    bufp->fullIData(oldp+601,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_id),32);
    bufp->fullIData(oldp+602,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                               << 1U)),32);
    bufp->fullCData(oldp+603,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+604,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+605,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 7U))),5);
    bufp->fullIData(oldp+606,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id),32);
    bufp->fullIData(oldp+607,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id),32);
    bufp->fullSData(oldp+608,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id),16);
    bufp->fullBit(oldp+609,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id));
    bufp->fullBit(oldp+610,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err));
    bufp->fullBit(oldp+611,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err_plus2));
    bufp->fullBit(oldp+612,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_c_insn_id));
    bufp->fullSData(oldp+613,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+614,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id)
                                ? (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_c_id)
                                : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
    bufp->fullBit(oldp+615,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dbg_csr));
    bufp->fullBit(oldp+616,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__illegal_csr));
    bufp->fullCData(oldp+617,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                     >> 0x19U))),3);
    bufp->fullIData(oldp+618,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x14U))),32);
    bufp->fullIData(oldp+619,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+620,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
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
    bufp->fullIData(oldp+621,((0xfffff000U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id)),32);
    bufp->fullIData(oldp+622,((((- (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id) 
                                              | (0x800U 
                                                 & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+623,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                        >> 0xfU))),32);
    bufp->fullBit(oldp+624,(((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                         >> 0x14U)) 
                             | (0x341U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)))));
    bufp->fullSData(oldp+625,(((0x3e0U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                          >> 0xaU)) 
                               | (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_alu_id 
                                           >> 7U)))),10);
    bufp->fullCData(oldp+626,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                               >> 0x1bU)),5);
    bufp->fullIData(oldp+627,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
    bufp->fullIData(oldp+628,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
    bufp->fullIData(oldp+629,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
    bufp->fullIData(oldp+630,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
    bufp->fullIData(oldp+631,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
    bufp->fullCData(oldp+632,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
    bufp->fullIData(oldp+633,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
    bufp->fullBit(oldp+634,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q));
    bufp->fullBit(oldp+635,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid));
    bufp->fullBit(oldp+636,(0U));
    bufp->fullBit(oldp+637,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q))));
    bufp->fullBit(oldp+638,(0U));
    bufp->fullSData(oldp+639,((0x7fffU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q) 
                                          << 0x10U))),15);
    bufp->fullIData(oldp+640,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__cycle),32);
    bufp->fullBit(oldp+641,((0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)));
    bufp->fullIData(oldp+642,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_rdata_int),32);
    bufp->fullBit(oldp+643,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid));
    bufp->fullBit(oldp+644,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                   >> 0x11U))));
    bufp->fullBit(oldp+645,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                   >> 0x10U))));
    bufp->fullBit(oldp+646,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs 
                                   >> 0xfU))));
    bufp->fullSData(oldp+647,((0x7fffU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)),15);
    bufp->fullBit(oldp+648,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__new_irq));
    bufp->fullBit(oldp+649,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__handle_irq));
    bufp->fullCData(oldp+650,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mfip_id),4);
    bufp->fullBit(oldp+651,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
    bufp->fullBit(oldp+652,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_update));
    bufp->fullBit(oldp+653,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1));
    bufp->fullBit(oldp+654,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2));
    bufp->fullBit(oldp+655,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid
                            [0U]));
    bufp->fullIData(oldp+656,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn
                              [0U]),32);
    bufp->fullCData(oldp+657,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr
                              [0U]),5);
    bufp->fullCData(oldp+658,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr
                              [0U]),5);
    bufp->fullCData(oldp+659,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr
                              [0U]),5);
    bufp->fullIData(oldp+660,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata
                              [0U]),32);
    bufp->fullIData(oldp+661,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata
                              [0U]),32);
    bufp->fullIData(oldp+662,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata
                              [0U]),32);
    bufp->fullCData(oldp+663,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr
                              [0U]),5);
    bufp->fullIData(oldp+664,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata
                              [0U]),32);
    bufp->fullIData(oldp+665,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata
                              [0U]),32);
    bufp->fullIData(oldp+666,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr
                              [0U]),32);
    bufp->fullCData(oldp+667,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask
                              [0U]),4);
    bufp->fullCData(oldp+668,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask
                              [0U]),4);
    bufp->fullIData(oldp+669,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata
                              [0U]),32);
    bufp->fullIData(oldp+670,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata
                              [0U]),32);
    bufp->fullBit(oldp+671,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q));
    bufp->fullBit(oldp+672,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle));
    bufp->fullCData(oldp+673,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_pc_mux_id),2);
    bufp->fullBit(oldp+674,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_req_int));
    bufp->fullBit(oldp+675,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering));
    bufp->fullBit(oldp+676,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_csr_save));
    bufp->fullBit(oldp+677,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid[0]));
    bufp->fullIData(oldp+678,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_insn[0]),32);
    bufp->fullCData(oldp+679,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_addr[0]),5);
    bufp->fullCData(oldp+680,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_addr[0]),5);
    bufp->fullCData(oldp+681,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_addr[0]),5);
    bufp->fullIData(oldp+682,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs1_rdata[0]),32);
    bufp->fullIData(oldp+683,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs2_rdata[0]),32);
    bufp->fullIData(oldp+684,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rs3_rdata[0]),32);
    bufp->fullCData(oldp+685,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_addr[0]),5);
    bufp->fullIData(oldp+686,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_rd_wdata[0]),32);
    bufp->fullIData(oldp+687,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_pc_rdata[0]),32);
    bufp->fullIData(oldp+688,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_addr[0]),32);
    bufp->fullCData(oldp+689,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rmask[0]),4);
    bufp->fullCData(oldp+690,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wmask[0]),4);
    bufp->fullIData(oldp+691,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_rdata[0]),32);
    bufp->fullIData(oldp+692,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_mem_wdata[0]),32);
    bufp->fullBit(oldp+693,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_intr_d));
    bufp->fullBit(oldp+694,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_run));
    bufp->fullCData(oldp+695,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
    bufp->fullBit(oldp+696,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
    bufp->fullBit(oldp+697,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
    bufp->fullCData(oldp+698,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                     >> 1U))),2);
    bufp->fullCData(oldp+699,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
    bufp->fullCData(oldp+700,((((IData)((2U == (6U 
                                                & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
                                << 2U) | (((IData)(
                                                   (1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))) 
                                           << 1U) | 
                                          (1U & (~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
    bufp->fullBit(oldp+701,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__insn_is_compressed));
    bufp->fullCData(oldp+702,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_tracer__DOT__data_accessed),5);
    bufp->fullBit(oldp+703,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready))));
    bufp->fullBit(oldp+704,(((7U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (7U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->fullBit(oldp+705,(((8U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (8U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->fullBit(oldp+706,(((9U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (9U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->fullBit(oldp+707,(((6U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                             & (6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)))));
    bufp->fullCData(oldp+708,(((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                 & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21))) 
                                << 2U) | ((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                            & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)
                                                : (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16))) 
                                           << 1U) | 
                                          (1U & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)) 
                                                 & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                     ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)
                                                     : 
                                                    ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                     | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))))),3);
    bufp->fullCData(oldp+709,((((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21) 
                                << 2U) | (((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q)))))),3);
    bufp->fullCData(oldp+710,(((((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)) 
                                << 2U) | ((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                             ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_21)
                                             : (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)) 
                                           << 1U) | 
                                          (1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo)
                                                  ? (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_16)
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_23) 
                                                  | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))))))),3);
    bufp->fullIData(oldp+711,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata[0]),32);
    bufp->fullBit(oldp+712,(vlSymsp->TOP__ibex_simple_system.__PVT__host_err[0]));
    bufp->fullIData(oldp+713,(vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                              [0U]),32);
    bufp->fullBit(oldp+714,(vlSymsp->TOP__ibex_simple_system.__PVT__host_err
                            [0U]));
    bufp->fullBit(oldp+715,(vlSymsp->TOP__ibex_simple_system.__PVT__host_req[0]));
    bufp->fullBit(oldp+716,(vlSymsp->TOP__ibex_simple_system.__PVT__host_gnt[0]));
    bufp->fullIData(oldp+717,(vlSymsp->TOP__ibex_simple_system.__PVT__host_addr[0]),32);
    bufp->fullBit(oldp+718,(vlSymsp->TOP__ibex_simple_system.__PVT__host_we[0]));
    bufp->fullCData(oldp+719,(vlSymsp->TOP__ibex_simple_system.__PVT__host_be[0]),4);
    bufp->fullIData(oldp+720,(vlSymsp->TOP__ibex_simple_system.__PVT__host_wdata[0]),32);
    bufp->fullBit(oldp+721,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[0]));
    bufp->fullBit(oldp+722,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[1]));
    bufp->fullBit(oldp+723,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req[2]));
    bufp->fullIData(oldp+724,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[0]),32);
    bufp->fullIData(oldp+725,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[1]),32);
    bufp->fullIData(oldp+726,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr[2]),32);
    bufp->fullBit(oldp+727,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[0]));
    bufp->fullBit(oldp+728,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[1]));
    bufp->fullBit(oldp+729,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we[2]));
    bufp->fullCData(oldp+730,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[0]),4);
    bufp->fullCData(oldp+731,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[1]),4);
    bufp->fullCData(oldp+732,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be[2]),4);
    bufp->fullIData(oldp+733,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[0]),32);
    bufp->fullIData(oldp+734,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[1]),32);
    bufp->fullIData(oldp+735,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata[2]),32);
    bufp->fullBit(oldp+736,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_valid));
    bufp->fullBit(oldp+737,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_valid));
    bufp->fullBit(oldp+738,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__host_sel_req));
    bufp->fullCData(oldp+739,(vlSymsp->TOP__ibex_simple_system.__PVT__u_bus__DOT__device_sel_req),2);
    bufp->fullBit(oldp+740,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                            [0U]));
    bufp->fullBit(oldp+741,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                            [0U]));
    bufp->fullCData(oldp+742,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                              [0U]),4);
    bufp->fullIData(oldp+743,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                              [0U]),32);
    bufp->fullIData(oldp+744,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                              [0U]),32);
    bufp->fullIData(oldp+745,((0x3ffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                           [0U] >> 2U))),18);
    bufp->fullSData(oldp+746,(((0x3ffcU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                           [0U] >> 0x12U)) 
                               | (3U & vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                  [0U]))),14);
    bufp->fullIData(oldp+747,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__a_wmask),32);
    bufp->fullCData(oldp+748,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__a_wmask),4);
    bufp->fullBit(oldp+749,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                            [1U]));
    bufp->fullBit(oldp+750,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                            [1U]));
    bufp->fullCData(oldp+751,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                              [1U]),4);
    bufp->fullIData(oldp+752,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                              [1U]),32);
    bufp->fullIData(oldp+753,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                              [1U]),32);
    bufp->fullCData(oldp+754,((0xffU & (vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                        [1U] >> 2U))),8);
    bufp->fullBit(oldp+755,(vlSymsp->TOP__ibex_simple_system.__PVT__device_req
                            [2U]));
    bufp->fullIData(oldp+756,(vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                              [2U]),32);
    bufp->fullBit(oldp+757,(vlSymsp->TOP__ibex_simple_system.__PVT__device_we
                            [2U]));
    bufp->fullCData(oldp+758,(vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                              [2U]),4);
    bufp->fullIData(oldp+759,(vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                              [2U]),32);
    bufp->fullBit(oldp+760,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we));
    bufp->fullBit(oldp+761,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we) 
                             & (0U == (0x3ffU & vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                       [2U])))));
    bufp->fullBit(oldp+762,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__timer_we) 
                             & (4U == (0x3ffU & vlSymsp->TOP__ibex_simple_system.__PVT__device_addr
                                       [2U])))));
    bufp->fullBit(oldp+763,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_we));
    bufp->fullBit(oldp+764,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmph_we));
    bufp->fullBit(oldp+765,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__error_d));
    bufp->fullBit(oldp+766,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__data_req_out));
    bufp->fullBit(oldp+767,(vlSymsp->TOP__ibex_simple_system.__PVT__host_gnt
                            [0U]));
    bufp->fullBit(oldp+768,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we));
    bufp->fullCData(oldp+769,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_be),4);
    bufp->fullIData(oldp+770,(((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                        >> 3U)) << 2U)),32);
    bufp->fullIData(oldp+771,(((1U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                              >> 2U)))
                                ? ((1U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))
                                    ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                        << 0x18U) | 
                                       (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                        >> 8U)) : (
                                                   (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                    << 0x10U) 
                                                   | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                      >> 0x10U)))
                                : ((1U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 1U)))
                                    ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                        << 8U) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata 
                                                  >> 0x18U))
                                    : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata))),32);
    bufp->fullQData(oldp+772,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[0]),34);
    bufp->fullQData(oldp+774,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_d_ex[1]),34);
    bufp->fullCData(oldp+776,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__imd_val_we_ex),2);
    bufp->fullBit(oldp+777,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__icache_inval));
    bufp->fullCData(oldp+778,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id),3);
    bufp->fullIData(oldp+779,((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                       >> 1U))),32);
    bufp->fullBit(oldp+780,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
    bufp->fullBit(oldp+781,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_a));
    bufp->fullBit(oldp+782,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_ren_b));
    bufp->fullBit(oldp+783,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_id));
    bufp->fullCData(oldp+784,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator),7);
    bufp->fullIData(oldp+785,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a),32);
    bufp->fullIData(oldp+786,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex),32);
    bufp->fullIData(oldp+787,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__result_ex),32);
    bufp->fullBit(oldp+788,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec))));
    bufp->fullBit(oldp+789,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec))));
    bufp->fullBit(oldp+790,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__mult_sel_ex));
    bufp->fullBit(oldp+791,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__div_sel_ex));
    bufp->fullCData(oldp+792,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_operator),2);
    bufp->fullCData(oldp+793,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
    bufp->fullIData(oldp+794,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex),32);
    bufp->fullIData(oldp+795,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_b_ex),32);
    bufp->fullBit(oldp+796,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access));
    bufp->fullCData(oldp+797,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op),2);
    bufp->fullBit(oldp+798,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id));
    bufp->fullCData(oldp+799,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_type),2);
    bufp->fullBit(oldp+800,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_sign_ext));
    bufp->fullBit(oldp+801,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req));
    bufp->fullIData(oldp+802,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_wdata),32);
    bufp->fullBit(oldp+803,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_valid));
    bufp->fullBit(oldp+804,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_id));
    bufp->fullBit(oldp+805,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_mret_id));
    bufp->fullBit(oldp+806,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_restore_dret_id));
    bufp->fullIData(oldp+807,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtval),32);
    bufp->fullBit(oldp+808,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_jump));
    bufp->fullBit(oldp+809,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_branch));
    bufp->fullBit(oldp+810,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_tbranch));
    bufp->fullBit(oldp+811,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_load));
    bufp->fullBit(oldp+812,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_store));
    bufp->fullBit(oldp+813,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id));
    bufp->fullCData(oldp+814,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_addr_d),5);
    bufp->fullCData(oldp+815,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_addr_d),5);
    bufp->fullIData(oldp+816,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs1_data_d),32);
    bufp->fullIData(oldp+817,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rs2_data_d),32);
    bufp->fullCData(oldp+818,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_mask_int),4);
    bufp->fullIData(oldp+819,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_wdata_d),32);
    bufp->fullIData(oldp+820,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_addr_d),32);
    bufp->fullBit(oldp+821,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr));
    bufp->fullIData(oldp+822,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_result),32);
    bufp->fullQData(oldp+823,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
    bufp->fullQData(oldp+825,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
    bufp->fullBit(oldp+827,((0U == (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                            >> 1U)))));
    bufp->fullBit(oldp+828,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel));
    bufp->fullQData(oldp+829,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
    bufp->fullQData(oldp+831,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
    bufp->fullCData(oldp+833,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) 
                                << 1U) | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                          | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal)))),2);
    bufp->fullIData(oldp+834,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
    bufp->fullQData(oldp+835,((0x1ffffffffULL & (~ 
                                                 ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                                  << 1U)))),33);
    bufp->fullBit(oldp+837,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
    bufp->fullBit(oldp+838,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
    bufp->fullBit(oldp+839,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
    bufp->fullBit(oldp+840,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
    bufp->fullQData(oldp+841,((0x1ffffffffULL & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_sel)
                                                  ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                                  : 
                                                 ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                   ? 
                                                  (~ 
                                                   ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                                    << 1U))
                                                   : 
                                                  ((QData)((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                                   << 1U))))),33);
    bufp->fullBit(oldp+843,((1U & (((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                     ^ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex) 
                                    >> 0x1fU) ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                    : (~ (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x20U)))))));
    bufp->fullBit(oldp+844,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
    bufp->fullBit(oldp+845,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
    bufp->fullBit(oldp+846,((8U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator))));
    bufp->fullCData(oldp+847,((0x3fU & ((IData)(0x20U) 
                                        - (0x1fU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)))),6);
    bufp->fullIData(oldp+848,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
    bufp->fullQData(oldp+849,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
    bufp->fullQData(oldp+851,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
    bufp->fullBit(oldp+853,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
    bufp->fullIData(oldp+854,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
    bufp->fullIData(oldp+855,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
    bufp->fullCData(oldp+856,(((0x10U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                                         >> 0x18U))))) 
                                         << 4U)) | 
                               (0xfU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                        >> 0x18U)))),5);
    bufp->fullCData(oldp+857,((0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex 
                                        >> 0x10U))),5);
    bufp->fullBit(oldp+858,(((3U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                             | (6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
    bufp->fullBit(oldp+859,(((4U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)) 
                             | (7U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operator)))));
    bufp->fullIData(oldp+860,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               | vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+861,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+862,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_operand_a 
                               ^ vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)),32);
    bufp->fullIData(oldp+863,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
    bufp->fullBit(oldp+864,((1U & (((IData)(0x20U) 
                                    - (0x1fU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)) 
                                   >> 5U))));
    bufp->fullQData(oldp+865,((0x7ffffffffULL & (VL_MULS_QQQ(35, 
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
                                                 VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
    bufp->fullQData(oldp+867,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
    bufp->fullBit(oldp+869,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
    bufp->fullBit(oldp+870,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
    bufp->fullBit(oldp+871,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
    bufp->fullBit(oldp+872,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_signed_mode))));
    bufp->fullQData(oldp+873,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
    bufp->fullQData(oldp+875,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
    bufp->fullQData(oldp+877,((0x3ffffffffULL & ((0x7ffffffffULL 
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
                                                 + 
                                                 (0x7ffffffffULL 
                                                  & VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
    bufp->fullBit(oldp+879,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
    bufp->fullBit(oldp+880,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
    bufp->fullBit(oldp+881,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
    bufp->fullIData(oldp+882,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
    bufp->fullIData(oldp+883,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
    bufp->fullIData(oldp+884,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
    bufp->fullIData(oldp+885,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
    bufp->fullQData(oldp+886,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
    bufp->fullCData(oldp+888,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
    bufp->fullBit(oldp+889,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                             | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
    bufp->fullBit(oldp+890,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
    bufp->fullBit(oldp+891,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
    bufp->fullBit(oldp+892,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
    bufp->fullBit(oldp+893,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
    bufp->fullCData(oldp+894,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
    bufp->fullBit(oldp+895,((1U & (IData)((1ULL & (
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
                                                    + 
                                                    VL_EXTENDS_QQ(35,34, vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                   >> 0x22U))))));
    bufp->fullCData(oldp+896,(((2U & ((IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                               >> 0x21U)) 
                                      << 1U)) | (1U 
                                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
    bufp->fullSData(oldp+897,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
    bufp->fullSData(oldp+898,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
    bufp->fullCData(oldp+899,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
    bufp->fullBit(oldp+900,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
    bufp->fullBit(oldp+901,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn));
    bufp->fullBit(oldp+902,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mret_insn_dec));
    bufp->fullBit(oldp+903,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__dret_insn_dec));
    bufp->fullBit(oldp+904,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec));
    bufp->fullBit(oldp+905,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__wfi_insn_dec));
    bufp->fullBit(oldp+906,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
    bufp->fullBit(oldp+907,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_in_dec));
    bufp->fullBit(oldp+908,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_set_raw_d));
    bufp->fullBit(oldp+909,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_in_dec));
    bufp->fullBit(oldp+910,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_dec));
    bufp->fullBit(oldp+911,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set));
    bufp->fullBit(oldp+912,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw));
    bufp->fullBit(oldp+913,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec));
    bufp->fullBit(oldp+914,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
    bufp->fullIData(oldp+915,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b),32);
    bufp->fullBit(oldp+916,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_wdata_sel));
    bufp->fullBit(oldp+917,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
    bufp->fullBit(oldp+918,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_we_raw));
    bufp->fullBit(oldp+919,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_a_dec));
    bufp->fullBit(oldp+920,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__rf_ren_b_dec));
    bufp->fullCData(oldp+921,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
    bufp->fullCData(oldp+922,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
    bufp->fullBit(oldp+923,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
    bufp->fullBit(oldp+924,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel));
    bufp->fullCData(oldp+925,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
    bufp->fullCData(oldp+926,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
    bufp->fullBit(oldp+927,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec));
    bufp->fullBit(oldp+928,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec));
    bufp->fullBit(oldp+929,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multdiv_en_dec));
    bufp->fullBit(oldp+930,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec));
    bufp->fullBit(oldp+931,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
    bufp->fullBit(oldp+932,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
    bufp->fullBit(oldp+933,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
    bufp->fullBit(oldp+934,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
    bufp->fullBit(oldp+935,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
    bufp->fullBit(oldp+936,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
    bufp->fullBit(oldp+937,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
    bufp->fullBit(oldp+938,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
    bufp->fullBit(oldp+939,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
    bufp->fullBit(oldp+940,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
    bufp->fullBit(oldp+941,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
    bufp->fullBit(oldp+942,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
    bufp->fullBit(oldp+943,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
    bufp->fullBit(oldp+944,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
    bufp->fullBit(oldp+945,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
    bufp->fullBit(oldp+946,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
    bufp->fullCData(oldp+947,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
    bufp->fullCData(oldp+948,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
    bufp->fullCData(oldp+949,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
    bufp->fullCData(oldp+950,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
    bufp->fullBit(oldp+951,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
    bufp->fullBit(oldp+952,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ctrl_update));
    bufp->fullCData(oldp+953,((3U & (IData)((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 1U)))),2);
    bufp->fullBit(oldp+954,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__split_misaligned_access));
    bufp->fullBit(oldp+955,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__mult_en_dec) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->fullBit(oldp+956,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__div_en_dec) 
                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv))));
    bufp->fullBit(oldp+957,(((0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access) 
                                & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id))))));
    bufp->fullBit(oldp+958,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_access)) 
                             & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_insn_id)))));
    bufp->fullBit(oldp+959,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                             | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                                   | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err))))));
    bufp->fullBit(oldp+960,(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req));
    bufp->fullIData(oldp+961,((0xfffffffcU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d)),32);
    bufp->fullIData(oldp+962,((0x3ffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                           >> 2U))),18);
    bufp->fullSData(oldp+963,((0x3ffcU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                          >> 0x12U))),14);
    bufp->fullQData(oldp+964,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_d),64);
    bufp->fullQData(oldp+966,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_d),64);
    bufp->fullIData(oldp+968,(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__rdata_d),32);
    bufp->fullBit(oldp+969,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__double_fault_seen_o));
    bufp->fullBit(oldp+970,((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
    bufp->fullIData(oldp+971,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb),32);
    bufp->fullIData(oldp+972,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec),32);
    bufp->fullBit(oldp+973,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec)));
    bufp->fullBit(oldp+974,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear));
    bufp->fullBit(oldp+975,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set));
    bufp->fullBit(oldp+976,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                   >> 6U))));
    bufp->fullBit(oldp+977,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause) 
                                   >> 5U))));
    bufp->fullCData(oldp+978,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))),5);
    bufp->fullBit(oldp+979,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__load_err_d));
    bufp->fullBit(oldp+980,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__store_err_d));
    bufp->fullBit(oldp+981,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ctrl_busy));
    bufp->fullIData(oldp+982,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
    bufp->fullBit(oldp+983,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_we_lsu));
    bufp->fullIData(oldp+984,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_id),32);
    bufp->fullBit(oldp+985,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en));
    bufp->fullBit(oldp+986,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_ready));
    bufp->fullBit(oldp+987,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err));
    bufp->fullBit(oldp+988,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__en_wb));
    bufp->fullBit(oldp+989,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_if));
    bufp->fullBit(oldp+990,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_save_cause));
    bufp->fullBit(oldp+991,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init));
    bufp->fullBit(oldp+992,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb));
    bufp->fullBit(oldp+993,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_set_trap_pc_d));
    bufp->fullCData(oldp+994,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_addr_d),5);
    bufp->fullIData(oldp+995,(((0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))
                                ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rf_wdata_wb
                                : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_rdata_ext)),32);
    bufp->fullIData(oldp+996,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_wdata_d),32);
    bufp->fullBit(oldp+997,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_rd_we_wb));
    bufp->fullIData(oldp+998,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_mem_rdata_d),32);
    bufp->fullBit(oldp+999,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_id_done));
    bufp->fullBit(oldp+1000,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__rvfi_stage_valid_d[0]));
    bufp->fullIData(oldp+1001,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__exception_pc),32);
    bufp->fullCData(oldp+1002,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__priv_lvl_d),2);
    bufp->fullBit(oldp+1003,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                    >> 5U))));
    bufp->fullBit(oldp+1004,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                    >> 4U))));
    bufp->fullCData(oldp+1005,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                      >> 2U))),2);
    bufp->fullBit(oldp+1006,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d) 
                                    >> 1U))));
    bufp->fullBit(oldp+1007,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d))));
    bufp->fullBit(oldp+1008,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_en));
    bufp->fullBit(oldp+1009,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 3U))));
    bufp->fullBit(oldp+1010,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 7U))));
    bufp->fullBit(oldp+1011,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 0xbU))));
    bufp->fullSData(oldp+1012,((0x7fffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                           >> 0x10U))),15);
    bufp->fullBit(oldp+1013,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mie_en));
    bufp->fullBit(oldp+1014,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mscratch_en));
    bufp->fullIData(oldp+1015,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_d),32);
    bufp->fullBit(oldp+1016,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mepc_en));
    bufp->fullBit(oldp+1017,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                    >> 6U))));
    bufp->fullBit(oldp+1018,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d) 
                                    >> 5U))));
    bufp->fullCData(oldp+1019,((0x1fU & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d))),5);
    bufp->fullBit(oldp+1020,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_en));
    bufp->fullIData(oldp+1021,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_d),32);
    bufp->fullBit(oldp+1022,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtval_en));
    bufp->fullIData(oldp+1023,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_mtvec_init)
                                 ? 0x100001U : (1U 
                                                | (0xffffff00U 
                                                   & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
    bufp->fullBit(oldp+1024,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mtvec_en));
    bufp->fullCData(oldp+1025,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                >> 0x1cU)),4);
    bufp->fullSData(oldp+1026,((0xfffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                          >> 0x10U))),12);
    bufp->fullBit(oldp+1027,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1028,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1029,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1030,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1031,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1032,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1033,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 9U))));
    bufp->fullCData(oldp+1034,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                      >> 6U))),3);
    bufp->fullBit(oldp+1035,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 5U))));
    bufp->fullBit(oldp+1036,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 4U))));
    bufp->fullBit(oldp+1037,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 3U))));
    bufp->fullBit(oldp+1038,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d 
                                    >> 2U))));
    bufp->fullCData(oldp+1039,((3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d)),2);
    bufp->fullBit(oldp+1040,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_en));
    bufp->fullIData(oldp+1041,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_d),32);
    bufp->fullBit(oldp+1042,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__depc_en));
    bufp->fullBit(oldp+1043,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch0_en));
    bufp->fullBit(oldp+1044,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dscratch1_en));
    bufp->fullBit(oldp+1045,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstack_en));
    bufp->fullBit(oldp+1046,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcountinhibit_we));
    bufp->fullIData(oldp+1047,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
    bufp->fullIData(oldp+1048,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
    bufp->fullIData(oldp+1049,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
    bufp->fullBit(oldp+1050,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                    >> 1U))));
    bufp->fullBit(oldp+1051,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                    >> 1U))));
    bufp->fullBit(oldp+1052,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                    >> 1U))));
    bufp->fullBit(oldp+1053,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                    >> 7U))));
    bufp->fullBit(oldp+1054,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                    >> 6U))));
    bufp->fullCData(oldp+1055,((7U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                      >> 3U))),3);
    bufp->fullBit(oldp+1056,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                    >> 2U))));
    bufp->fullBit(oldp+1057,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d) 
                                    >> 1U))));
    bufp->fullBit(oldp+1058,((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d))));
    bufp->fullBit(oldp+1059,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 6U))));
    bufp->fullCData(oldp+1060,((7U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                      >> 3U))),3);
    bufp->fullBit(oldp+1061,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 2U))));
    bufp->fullBit(oldp+1062,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 1U))));
    bufp->fullBit(oldp+1063,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int)));
    bufp->fullBit(oldp+1064,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_we));
    bufp->fullIData(oldp+1065,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int),32);
    bufp->fullBit(oldp+1066,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_we_int));
    bufp->fullIData(oldp+1067,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                >> 3U)),29);
    bufp->fullIData(oldp+1068,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                >> 3U)),29);
    bufp->fullIData(oldp+1069,((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                >> 3U)),29);
    bufp->fullBit(oldp+1070,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
    bufp->fullBit(oldp+1071,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we)));
    bufp->fullQData(oldp+1072,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
    bufp->fullBit(oldp+1074,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
    bufp->fullQData(oldp+1075,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
    bufp->fullBit(oldp+1077,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                    >> 2U))));
    bufp->fullBit(oldp+1078,((1U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                    >> 2U))));
    bufp->fullQData(oldp+1079,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
    bufp->fullBit(oldp+1081,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
    bufp->fullQData(oldp+1082,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
    bufp->fullCData(oldp+1084,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__cpuctrlsts_part_d),8);
    bufp->fullIData(oldp+1085,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__dcsr_d),32);
    bufp->fullCData(oldp+1086,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mcause_d),7);
    bufp->fullIData(oldp+1087,(((0x20000U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             << 0xeU)) 
                                | ((0x10000U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                << 9U)) 
                                   | ((0x8000U & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                  << 4U)) 
                                      | (0x7fffU & 
                                         (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                          >> 0x10U)))))),18);
    bufp->fullCData(oldp+1088,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__mstatus_d),6);
    bufp->fullBit(oldp+1089,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_multdiv));
    bufp->fullBit(oldp+1090,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_branch));
    bufp->fullBit(oldp+1091,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_jump));
    bufp->fullBit(oldp+1092,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__stall_id));
    bufp->fullBit(oldp+1093,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__multicycle_done));
    bufp->fullBit(oldp+1094,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__id_fsm_d));
    bufp->fullCData(oldp+1095,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
    bufp->fullBit(oldp+1096,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
    bufp->fullBit(oldp+1097,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
    bufp->fullBit(oldp+1098,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
    bufp->fullBit(oldp+1099,((6U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns))));
    bufp->fullBit(oldp+1100,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_d));
    bufp->fullBit(oldp+1101,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_new_id_d));
    bufp->fullIData(oldp+1102,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr),32);
    bufp->fullBit(oldp+1103,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw));
    bufp->fullIData(oldp+1104,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata),32);
    bufp->fullBit(oldp+1105,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err));
    bufp->fullIData(oldp+1106,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_decompressed),32);
    bufp->fullBit(oldp+1107,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__illegal_c_insn));
    bufp->fullBit(oldp+1108,((3U != (3U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_rdata))));
    bufp->fullIData(oldp+1109,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc),32);
    bufp->fullCData(oldp+1110,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__irq_vec),5);
    bufp->fullBit(oldp+1111,((IData)((0U != (0x60U 
                                             & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__exc_cause))))));
    bufp->fullBit(oldp+1112,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_err)) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__fetch_valid_raw))));
    bufp->fullBit(oldp+1113,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
    bufp->fullBit(oldp+1114,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
    bufp->fullCData(oldp+1115,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
    bufp->fullCData(oldp+1116,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
    bufp->fullIData(oldp+1117,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d),32);
    bufp->fullBit(oldp+1118,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_req)) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6))));
    bufp->fullBit(oldp+1119,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                              | (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6))));
    bufp->fullIData(oldp+1120,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
    bufp->fullIData(oldp+1121,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
    bufp->fullIData(oldp+1122,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
    bufp->fullCData(oldp+1123,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
    bufp->fullBit(oldp+1124,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
    bufp->fullIData(oldp+1125,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
    bufp->fullBit(oldp+1126,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
    bufp->fullBit(oldp+1127,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
    bufp->fullBit(oldp+1128,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
    bufp->fullBit(oldp+1129,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
    bufp->fullBit(oldp+1130,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set) 
                              | (IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT____VdfgRegularize_hb4cbc9db_0_9))));
    bufp->fullBit(oldp+1131,((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr)));
    bufp->fullBit(oldp+1132,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__addr_update));
    bufp->fullIData(oldp+1133,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_h_ext),32);
    bufp->fullIData(oldp+1134,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_b_ext),32);
    bufp->fullBit(oldp+1135,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__handle_misaligned_d));
    bufp->fullBit(oldp+1136,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__pmp_err_d));
    bufp->fullBit(oldp+1137,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__lsu_err_d));
    bufp->fullBit(oldp+1138,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__data_or_pmp_err));
    bufp->fullCData(oldp+1139,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
    bufp->fullIData(oldp+1140,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
    bufp->fullIData(oldp+1141,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
    bufp->fullCData(oldp+1142,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
    bufp->fullBit(oldp+1143,(vlSelfRef.IO_CLK));
    bufp->fullBit(oldp+1144,(vlSelfRef.IO_RST_N));
    bufp->fullBit(oldp+1145,(vlSymsp->TOP__ibex_simple_system.__PVT__clk_sys));
    bufp->fullIData(oldp+1146,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_set_mem__Vstatic__valid),32);
    bufp->fullIData(oldp+1147,(vlSymsp->TOP__ibex_simple_system.__PVT__u_ram__DOT__u_ram__DOT__gen_generic__DOT__u_impl_generic__DOT__simutil_get_mem__Vstatic__valid),32);
    bufp->fullIData(oldp+1148,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
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
                                                 ? 
                                                (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                 [2U] 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                            >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & ((1U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                               [2U]
                                                : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q)))))),32);
    bufp->fullIData(oldp+1149,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
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
                                                 ? 
                                                (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                 [2U] 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                            >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & ((1U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                               [2U]
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                                           >> 0x20U))))))),32);
    bufp->fullIData(oldp+1150,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
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
                                                 ? 
                                                (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                 [2U] 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                            >> 8U))) 
                                               << 8U)) 
                                   | (0xffU & ((1U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                               [2U]
                                                : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q)))))),32);
    bufp->fullIData(oldp+1151,((((((8U & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
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
                                                 ? 
                                                (vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                                 [2U] 
                                                 >> 8U)
                                                 : (IData)(
                                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                            >> 0x28U))) 
                                               << 8U)) 
                                   | (0xffU & ((1U 
                                                & vlSymsp->TOP__ibex_simple_system.__PVT__device_be
                                                [2U])
                                                ? vlSymsp->TOP__ibex_simple_system.__PVT__device_wdata
                                               [2U]
                                                : (IData)(
                                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x20U))))))),32);
    bufp->fullBit(oldp+1152,(((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_we) 
                                  | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmph_we))) 
                              & ((vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtime_q 
                                  >= vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__mtimecmp_q) 
                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_timer__DOT__interrupt_q)))));
    bufp->fullBit(oldp+1153,((1U & (~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                       | (0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs))))));
    bufp->fullBit(oldp+1154,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__clk));
    bufp->fullBit(oldp+1155,((1U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_busy_q) 
                                    | (0U != vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__irqs)))));
    bufp->fullBit(oldp+1156,(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch));
    bufp->fullBit(oldp+1157,((1U & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn)) 
                                    & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ecall_insn_dec)) 
                                       & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn)) 
                                          & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__illegal_csr_insn_id)) 
                                             & (~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_fetch_err)))))))));
    bufp->fullBit(oldp+1158,((1U & ((~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__debug_mode_entering) 
                                        | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q))) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_cpuctrlsts_part_csr__DOT__rdata_q)))));
    bufp->fullBit(oldp+1159,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we)) 
                              & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                 & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))))));
    bufp->fullBit(oldp+1160,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                               & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)) 
                                  & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec))) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_we))));
    bufp->fullBit(oldp+1161,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_req) 
                               | (0U != (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                              & (0U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
    bufp->fullBit(oldp+1162,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__perf_instr_ret_wb) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_is_compressed_id))));
    bufp->fullBit(oldp+1163,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_executing_spec) 
                              & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec)))));
    bufp->fullCData(oldp+1164,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                 ? 0U : (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU)))),5);
    bufp->fullIData(oldp+1165,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                 ? 0U : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__multdiv_operand_a_ex)),32);
    bufp->fullBit(oldp+1166,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d) 
                               | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_err)) 
                              & (~ ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__ebrk_insn) 
                                    & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))))));
    bufp->fullBit(oldp+1167,(((3U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                      >> 0x1eU)) & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))));
    bufp->fullCData(oldp+1168,((0x1fU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle)
                                          ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex
                                          : (- vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__alu_operand_b_ex)))),6);
    bufp->fullBit(oldp+1169,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_valid_clear)) 
                              & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                 | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__branch_jump_set_done_q) 
                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__jump_set_raw))))));
    bufp->fullBit(oldp+1170,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q) 
                              & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__lsu_req_dec) 
                                 & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__lsu_resp_valid)) 
                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__instr_first_cycle))))));
    bufp->fullIData(oldp+1171,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                 ? 0U : (0x1fU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0xfU)))),32);
    bufp->fullBit(oldp+1172,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                              & ((~ ((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                 >> 0x14U)) 
                                     | (0x341U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                   >> 0x14U)))) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr)))));
    bufp->fullCData(oldp+1173,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug))
                                 ? 1U : ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d)
                                          ? 4U : 0U))),3);
    bufp->fullBit(oldp+1174,(((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                              | (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                                  & ((~ ((0x340U == 
                                          (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                           >> 0x14U)) 
                                         | (0x341U 
                                            == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                >> 0x14U)))) 
                                     & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                                 & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q)))));
    bufp->fullBit(oldp+1175,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__csr_op_en) 
                               & ((~ ((0x340U == (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                                  >> 0x14U)) 
                                      | (0x341U == 
                                         (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__instr_rdata_id 
                                          >> 0x14U)))) 
                                  & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__csr_wr))) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__instr_valid_id_q))));
    bufp->fullBit(oldp+1176,(((3U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                              & ((4U == (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns)) 
                                 & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q) 
                                    | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                       >> 2U))))));
    bufp->fullBit(oldp+1177,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q)) 
                              & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d))));
    bufp->fullIData(oldp+1178,(((4U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                 ? ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                     ? 0x100080U : 
                                    ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                      ? 0x100080U : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q))
                                 : ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                     ? ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                         ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q
                                         : vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__exc_pc)
                                     : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
                                         ? (IData)(
                                                   (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                    >> 1U))
                                         : 0x100080U)))),32);
    bufp->fullBit(oldp+1179,((1U & ((4U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_mux_id))
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
    bufp->fullBit(oldp+1180,(((1U & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q) 
                              && (IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                           >> 1U) & 
                                          (2U == (3U 
                                                  & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
    bufp->fullCData(oldp+1181,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid)
                                       ? VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n), 1U)
                                       : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n)))),2);
    bufp->fullCData(oldp+1182,((3U & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__instr_rvalid)
                                       ? VL_SHIFTR_III(2,2,32, (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n), 1U)
                                       : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n)))),2);
    bufp->fullIData(oldp+1183,((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                  ? vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr
                                  : (0xfffffffcU & vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                + ((IData)(vlSymsp->TOP__ibex_simple_system.u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT____VdfgRegularize_h2ed859ea_0_6) 
                                   << 2U))),32);
    bufp->fullBit(oldp+1184,((1U & (~ (IData)((3U == 
                                               (3U 
                                                & (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                    >> 1U) 
                                                   | ((2U 
                                                       & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                            >> 1U)))))))))));
    bufp->fullIData(oldp+1185,(((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                 ? ((vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                     << 0x10U) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U))
                                 : ((vlSymsp->TOP__ibex_simple_system.__PVT__instr_rdata 
                                     << 0x10U) | (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                                  >> 0x10U)))),32);
    bufp->fullBit(oldp+1186,((1U & ((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                     ? (((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed)) 
                                         & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                            >> 1U)) 
                                        | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                     : (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err)))));
    bufp->fullBit(oldp+1187,((IData)((((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                       >> 1U) & (2U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
    bufp->fullBit(oldp+1188,((1U & (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                     >> 1U) | ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
    bufp->fullIData(oldp+1189,((0x7fffffffU & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                               + ((2U 
                                                   & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                      << 1U)) 
                                                  | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
    bufp->fullIData(oldp+1190,((0x7fffffffU & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__pc_set)
                                                ? (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__prefetch_addr 
                                                   >> 1U)
                                                : (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                   + 
                                                   ((2U 
                                                     & ((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                        << 1U)) 
                                                    | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
    bufp->fullIData(oldp+1191,(((2U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                 ? ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                         [0U] << 8U) 
                                        | (0xffU & 
                                           (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                            >> 0x10U)))
                                     : ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                         [0U] << 0x10U) 
                                        | (0xffffU 
                                           & (vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q 
                                              >> 8U))))
                                 : ((1U & (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                     ? ((vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                         [0U] << 0x18U) 
                                        | vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__rdata_q)
                                     : vlSymsp->TOP__ibex_simple_system.__PVT__host_rdata
                                    [0U]))),32);
    bufp->fullBit(oldp+1192,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                              & ((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                 | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_2_en_q)))));
    bufp->fullBit(oldp+1193,(((~ (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_2)) 
                              & (((IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_rvalid_1) 
                                  & vlSymsp->TOP__ibex_simple_system.__PVT__host_err
                                  [0U]) | (IData)(vlSymsp->TOP__ibex_simple_system.__PVT__u_top__DOT__u_ibex_top__DOT__u_ibex_core__DOT__load_store_unit_i__DOT__fcov_mis_bus_err_1_q)))));
}
