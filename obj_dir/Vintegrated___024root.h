// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintegrated.h for the primary calling header

#ifndef VERILATED_VINTEGRATED___024ROOT_H_
#define VERILATED_VINTEGRATED___024ROOT_H_  // guard

#include "verilated.h"


class Vintegrated__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintegrated___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(sck,0,0);
    VL_IN8(sdi,0,0);
    VL_IN8(reading,0,0);
    VL_OUT8(sdo,0,0);
    VL_OUT8(writing,0,0);
    VL_OUT8(spi_done,0,0);
    CData/*0:0*/ integrated__DOT__integrated_core__DOT__color_done;
    QData/*39:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__output_data;
    CData/*2:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__output_count;
    CData/*0:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__done;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0;
    QData/*39:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data;
    CData/*2:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count;
    CData/*5:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position;
    CData/*5:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    CData/*0:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running;
    CData/*0:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0;
    CData/*7:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0;
    CData/*0:0*/ integrated__DOT__spi__DOT__sdo_delayed;
    CData/*0:0*/ integrated__DOT__spi__DOT__prev_writing;
    CData/*0:0*/ integrated__DOT__spi__DOT____Vlvbound_h3df50bb2__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__sck__0;
    CData/*0:0*/ __VactContinue;
    SData/*12:0*/ integrated__DOT__bytes_output;
    SData/*10:0*/ integrated__DOT__integrated_core__DOT__color__DOT__address;
    SData/*10:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__input_address;
    SData/*12:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__output_address;
    SData/*10:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count;
    SData/*15:0*/ integrated__DOT__spi__DOT__read_bit_counter;
    SData/*15:0*/ integrated__DOT__spi__DOT__write_bit_counter;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__color__DOT__lateral;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__color__DOT__vertical;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__color__DOT__col;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__color__DOT__pixel_out;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px;
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 1200> integrated__DOT__data_in;
    VlUnpacked<CData/*7:0*/, 6000> integrated__DOT__output_memory;
    VlUnpacked<IData/*31:0*/, 1200> integrated__DOT__integrated_core__DOT__qoi_input_memory;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> integrated__DOT__integrated_core__DOT__color__DOT__data_out;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels;
    VlUnpacked<VlUnpacked<CData/*7:0*/, 3>, 3> integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended;
    VlUnpacked<IData/*31:0*/, 64> integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vintegrated__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintegrated___024root(Vintegrated__Syms* symsp, const char* v__name);
    ~Vintegrated___024root();
    VL_UNCOPYABLE(Vintegrated___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
