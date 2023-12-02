// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vintegrated.h"
#include "Vintegrated__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vintegrated::Vintegrated(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vintegrated__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , sck{vlSymsp->TOP.sck}
    , sdi{vlSymsp->TOP.sdi}
    , reading{vlSymsp->TOP.reading}
    , sdo{vlSymsp->TOP.sdo}
    , writing{vlSymsp->TOP.writing}
    , spi_done{vlSymsp->TOP.spi_done}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vintegrated::Vintegrated(const char* _vcname__)
    : Vintegrated(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vintegrated::~Vintegrated() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vintegrated___024root___eval_debug_assertions(Vintegrated___024root* vlSelf);
#endif  // VL_DEBUG
void Vintegrated___024root___eval_static(Vintegrated___024root* vlSelf);
void Vintegrated___024root___eval_initial(Vintegrated___024root* vlSelf);
void Vintegrated___024root___eval_settle(Vintegrated___024root* vlSelf);
void Vintegrated___024root___eval(Vintegrated___024root* vlSelf);

void Vintegrated::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vintegrated::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vintegrated___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vintegrated___024root___eval_static(&(vlSymsp->TOP));
        Vintegrated___024root___eval_initial(&(vlSymsp->TOP));
        Vintegrated___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vintegrated___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vintegrated::eventsPending() { return false; }

uint64_t Vintegrated::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vintegrated::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vintegrated___024root___eval_final(Vintegrated___024root* vlSelf);

VL_ATTR_COLD void Vintegrated::final() {
    Vintegrated___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vintegrated::hierName() const { return vlSymsp->name(); }
const char* Vintegrated::modelName() const { return "Vintegrated"; }
unsigned Vintegrated::threads() const { return 1; }
void Vintegrated::prepareClone() const { contextp()->prepareClone(); }
void Vintegrated::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vintegrated::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vintegrated___024root__trace_init_top(Vintegrated___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vintegrated___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated___024root*>(voidSelf);
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vintegrated___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vintegrated___024root__trace_register(Vintegrated___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vintegrated::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vintegrated::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vintegrated___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
