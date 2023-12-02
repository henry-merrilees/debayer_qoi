// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintegrated_tb__Syms.h"


void Vintegrated_tb___024root__trace_chg_sub_0(Vintegrated_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vintegrated_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_chg_top_0\n"); );
    // Init
    Vintegrated_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated_tb___024root*>(voidSelf);
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vintegrated_tb___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vintegrated_tb___024root__trace_chg_sub_0(Vintegrated_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done));
        bufp->chgSData(oldp+1,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address),11);
        bufp->chgCData(oldp+2,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),6);
        bufp->chgCData(oldp+3,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),5);
        bufp->chgIData(oldp+4,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral),32);
        bufp->chgIData(oldp+5,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical),32);
        bufp->chgIData(oldp+6,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col),32);
        bufp->chgSData(oldp+7,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address),11);
        bufp->chgSData(oldp+8,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address),13);
        bufp->chgQData(oldp+9,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data),40);
        bufp->chgCData(oldp+11,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count),3);
        bufp->chgIData(oldp+12,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px),32);
        bufp->chgBit(oldp+13,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done));
        bufp->chgQData(oldp+14,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data),40);
        bufp->chgCData(oldp+16,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count),3);
        bufp->chgIData(oldp+17,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px),32);
        bufp->chgSData(oldp+18,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count),11);
        bufp->chgCData(oldp+19,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position),6);
        bufp->chgBit(oldp+20,((0x4b0U == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count))));
        bufp->chgCData(oldp+21,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count),6);
        bufp->chgBit(oldp+22,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running));
        bufp->chgBit(oldp+23,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running));
        bufp->chgBit(oldp+24,(((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                               & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))));
        bufp->chgCData(oldp+25,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)))),8);
        bufp->chgCData(oldp+26,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
        bufp->chgCData(oldp+27,((0xffU & ((IData)(2U) 
                                          + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)))),8);
        bufp->chgCData(oldp+28,((0xffU & ((IData)(0x20U) 
                                          + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
        bufp->chgCData(oldp+29,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg),8);
        bufp->chgCData(oldp+30,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+31,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter),16);
        bufp->chgCData(oldp+32,((7U & ((IData)(7U) 
                                       - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter)))),3);
        bufp->chgSData(oldp+33,((0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter) 
                                            >> 3U))),13);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+34,(vlSelf->integrated_tb__DOT__sdi));
        bufp->chgBit(oldp+35,(vlSelf->integrated_tb__DOT__sck));
        bufp->chgBit(oldp+36,(vlSelf->integrated_tb__DOT__reading));
        bufp->chgIData(oldp+37,(vlSelf->integrated_tb__DOT__it),32);
        bufp->chgIData(oldp+38,(vlSelf->integrated_tb__DOT__read_it),32);
        bufp->chgBit(oldp+39,(vlSelf->integrated_tb__DOT__writing_last));
        bufp->chgSData(oldp+40,(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output),13);
        bufp->chgBit(oldp+41,((1U & (~ (IData)(vlSelf->integrated_tb__DOT__reading)))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+42,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][0U]),8);
        bufp->chgCData(oldp+43,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][1U]),8);
        bufp->chgCData(oldp+44,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [0U][2U]),8);
        bufp->chgCData(oldp+45,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][0U]),8);
        bufp->chgCData(oldp+46,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][1U]),8);
        bufp->chgCData(oldp+47,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [1U][2U]),8);
        bufp->chgCData(oldp+48,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][0U]),8);
        bufp->chgCData(oldp+49,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][1U]),8);
        bufp->chgCData(oldp+50,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                                [2U][2U]),8);
        bufp->chgIData(oldp+51,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out),32);
        bufp->chgCData(oldp+52,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][0U]),8);
        bufp->chgCData(oldp+53,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][1U]),8);
        bufp->chgCData(oldp+54,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [0U][2U]),8);
        bufp->chgCData(oldp+55,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]),8);
        bufp->chgCData(oldp+56,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][1U]),8);
        bufp->chgCData(oldp+57,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][2U]),8);
        bufp->chgCData(oldp+58,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][0U]),8);
        bufp->chgCData(oldp+59,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][1U]),8);
        bufp->chgCData(oldp+60,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][2U]),8);
        bufp->chgCData(oldp+61,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][0U]),8);
        bufp->chgCData(oldp+62,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][1U]),8);
        bufp->chgCData(oldp+63,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [0U][2U]),8);
        bufp->chgCData(oldp+64,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][0U]),8);
        bufp->chgCData(oldp+65,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][1U]),8);
        bufp->chgCData(oldp+66,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [1U][2U]),8);
        bufp->chgCData(oldp+67,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][0U]),8);
        bufp->chgCData(oldp+68,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][1U]),8);
        bufp->chgCData(oldp+69,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                                [2U][2U]),8);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgSData(oldp+70,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter),16);
        bufp->chgCData(oldp+71,((7U & ((IData)(7U) 
                                       - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))),3);
        bufp->chgSData(oldp+72,((0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                            >> 3U))),13);
        bufp->chgBit(oldp+73,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed));
        bufp->chgBit(oldp+74,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing));
    }
    bufp->chgBit(oldp+75,(vlSelf->clk));
    bufp->chgBit(oldp+76,((1U & (((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing)) 
                                  & (IData)(vlSelf->integrated_tb__DOT__writing))
                                  ? (vlSelf->integrated_tb__DOT__dut__DOT__output_memory
                                     [0U] >> 7U) : (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed)))));
    bufp->chgBit(oldp+77,(vlSelf->integrated_tb__DOT__writing));
    bufp->chgBit(oldp+78,(vlSelf->integrated_tb__DOT__spi_done));
}

void Vintegrated_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_cleanup\n"); );
    // Init
    Vintegrated_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated_tb___024root*>(voidSelf);
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
