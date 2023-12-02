// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated_tb.h for the primary calling header

#include "verilated.h"

#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__act(Vintegrated_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vintegrated_tb___024root___eval_triggers__act(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->integrated_tb__DOT__sck) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__integrated_tb__DOT__sck__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSelf->integrated_tb__DOT__sck)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__integrated_tb__DOT__sck__0)));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__integrated_tb__DOT__sck__0 
        = vlSelf->integrated_tb__DOT__sck;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vintegrated_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
