// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintegrated__Syms.h"


VL_ATTR_COLD void Vintegrated___024root__trace_init_sub__TOP__0(Vintegrated___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+70,"sdi", false,-1);
    tracep->declBit(c+71,"sck", false,-1);
    tracep->declBit(c+72,"reading", false,-1);
    tracep->declBit(c+73,"sdo", false,-1);
    tracep->declBit(c+74,"writing", false,-1);
    tracep->declBit(c+75,"spi_done", false,-1);
    tracep->pushNamePrefix("integrated ");
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+70,"sdi", false,-1);
    tracep->declBit(c+71,"sck", false,-1);
    tracep->declBit(c+72,"reading", false,-1);
    tracep->declBit(c+73,"sdo", false,-1);
    tracep->declBit(c+74,"writing", false,-1);
    tracep->declBit(c+75,"spi_done", false,-1);
    tracep->declBus(c+9,"bytes_output", false,-1, 12,0);
    tracep->pushNamePrefix("integrated_core ");
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+76,"reset_n", false,-1);
    tracep->declBus(c+9,"bytes_output", false,-1, 12,0);
    tracep->declBit(c+10,"color_done", false,-1);
    tracep->pushNamePrefix("color ");
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+76,"reset_n", false,-1);
    tracep->declBit(c+10,"done", false,-1);
    tracep->declBus(c+11,"address", false,-1, 10,0);
    tracep->declBus(c+12,"address_x", false,-1, 5,0);
    tracep->declBus(c+13,"address_y", false,-1, 4,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+41,"[-1]", false,-1, 7,0);
    tracep->declBus(c+42,"[0]", false,-1, 7,0);
    tracep->declBus(c+43,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+44,"[-1]", false,-1, 7,0);
    tracep->declBus(c+45,"[0]", false,-1, 7,0);
    tracep->declBus(c+46,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+47,"[-1]", false,-1, 7,0);
    tracep->declBus(c+48,"[0]", false,-1, 7,0);
    tracep->declBus(c+49,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+14,"lateral", false,-1, 31,0);
    tracep->declBus(c+15,"vertical", false,-1, 31,0);
    tracep->declBus(c+16,"col", false,-1, 31,0);
    tracep->declBus(c+50,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("color_input_memory ");
    tracep->declBus(c+11,"address", false,-1, 10,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+41,"[-1]", false,-1, 7,0);
    tracep->declBus(c+42,"[0]", false,-1, 7,0);
    tracep->declBus(c+43,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+44,"[-1]", false,-1, 7,0);
    tracep->declBus(c+45,"[0]", false,-1, 7,0);
    tracep->declBus(c+46,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+47,"[-1]", false,-1, 7,0);
    tracep->declBus(c+48,"[0]", false,-1, 7,0);
    tracep->declBus(c+49,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("filter3x3 ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+41,"[-1]", false,-1, 7,0);
    tracep->declBus(c+42,"[0]", false,-1, 7,0);
    tracep->declBus(c+43,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+44,"[-1]", false,-1, 7,0);
    tracep->declBus(c+45,"[0]", false,-1, 7,0);
    tracep->declBus(c+46,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+47,"[-1]", false,-1, 7,0);
    tracep->declBus(c+48,"[0]", false,-1, 7,0);
    tracep->declBus(c+49,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+14,"lateral", false,-1, 31,0);
    tracep->declBus(c+15,"vertical", false,-1, 31,0);
    tracep->declBus(c+16,"color", false,-1, 31,0);
    tracep->declBus(c+50,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("pixels");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+51,"[-1]", false,-1, 7,0);
    tracep->declBus(c+52,"[0]", false,-1, 7,0);
    tracep->declBus(c+53,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+54,"[-1]", false,-1, 7,0);
    tracep->declBus(c+55,"[0]", false,-1, 7,0);
    tracep->declBus(c+56,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+57,"[-1]", false,-1, 7,0);
    tracep->declBus(c+58,"[0]", false,-1, 7,0);
    tracep->declBus(c+59,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("edge_handler ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+41,"[-1]", false,-1, 7,0);
    tracep->declBus(c+42,"[0]", false,-1, 7,0);
    tracep->declBus(c+43,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+44,"[-1]", false,-1, 7,0);
    tracep->declBus(c+45,"[0]", false,-1, 7,0);
    tracep->declBus(c+46,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+47,"[-1]", false,-1, 7,0);
    tracep->declBus(c+48,"[0]", false,-1, 7,0);
    tracep->declBus(c+49,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+14,"lateral", false,-1, 31,0);
    tracep->declBus(c+15,"vertical", false,-1, 31,0);
    tracep->pushNamePrefix("pixels_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+51,"[-1]", false,-1, 7,0);
    tracep->declBus(c+52,"[0]", false,-1, 7,0);
    tracep->declBus(c+53,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+54,"[-1]", false,-1, 7,0);
    tracep->declBus(c+55,"[0]", false,-1, 7,0);
    tracep->declBus(c+56,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+57,"[-1]", false,-1, 7,0);
    tracep->declBus(c+58,"[0]", false,-1, 7,0);
    tracep->declBus(c+59,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("horizontally_extended");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+60,"[-1]", false,-1, 7,0);
    tracep->declBus(c+61,"[0]", false,-1, 7,0);
    tracep->declBus(c+62,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+63,"[-1]", false,-1, 7,0);
    tracep->declBus(c+64,"[0]", false,-1, 7,0);
    tracep->declBus(c+65,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+66,"[-1]", false,-1, 7,0);
    tracep->declBus(c+67,"[0]", false,-1, 7,0);
    tracep->declBus(c+68,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("qoi ");
    tracep->declBus(c+77,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"HEIGHT", false,-1, 31,0);
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+10,"reset_n", false,-1);
    tracep->declBus(c+9,"bytes_output", false,-1, 12,0);
    tracep->declBus(c+17,"input_address", false,-1, 10,0);
    tracep->declBus(c+18,"output_address", false,-1, 12,0);
    tracep->declQuad(c+19,"output_data", false,-1, 39,0);
    tracep->declBus(c+21,"output_count", false,-1, 2,0);
    tracep->declBus(c+22,"cur_px", false,-1, 31,0);
    tracep->declBit(c+23,"done", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+77,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+78,"HEIGHT", false,-1, 31,0);
    tracep->declBit(c+69,"clk", false,-1);
    tracep->declBit(c+10,"reset_n", false,-1);
    tracep->declBus(c+22,"cur_px", false,-1, 31,0);
    tracep->declQuad(c+19,"output_data", false,-1, 39,0);
    tracep->declBus(c+21,"output_count", false,-1, 2,0);
    tracep->declQuad(c+24,"staged_data", false,-1, 39,0);
    tracep->declBus(c+26,"staged_count", false,-1, 2,0);
    tracep->declBus(c+27,"prev_px", false,-1, 31,0);
    tracep->declBus(c+28,"pixel_count", false,-1, 10,0);
    tracep->declBus(c+29,"index_position", false,-1, 5,0);
    tracep->declBit(c+30,"almost_done", false,-1);
    tracep->declBus(c+31,"run_count", false,-1, 5,0);
    tracep->declBit(c+32,"last_running", false,-1);
    tracep->declBit(c+33,"running", false,-1);
    tracep->declBit(c+34,"stopped_running", false,-1);
    tracep->declBus(c+35,"dr", false,-1, 7,0);
    tracep->declBus(c+36,"dg", false,-1, 7,0);
    tracep->declBus(c+37,"db", false,-1, 7,0);
    tracep->declBus(c+38,"diff_green", false,-1, 7,0);
    tracep->declBus(c+39,"dr_dg", false,-1, 7,0);
    tracep->declBus(c+40,"db_dg", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi ");
    tracep->declBit(c+72,"reading", false,-1);
    tracep->declBit(c+74,"writing", false,-1);
    tracep->declBit(c+71,"sck", false,-1);
    tracep->declBit(c+70,"sdi", false,-1);
    tracep->declBit(c+73,"sdo", false,-1);
    tracep->declBit(c+75,"spi_done", false,-1);
    tracep->declBus(c+9,"bytes_output", false,-1, 12,0);
    tracep->declBus(c+1,"read_bit_counter", false,-1, 15,0);
    tracep->declBus(c+2,"read_bit_address", false,-1, 2,0);
    tracep->declBus(c+3,"read_byte_address", false,-1, 12,0);
    tracep->declBus(c+4,"write_bit_counter", false,-1, 15,0);
    tracep->declBus(c+5,"write_bit_address", false,-1, 2,0);
    tracep->declBus(c+6,"write_byte_address", false,-1, 12,0);
    tracep->declBit(c+7,"sdo_delayed", false,-1);
    tracep->declBit(c+8,"prev_writing", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vintegrated___024root__trace_init_top(Vintegrated___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_init_top\n"); );
    // Body
    Vintegrated___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vintegrated___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintegrated___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintegrated___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vintegrated___024root__trace_register(Vintegrated___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vintegrated___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vintegrated___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vintegrated___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vintegrated___024root__trace_full_sub_0(Vintegrated___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintegrated___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_full_top_0\n"); );
    // Init
    Vintegrated___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated___024root*>(voidSelf);
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintegrated___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintegrated___024root__trace_full_sub_0(Vintegrated___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->integrated__DOT__spi__DOT__read_bit_counter),16);
    bufp->fullCData(oldp+2,((7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter)))),3);
    bufp->fullSData(oldp+3,((0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter) 
                                        >> 3U))),13);
    bufp->fullSData(oldp+4,(vlSelf->integrated__DOT__spi__DOT__write_bit_counter),16);
    bufp->fullCData(oldp+5,((7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter)))),3);
    bufp->fullSData(oldp+6,((0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter) 
                                        >> 3U))),13);
    bufp->fullBit(oldp+7,(vlSelf->integrated__DOT__spi__DOT__sdo_delayed));
    bufp->fullBit(oldp+8,(vlSelf->integrated__DOT__spi__DOT__prev_writing));
    bufp->fullSData(oldp+9,(vlSelf->integrated__DOT__bytes_output),13);
    bufp->fullBit(oldp+10,(vlSelf->integrated__DOT__integrated_core__DOT__color_done));
    bufp->fullSData(oldp+11,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address),11);
    bufp->fullCData(oldp+12,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),6);
    bufp->fullCData(oldp+13,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),5);
    bufp->fullIData(oldp+14,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral),32);
    bufp->fullIData(oldp+15,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical),32);
    bufp->fullIData(oldp+16,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col),32);
    bufp->fullSData(oldp+17,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address),11);
    bufp->fullSData(oldp+18,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address),13);
    bufp->fullQData(oldp+19,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data),40);
    bufp->fullCData(oldp+21,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count),3);
    bufp->fullIData(oldp+22,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px),32);
    bufp->fullBit(oldp+23,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__done));
    bufp->fullQData(oldp+24,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data),40);
    bufp->fullCData(oldp+26,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count),3);
    bufp->fullIData(oldp+27,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px),32);
    bufp->fullSData(oldp+28,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count),11);
    bufp->fullCData(oldp+29,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position),6);
    bufp->fullBit(oldp+30,((0x4b0U == (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count))));
    bufp->fullCData(oldp+31,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count),6);
    bufp->fullBit(oldp+32,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running));
    bufp->fullBit(oldp+33,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running));
    bufp->fullBit(oldp+34,(((~ (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                            & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))));
    bufp->fullCData(oldp+35,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)))),8);
    bufp->fullCData(oldp+36,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
    bufp->fullCData(oldp+37,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)))),8);
    bufp->fullCData(oldp+38,((0xffU & ((IData)(0x20U) 
                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
    bufp->fullCData(oldp+39,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg),8);
    bufp->fullCData(oldp+40,(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg),8);
    bufp->fullCData(oldp+41,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][0U]),8);
    bufp->fullCData(oldp+42,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][1U]),8);
    bufp->fullCData(oldp+43,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][2U]),8);
    bufp->fullCData(oldp+44,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][0U]),8);
    bufp->fullCData(oldp+45,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][1U]),8);
    bufp->fullCData(oldp+46,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][2U]),8);
    bufp->fullCData(oldp+47,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][0U]),8);
    bufp->fullCData(oldp+48,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][1U]),8);
    bufp->fullCData(oldp+49,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][2U]),8);
    bufp->fullIData(oldp+50,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out),32);
    bufp->fullCData(oldp+51,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][0U]),8);
    bufp->fullCData(oldp+52,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][1U]),8);
    bufp->fullCData(oldp+53,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][2U]),8);
    bufp->fullCData(oldp+54,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][0U]),8);
    bufp->fullCData(oldp+55,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][1U]),8);
    bufp->fullCData(oldp+56,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][2U]),8);
    bufp->fullCData(oldp+57,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][0U]),8);
    bufp->fullCData(oldp+58,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][1U]),8);
    bufp->fullCData(oldp+59,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][2U]),8);
    bufp->fullCData(oldp+60,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][0U]),8);
    bufp->fullCData(oldp+61,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][1U]),8);
    bufp->fullCData(oldp+62,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][2U]),8);
    bufp->fullCData(oldp+63,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][0U]),8);
    bufp->fullCData(oldp+64,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][1U]),8);
    bufp->fullCData(oldp+65,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][2U]),8);
    bufp->fullCData(oldp+66,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][0U]),8);
    bufp->fullCData(oldp+67,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][1U]),8);
    bufp->fullCData(oldp+68,(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][2U]),8);
    bufp->fullBit(oldp+69,(vlSelf->clk));
    bufp->fullBit(oldp+70,(vlSelf->sdi));
    bufp->fullBit(oldp+71,(vlSelf->sck));
    bufp->fullBit(oldp+72,(vlSelf->reading));
    bufp->fullBit(oldp+73,(vlSelf->sdo));
    bufp->fullBit(oldp+74,(vlSelf->writing));
    bufp->fullBit(oldp+75,(vlSelf->spi_done));
    bufp->fullBit(oldp+76,((1U & (~ (IData)(vlSelf->reading)))));
    bufp->fullIData(oldp+77,(0x28U),32);
    bufp->fullIData(oldp+78,(0x1eU),32);
}
