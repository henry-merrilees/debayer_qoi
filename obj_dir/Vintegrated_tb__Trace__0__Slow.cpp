// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vintegrated_tb__Syms.h"


VL_ATTR_COLD void Vintegrated_tb___024root__trace_init_sub__TOP__0(Vintegrated_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+76,"clk", false,-1);
    tracep->pushNamePrefix("integrated_tb ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+35,"sdi", false,-1);
    tracep->declBit(c+36,"sck", false,-1);
    tracep->declBit(c+37,"reading", false,-1);
    tracep->declBit(c+77,"sdo", false,-1);
    tracep->declBit(c+78,"writing", false,-1);
    tracep->declBit(c+79,"spi_done", false,-1);
    tracep->declBus(c+38,"it", false,-1, 31,0);
    tracep->declBus(c+39,"read_it", false,-1, 31,0);
    tracep->declBit(c+40,"writing_last", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+35,"sdi", false,-1);
    tracep->declBit(c+36,"sck", false,-1);
    tracep->declBit(c+37,"reading", false,-1);
    tracep->declBit(c+77,"sdo", false,-1);
    tracep->declBit(c+78,"writing", false,-1);
    tracep->declBit(c+79,"spi_done", false,-1);
    tracep->declBus(c+41,"bytes_output", false,-1, 12,0);
    tracep->pushNamePrefix("integrated_core ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+42,"reset_n", false,-1);
    tracep->declBus(c+41,"bytes_output", false,-1, 12,0);
    tracep->declBit(c+1,"color_done", false,-1);
    tracep->pushNamePrefix("color ");
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+42,"reset_n", false,-1);
    tracep->declBit(c+1,"done", false,-1);
    tracep->declBus(c+2,"address", false,-1, 10,0);
    tracep->declBus(c+3,"address_x", false,-1, 5,0);
    tracep->declBus(c+4,"address_y", false,-1, 4,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+43,"[-1]", false,-1, 7,0);
    tracep->declBus(c+44,"[0]", false,-1, 7,0);
    tracep->declBus(c+45,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+46,"[-1]", false,-1, 7,0);
    tracep->declBus(c+47,"[0]", false,-1, 7,0);
    tracep->declBus(c+48,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+49,"[-1]", false,-1, 7,0);
    tracep->declBus(c+50,"[0]", false,-1, 7,0);
    tracep->declBus(c+51,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+5,"lateral", false,-1, 31,0);
    tracep->declBus(c+6,"vertical", false,-1, 31,0);
    tracep->declBus(c+7,"col", false,-1, 31,0);
    tracep->declBus(c+52,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("color_input_memory ");
    tracep->declBus(c+2,"address", false,-1, 10,0);
    tracep->pushNamePrefix("data_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+43,"[-1]", false,-1, 7,0);
    tracep->declBus(c+44,"[0]", false,-1, 7,0);
    tracep->declBus(c+45,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+46,"[-1]", false,-1, 7,0);
    tracep->declBus(c+47,"[0]", false,-1, 7,0);
    tracep->declBus(c+48,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+49,"[-1]", false,-1, 7,0);
    tracep->declBus(c+50,"[0]", false,-1, 7,0);
    tracep->declBus(c+51,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("filter3x3 ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+43,"[-1]", false,-1, 7,0);
    tracep->declBus(c+44,"[0]", false,-1, 7,0);
    tracep->declBus(c+45,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+46,"[-1]", false,-1, 7,0);
    tracep->declBus(c+47,"[0]", false,-1, 7,0);
    tracep->declBus(c+48,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+49,"[-1]", false,-1, 7,0);
    tracep->declBus(c+50,"[0]", false,-1, 7,0);
    tracep->declBus(c+51,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+5,"lateral", false,-1, 31,0);
    tracep->declBus(c+6,"vertical", false,-1, 31,0);
    tracep->declBus(c+7,"color", false,-1, 31,0);
    tracep->declBus(c+52,"pixel_out", false,-1, 31,0);
    tracep->pushNamePrefix("pixels");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+53,"[-1]", false,-1, 7,0);
    tracep->declBus(c+54,"[0]", false,-1, 7,0);
    tracep->declBus(c+55,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+56,"[-1]", false,-1, 7,0);
    tracep->declBus(c+57,"[0]", false,-1, 7,0);
    tracep->declBus(c+58,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+59,"[-1]", false,-1, 7,0);
    tracep->declBus(c+60,"[0]", false,-1, 7,0);
    tracep->declBus(c+61,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("edge_handler ");
    tracep->pushNamePrefix("pixels_in");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+43,"[-1]", false,-1, 7,0);
    tracep->declBus(c+44,"[0]", false,-1, 7,0);
    tracep->declBus(c+45,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+46,"[-1]", false,-1, 7,0);
    tracep->declBus(c+47,"[0]", false,-1, 7,0);
    tracep->declBus(c+48,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+49,"[-1]", false,-1, 7,0);
    tracep->declBus(c+50,"[0]", false,-1, 7,0);
    tracep->declBus(c+51,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+5,"lateral", false,-1, 31,0);
    tracep->declBus(c+6,"vertical", false,-1, 31,0);
    tracep->pushNamePrefix("pixels_out");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+53,"[-1]", false,-1, 7,0);
    tracep->declBus(c+54,"[0]", false,-1, 7,0);
    tracep->declBus(c+55,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+56,"[-1]", false,-1, 7,0);
    tracep->declBus(c+57,"[0]", false,-1, 7,0);
    tracep->declBus(c+58,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+59,"[-1]", false,-1, 7,0);
    tracep->declBus(c+60,"[0]", false,-1, 7,0);
    tracep->declBus(c+61,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("horizontally_extended");
    tracep->pushNamePrefix("[-1]");
    tracep->declBus(c+62,"[-1]", false,-1, 7,0);
    tracep->declBus(c+63,"[0]", false,-1, 7,0);
    tracep->declBus(c+64,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+65,"[-1]", false,-1, 7,0);
    tracep->declBus(c+66,"[0]", false,-1, 7,0);
    tracep->declBus(c+67,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+68,"[-1]", false,-1, 7,0);
    tracep->declBus(c+69,"[0]", false,-1, 7,0);
    tracep->declBus(c+70,"[1]", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("qoi ");
    tracep->declBus(c+80,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+81,"HEIGHT", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+1,"reset_n", false,-1);
    tracep->declBus(c+41,"bytes_output", false,-1, 12,0);
    tracep->declBus(c+8,"input_address", false,-1, 10,0);
    tracep->declBus(c+9,"output_address", false,-1, 12,0);
    tracep->declQuad(c+10,"output_data", false,-1, 39,0);
    tracep->declBus(c+12,"output_count", false,-1, 2,0);
    tracep->declBus(c+13,"cur_px", false,-1, 31,0);
    tracep->declBit(c+14,"done", false,-1);
    tracep->pushNamePrefix("core ");
    tracep->declBus(c+80,"WIDTH", false,-1, 31,0);
    tracep->declBus(c+81,"HEIGHT", false,-1, 31,0);
    tracep->declBit(c+76,"clk", false,-1);
    tracep->declBit(c+1,"reset_n", false,-1);
    tracep->declBus(c+13,"cur_px", false,-1, 31,0);
    tracep->declQuad(c+10,"output_data", false,-1, 39,0);
    tracep->declBus(c+12,"output_count", false,-1, 2,0);
    tracep->declQuad(c+15,"staged_data", false,-1, 39,0);
    tracep->declBus(c+17,"staged_count", false,-1, 2,0);
    tracep->declBus(c+18,"prev_px", false,-1, 31,0);
    tracep->declBus(c+19,"pixel_count", false,-1, 10,0);
    tracep->declBus(c+20,"index_position", false,-1, 5,0);
    tracep->declBit(c+21,"almost_done", false,-1);
    tracep->declBus(c+22,"run_count", false,-1, 5,0);
    tracep->declBit(c+23,"last_running", false,-1);
    tracep->declBit(c+24,"running", false,-1);
    tracep->declBit(c+25,"stopped_running", false,-1);
    tracep->declBus(c+26,"dr", false,-1, 7,0);
    tracep->declBus(c+27,"dg", false,-1, 7,0);
    tracep->declBus(c+28,"db", false,-1, 7,0);
    tracep->declBus(c+29,"diff_green", false,-1, 7,0);
    tracep->declBus(c+30,"dr_dg", false,-1, 7,0);
    tracep->declBus(c+31,"db_dg", false,-1, 7,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("spi ");
    tracep->declBit(c+37,"reading", false,-1);
    tracep->declBit(c+78,"writing", false,-1);
    tracep->declBit(c+36,"sck", false,-1);
    tracep->declBit(c+35,"sdi", false,-1);
    tracep->declBit(c+77,"sdo", false,-1);
    tracep->declBit(c+79,"spi_done", false,-1);
    tracep->declBus(c+41,"bytes_output", false,-1, 12,0);
    tracep->declBus(c+32,"read_bit_counter", false,-1, 15,0);
    tracep->declBus(c+33,"read_bit_address", false,-1, 2,0);
    tracep->declBus(c+34,"read_byte_address", false,-1, 12,0);
    tracep->declBus(c+71,"write_bit_counter", false,-1, 15,0);
    tracep->declBus(c+72,"write_bit_address", false,-1, 2,0);
    tracep->declBus(c+73,"write_byte_address", false,-1, 12,0);
    tracep->declBit(c+74,"sdo_delayed", false,-1);
    tracep->declBit(c+75,"prev_writing", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vintegrated_tb___024root__trace_init_top(Vintegrated_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_init_top\n"); );
    // Body
    Vintegrated_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vintegrated_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintegrated_tb___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vintegrated_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vintegrated_tb___024root__trace_register(Vintegrated_tb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vintegrated_tb___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vintegrated_tb___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vintegrated_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vintegrated_tb___024root__trace_full_sub_0(Vintegrated_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vintegrated_tb___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_full_top_0\n"); );
    // Init
    Vintegrated_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vintegrated_tb___024root*>(voidSelf);
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vintegrated_tb___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vintegrated_tb___024root__trace_full_sub_0(Vintegrated_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done));
    bufp->fullSData(oldp+2,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address),11);
    bufp->fullCData(oldp+3,((0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),6);
    bufp->fullCData(oldp+4,((0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))),5);
    bufp->fullIData(oldp+5,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__lateral),32);
    bufp->fullIData(oldp+6,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__vertical),32);
    bufp->fullIData(oldp+7,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__col),32);
    bufp->fullSData(oldp+8,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address),11);
    bufp->fullSData(oldp+9,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address),13);
    bufp->fullQData(oldp+10,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data),40);
    bufp->fullCData(oldp+12,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count),3);
    bufp->fullIData(oldp+13,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px),32);
    bufp->fullBit(oldp+14,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done));
    bufp->fullQData(oldp+15,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data),40);
    bufp->fullCData(oldp+17,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count),3);
    bufp->fullIData(oldp+18,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px),32);
    bufp->fullSData(oldp+19,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count),11);
    bufp->fullCData(oldp+20,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position),6);
    bufp->fullBit(oldp+21,((0x4b0U == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count))));
    bufp->fullCData(oldp+22,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count),6);
    bufp->fullBit(oldp+23,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running));
    bufp->fullBit(oldp+24,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running));
    bufp->fullBit(oldp+25,(((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                            & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))));
    bufp->fullCData(oldp+26,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)))),8);
    bufp->fullCData(oldp+27,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
    bufp->fullCData(oldp+28,((0xffU & ((IData)(2U) 
                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)))),8);
    bufp->fullCData(oldp+29,((0xffU & ((IData)(0x20U) 
                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)))),8);
    bufp->fullCData(oldp+30,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg),8);
    bufp->fullCData(oldp+31,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg),8);
    bufp->fullSData(oldp+32,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter),16);
    bufp->fullCData(oldp+33,((7U & ((IData)(7U) - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter)))),3);
    bufp->fullSData(oldp+34,((0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter) 
                                         >> 3U))),13);
    bufp->fullBit(oldp+35,(vlSelf->integrated_tb__DOT__sdi));
    bufp->fullBit(oldp+36,(vlSelf->integrated_tb__DOT__sck));
    bufp->fullBit(oldp+37,(vlSelf->integrated_tb__DOT__reading));
    bufp->fullIData(oldp+38,(vlSelf->integrated_tb__DOT__it),32);
    bufp->fullIData(oldp+39,(vlSelf->integrated_tb__DOT__read_it),32);
    bufp->fullBit(oldp+40,(vlSelf->integrated_tb__DOT__writing_last));
    bufp->fullSData(oldp+41,(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output),13);
    bufp->fullBit(oldp+42,((1U & (~ (IData)(vlSelf->integrated_tb__DOT__reading)))));
    bufp->fullCData(oldp+43,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][0U]),8);
    bufp->fullCData(oldp+44,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][1U]),8);
    bufp->fullCData(oldp+45,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [0U][2U]),8);
    bufp->fullCData(oldp+46,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][0U]),8);
    bufp->fullCData(oldp+47,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][1U]),8);
    bufp->fullCData(oldp+48,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [1U][2U]),8);
    bufp->fullCData(oldp+49,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][0U]),8);
    bufp->fullCData(oldp+50,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][1U]),8);
    bufp->fullCData(oldp+51,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__data_out
                             [2U][2U]),8);
    bufp->fullIData(oldp+52,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out),32);
    bufp->fullCData(oldp+53,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][0U]),8);
    bufp->fullCData(oldp+54,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][1U]),8);
    bufp->fullCData(oldp+55,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [0U][2U]),8);
    bufp->fullCData(oldp+56,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][0U]),8);
    bufp->fullCData(oldp+57,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][1U]),8);
    bufp->fullCData(oldp+58,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [1U][2U]),8);
    bufp->fullCData(oldp+59,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][0U]),8);
    bufp->fullCData(oldp+60,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][1U]),8);
    bufp->fullCData(oldp+61,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                             [2U][2U]),8);
    bufp->fullCData(oldp+62,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][0U]),8);
    bufp->fullCData(oldp+63,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][1U]),8);
    bufp->fullCData(oldp+64,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [0U][2U]),8);
    bufp->fullCData(oldp+65,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][0U]),8);
    bufp->fullCData(oldp+66,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][1U]),8);
    bufp->fullCData(oldp+67,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [1U][2U]),8);
    bufp->fullCData(oldp+68,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][0U]),8);
    bufp->fullCData(oldp+69,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][1U]),8);
    bufp->fullCData(oldp+70,(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
                             [2U][2U]),8);
    bufp->fullSData(oldp+71,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter),16);
    bufp->fullCData(oldp+72,((7U & ((IData)(7U) - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))),3);
    bufp->fullSData(oldp+73,((0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                         >> 3U))),13);
    bufp->fullBit(oldp+74,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed));
    bufp->fullBit(oldp+75,(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing));
    bufp->fullBit(oldp+76,(vlSelf->clk));
    bufp->fullBit(oldp+77,((1U & (((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing)) 
                                   & (IData)(vlSelf->integrated_tb__DOT__writing))
                                   ? (vlSelf->integrated_tb__DOT__dut__DOT__output_memory
                                      [0U] >> 7U) : (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed)))));
    bufp->fullBit(oldp+78,(vlSelf->integrated_tb__DOT__writing));
    bufp->fullBit(oldp+79,(vlSelf->integrated_tb__DOT__spi_done));
    bufp->fullIData(oldp+80,(0x28U),32);
    bufp->fullIData(oldp+81,(0x1eU),32);
}
