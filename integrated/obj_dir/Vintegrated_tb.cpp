// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vintegrated_tb.h"
#include "Vintegrated_tb__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vintegrated_tb::Vintegrated_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vintegrated_tb__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vintegrated_tb::Vintegrated_tb(const char* _vcname__)
    : Vintegrated_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vintegrated_tb::~Vintegrated_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vintegrated_tb___024root___eval_debug_assertions(Vintegrated_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vintegrated_tb___024root___eval_static(Vintegrated_tb___024root* vlSelf);
void Vintegrated_tb___024root___eval_initial(Vintegrated_tb___024root* vlSelf);
void Vintegrated_tb___024root___eval_settle(Vintegrated_tb___024root* vlSelf);
void Vintegrated_tb___024root___eval(Vintegrated_tb___024root* vlSelf);

void Vintegrated_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vintegrated_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vintegrated_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vintegrated_tb___024root___eval_static(&(vlSymsp->TOP));
        Vintegrated_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vintegrated_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vintegrated_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vintegrated_tb::eventsPending() { return false; }

uint64_t Vintegrated_tb::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vintegrated_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vintegrated_tb___024root___eval_final(Vintegrated_tb___024root* vlSelf);

VL_ATTR_COLD void Vintegrated_tb::final() {
    Vintegrated_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vintegrated_tb::hierName() const { return vlSymsp->name(); }
const char* Vintegrated_tb::modelName() const { return "Vintegrated_tb"; }
unsigned Vintegrated_tb::threads() const { return 1; }
void Vintegrated_tb::prepareClone() const { contextp()->prepareClone(); }
void Vintegrated_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vintegrated_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vintegrated_tb___024root__trace_init_top(Vintegrated_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vintegrated_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated_tb___024root*>(voidSelf);
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vintegrated_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vintegrated_tb___024root__trace_register(Vintegrated_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vintegrated_tb::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vintegrated_tb::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vintegrated_tb___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
