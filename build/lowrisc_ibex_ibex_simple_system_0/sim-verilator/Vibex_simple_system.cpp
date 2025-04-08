// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vibex_simple_system__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vibex_simple_system::Vibex_simple_system(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vibex_simple_system__Syms(contextp(), _vcname__, this)}
    , IO_RST_N{vlSymsp->TOP.IO_RST_N}
    , IO_CLK{vlSymsp->TOP.IO_CLK}
    , ibex_simple_system{vlSymsp->TOP.ibex_simple_system}
    , __PVT__ibex_pkg{vlSymsp->TOP.__PVT__ibex_pkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vibex_simple_system::Vibex_simple_system(const char* _vcname__)
    : Vibex_simple_system(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vibex_simple_system::~Vibex_simple_system() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vibex_simple_system___024root___eval_debug_assertions(Vibex_simple_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vibex_simple_system___024root___eval_static(Vibex_simple_system___024root* vlSelf);
void Vibex_simple_system___024root___eval_initial(Vibex_simple_system___024root* vlSelf);
void Vibex_simple_system___024root___eval_settle(Vibex_simple_system___024root* vlSelf);
void Vibex_simple_system___024root___eval(Vibex_simple_system___024root* vlSelf);

void Vibex_simple_system::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vibex_simple_system::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vibex_simple_system___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vibex_simple_system___024root___eval_static(&(vlSymsp->TOP));
        Vibex_simple_system___024root___eval_initial(&(vlSymsp->TOP));
        Vibex_simple_system___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vibex_simple_system___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vibex_simple_system::eventsPending() { return false; }

uint64_t Vibex_simple_system::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vibex_simple_system::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vibex_simple_system___024root___eval_final(Vibex_simple_system___024root* vlSelf);

VL_ATTR_COLD void Vibex_simple_system::final() {
    Vibex_simple_system___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vibex_simple_system::hierName() const { return vlSymsp->name(); }
const char* Vibex_simple_system::modelName() const { return "Vibex_simple_system"; }
unsigned Vibex_simple_system::threads() const { return 1; }
void Vibex_simple_system::prepareClone() const { contextp()->prepareClone(); }
void Vibex_simple_system::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vibex_simple_system::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vibex_simple_system___024root__trace_decl_types(VerilatedFst* tracep);

void Vibex_simple_system___024root__trace_init_top(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vibex_simple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vibex_simple_system___024root*>(voidSelf);
    Vibex_simple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vibex_simple_system___024root__trace_decl_types(tracep);
    Vibex_simple_system___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vibex_simple_system___024root__trace_register(Vibex_simple_system___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vibex_simple_system::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vibex_simple_system::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vibex_simple_system___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
