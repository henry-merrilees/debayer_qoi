// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated_tb.h for the primary calling header

#include "verilated.h"

#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb___024root.h"

VL_ATTR_COLD void Vintegrated_tb___024root___eval_static__TOP(Vintegrated_tb___024root* vlSelf);

VL_ATTR_COLD void Vintegrated_tb___024root___eval_static(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_static\n"); );
    // Body
    Vintegrated_tb___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_static__TOP(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_static__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP(Vintegrated_tb___024root* vlSelf);

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_initial\n"); );
    // Body
    Vintegrated_tb___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__integrated_tb__DOT__sck__0 = 0U;
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP__0(Vintegrated_tb___024root* vlSelf);
VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP__1(Vintegrated_tb___024root* vlSelf);

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_initial__TOP\n"); );
    // Body
    Vintegrated_tb___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vintegrated_tb___024root___eval_initial__TOP__1(vlSelf);
    vlSelf->integrated_tb__DOT__sdi = 0U;
    vlSelf->integrated_tb__DOT__sck = 0U;
    vlSelf->integrated_tb__DOT__reading = 1U;
    vlSelf->integrated_tb__DOT__writing = 0U;
    vlSelf->integrated_tb__DOT__it = 0U;
    vlSelf->integrated_tb__DOT__read_it = 0U;
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP__0(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
        = (0xffU | vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out);
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x6d616765U;
    __Vtemp_1[2U] = 0x69U;
    VL_READMEM_N(true, 8, 1200, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->integrated_tb__DOT__data_in)
                 , 0, ~0ULL);
    __Vilp = 0U;
    while ((__Vilp <= 0xf9dU)) {
        vlSelf->integrated_tb__DOT__output_memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_initial__TOP__1(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    __Vilp = 0xf9eU;
    while ((__Vilp <= 0x176fU)) {
        vlSelf->integrated_tb__DOT__output_memory[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_final(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_triggers__stl(Vintegrated_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__stl(Vintegrated_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___eval_stl(Vintegrated_tb___024root* vlSelf);

VL_ATTR_COLD void Vintegrated_tb___024root___eval_settle(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vintegrated_tb___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vintegrated_tb___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("integrated.sv", 525, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vintegrated_tb___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__stl(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vintegrated_tb___024root___stl_sequent__TOP__0(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->integrated_tb__DOT__writing = (0U < (IData)(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output));
    vlSelf->integrated_tb__DOT__spi_done = (((0x1fffU 
                                              & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                                 >> 3U)) 
                                             == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output)) 
                                            & (6U == 
                                               (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col 
        = ((1U & VL_MODDIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
            ? ((1U & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
                ? 1U : 2U) : ((1U & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
                               ? 3U : 0U));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical 
        = ((0U == (0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
            ? 0U : ((0x1dU == (0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
                     ? 2U : 1U));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral 
        = ((0U == (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
            ? 0U : ((0x27U == (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
                     ? 2U : 1U));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[0U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d7U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x7d7U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[1U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7ffU) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x7ffU) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[2U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x27U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x27U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[0U][1U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d8U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x7d8U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[1U][1U] 
        = ((0x4afU >= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[2U][1U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x28U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x28U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[0U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d9U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x7d9U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[1U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[2U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x29U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated_tb__DOT__dut__DOT__data_in
           [(0x7ffU & ((IData)(0x29U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
        = ((0x4afU >= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address))
            ? vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory
           [vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address]
            : 0U);
    if ((0U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
    } else if ((1U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
    } else if ((2U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position 
        = (0x3fU & (((IData)(3U) * (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                    >> 0x18U)) + (((IData)(5U) 
                                                   * 
                                                   (0xffU 
                                                    & (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                       >> 0x10U))) 
                                                  + 
                                                  (((IData)(7U) 
                                                    * 
                                                    (0xffU 
                                                     & (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                        >> 8U))) 
                                                   + 
                                                   ((IData)(0xbU) 
                                                    * 
                                                    (0xffU 
                                                     & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px))))));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running 
        = ((0x4b0U != (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count)) 
           & (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
              == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0 
        = (0xffU & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 0x18U) - (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                                  >> 0x18U)));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0 
        = (0xffU & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 8U) - (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                               >> 8U)));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0 
        = (0xffU & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 0x10U) - (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                                  >> 0x10U)));
    if ((0U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
    } else if ((1U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
    } else if ((2U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0) 
                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0) 
                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    if ((0U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x18U));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff0000U & ((((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                 [0U][1U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]) << 0xeU)));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][0U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                               [0U][2U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [0U][0U]) << 6U)));
    } else if ((1U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                    [2U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                    [2U][0U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                   [0U][2U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [0U][0U]) << 0x16U)));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff0000U & ((((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                 [0U][1U]) + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]) << 0xeU)));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 8U));
    } else if ((2U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][0U]) << 0x17U)));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x10U));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [2U][1U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [0U][1U]) << 7U)));
    } else if ((3U == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [0U][1U]) << 0x17U)));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x10U));
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [1U][2U] + vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [1U][0U]) << 7U)));
    }
}

VL_ATTR_COLD void Vintegrated_tb___024root___eval_stl(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vintegrated_tb___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__act(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge integrated_tb.sck)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge integrated_tb.sck)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__nba(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge integrated_tb.sck)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge integrated_tb.sck)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vintegrated_tb___024root___ctor_var_reset(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__sdi = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__sck = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__reading = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__writing = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__spi_done = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->integrated_tb__DOT__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6000; ++__Vi0) {
        vlSelf->integrated_tb__DOT__output_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->integrated_tb__DOT__it = 0;
    vlSelf->integrated_tb__DOT__read_it = 0;
    vlSelf->integrated_tb__DOT__writing_last = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT____Vlvbound_hbc168415__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->integrated_tb__DOT__dut__DOT__data_in[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 6000; ++__Vi0) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->integrated_tb__DOT__dut__DOT__bytes_output = VL_RAND_RESET_I(13);
    for (int __Vi0 = 0; __Vi0 < 1200; ++__Vi0) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 3; ++__Vi1) {
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[__Vi0][__Vi1] = VL_RAND_RESET_I(8);
        }
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address = VL_RAND_RESET_I(11);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address = VL_RAND_RESET_I(13);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data = VL_RAND_RESET_Q(40);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count = VL_RAND_RESET_I(3);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px = VL_RAND_RESET_I(32);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0 = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0 = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0 = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0 = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0 = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data = VL_RAND_RESET_Q(40);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = VL_RAND_RESET_I(3);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px = VL_RAND_RESET_I(32);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count = VL_RAND_RESET_I(11);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position = VL_RAND_RESET_I(6);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = VL_RAND_RESET_I(6);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg = VL_RAND_RESET_I(8);
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0 = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0 = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0 = 0;
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter = VL_RAND_RESET_I(16);
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter = VL_RAND_RESET_I(16);
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing = VL_RAND_RESET_I(1);
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT____Vlvbound_h3df50bb2__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__integrated_tb__DOT__it = 0;
    vlSelf->__Vdly__integrated_tb__DOT__read_it = 0;
    vlSelf->__Vdlyvset__integrated_tb__DOT__output_memory__v0 = 0;
    vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__bytes_output = VL_RAND_RESET_I(13);
    vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v0 = 0;
    vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v1 = 0;
    vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v1 = 0;
    vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v2 = 0;
    vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v2 = 0;
    vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v3 = 0;
    vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v3 = 0;
    vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v4 = 0;
    vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v4 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v4 = 0;
    vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__integrated_tb__DOT__sck__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
