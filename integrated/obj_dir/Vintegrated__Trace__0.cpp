// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintegrated__Syms.h"


void Vintegrated___024root__trace_chg_sub_0(Vintegrated___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vintegrated___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_chg_top_0\n"); );
    // Init
    Vintegrated___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated___024root*>(voidSelf);
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vintegrated___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vintegrated___024root__trace_chg_sub_0(Vintegrated___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->integrated__DOT__spi__DOT__read_bit_counter),16);
        bufp->chgCData(oldp+1,((7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter)))),3);
        bufp->chgSData(oldp+2,((0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter) 
                                           >> 3U))),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+3,(vlSelf->integrated__DOT__spi__DOT__write_bit_counter),16);
        bufp->chgCData(oldp+4,((7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter)))),3);
        bufp->chgSData(oldp+5,((0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter) 
                                           >> 3U))),13);
        bufp->chgBit(oldp+6,(vlSelf->integrated__DOT__spi__DOT__sdo_delayed));
        bufp->chgBit(oldp+7,(vlSelf->integrated__DOT__spi__DOT__prev_writing));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgSData(oldp+8,(vlSelf->integrated__DOT__bytes_output),13);
        bufp->chgBit(oldp+9,(vlSelf->integrated__DOT__integrated_core__DOT__color_done));
        bufp->chgSData(oldp+10,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address),11);
        bufp->chgCData(oldp+11,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),6);
        bufp->chgCData(oldp+12,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),5);
        bufp->chgIData(oldp+13,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral),32);
        bufp->chgIData(oldp+14,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical),32);
        bufp->chgIData(oldp+15,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col),32);
        bufp->chgSData(oldp+16,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address),11);
        bufp->chgSData(oldp+17,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address),13);
        bufp->chgQData(oldp+18,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data),40);
        bufp->chgCData(oldp+20,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count),3);
        bufp->chgIData(oldp+21,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px),32);
        bufp->chgBit(oldp+22,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__done));
        bufp->chgQData(oldp+23,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data),40);
        bufp->chgCData(oldp+25,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count),3);
        bufp->chgIData(oldp+26,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px),32);
        bufp->chgSData(oldp+27,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count),11);
        bufp->chgCData(oldp+28,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position),6);
        bufp->chgBit(oldp+29,((0x4b0U == (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count))));
        bufp->chgCData(oldp+30,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count),6);
        bufp->chgBit(oldp+31,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running));
        bufp->chgBit(oldp+32,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running));
        bufp->chgBit(oldp+33,(((~ (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                               & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))));
        bufp->chgCData(oldp+34,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)))),8);
        bufp->chgCData(oldp+35,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
        bufp->chgCData(oldp+36,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)))),8);
        bufp->chgCData(oldp+37,((0xffU & ((IData)(0x20U) 
                                          + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
        bufp->chgCData(oldp+38,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg),8);
        bufp->chgCData(oldp+39,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+40,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][0U]),8);
        bufp->chgCData(oldp+41,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][1U]),8);
        bufp->chgCData(oldp+42,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][2U]),8);
        bufp->chgCData(oldp+43,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][0U]),8);
        bufp->chgCData(oldp+44,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][1U]),8);
        bufp->chgCData(oldp+45,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][2U]),8);
        bufp->chgCData(oldp+46,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][0U]),8);
        bufp->chgCData(oldp+47,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][1U]),8);
        bufp->chgCData(oldp+48,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][2U]),8);
        bufp->chgIData(oldp+49,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out),32);
        bufp->chgCData(oldp+50,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][0U]),8);
        bufp->chgCData(oldp+51,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][1U]),8);
        bufp->chgCData(oldp+52,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][2U]),8);
        bufp->chgCData(oldp+53,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]),8);
        bufp->chgCData(oldp+54,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][1U]),8);
        bufp->chgCData(oldp+55,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][2U]),8);
        bufp->chgCData(oldp+56,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][0U]),8);
        bufp->chgCData(oldp+57,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][1U]),8);
        bufp->chgCData(oldp+58,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][2U]),8);
        bufp->chgCData(oldp+59,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][0U]),8);
        bufp->chgCData(oldp+60,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][1U]),8);
        bufp->chgCData(oldp+61,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][2U]),8);
        bufp->chgCData(oldp+62,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][0U]),8);
        bufp->chgCData(oldp+63,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][1U]),8);
        bufp->chgCData(oldp+64,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][2U]),8);
        bufp->chgCData(oldp+65,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][0U]),8);
        bufp->chgCData(oldp+66,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][1U]),8);
        bufp->chgCData(oldp+67,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][2U]),8);
    }
    bufp->chgBit(oldp+68,(vlSelf->clk));
    bufp->chgBit(oldp+69,(vlSelf->sdi));
    bufp->chgBit(oldp+70,(vlSelf->sck));
    bufp->chgBit(oldp+71,(vlSelf->reading));
    bufp->chgBit(oldp+72,(vlSelf->sdo));
    bufp->chgBit(oldp+73,(vlSelf->writing));
    bufp->chgBit(oldp+74,(vlSelf->spi_done));
    bufp->chgBit(oldp+75,((1U & (~ (IData)(vlSelf->reading)))));
}

void Vintegrated___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_cleanup\n"); );
    // Init
    Vintegrated___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated___024root*>(voidSelf);
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
