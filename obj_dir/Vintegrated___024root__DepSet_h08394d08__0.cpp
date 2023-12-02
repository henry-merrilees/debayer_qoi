// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated.h for the primary calling header

#include "verilated.h"

#include "Vintegrated__Syms.h"
#include "Vintegrated___024root.h"

void Vintegrated___024root___eval_act(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vintegrated___024root___nba_sequent__TOP__0(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__integrated__DOT__data_in__v0;
    __Vdlyvdim0__integrated__DOT__data_in__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__integrated__DOT__data_in__v0;
    __Vdlyvlsb__integrated__DOT__data_in__v0 = 0;
    CData/*0:0*/ __Vdlyvval__integrated__DOT__data_in__v0;
    __Vdlyvval__integrated__DOT__data_in__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__data_in__v0;
    __Vdlyvset__integrated__DOT__data_in__v0 = 0;
    SData/*15:0*/ __Vdly__integrated__DOT__spi__DOT__read_bit_counter;
    __Vdly__integrated__DOT__spi__DOT__read_bit_counter = 0;
    // Body
    __Vdly__integrated__DOT__spi__DOT__read_bit_counter 
        = vlSelf->integrated__DOT__spi__DOT__read_bit_counter;
    __Vdlyvset__integrated__DOT__data_in__v0 = 0U;
    if (vlSelf->reading) {
        __Vdly__integrated__DOT__spi__DOT__read_bit_counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter)));
        vlSelf->integrated__DOT__spi__DOT____Vlvbound_h3df50bb2__0 
            = vlSelf->sdi;
        if ((0x4afU >= (0x7ffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter) 
                                  >> 3U)))) {
            __Vdlyvval__integrated__DOT__data_in__v0 
                = vlSelf->integrated__DOT__spi__DOT____Vlvbound_h3df50bb2__0;
            __Vdlyvset__integrated__DOT__data_in__v0 = 1U;
            __Vdlyvlsb__integrated__DOT__data_in__v0 
                = (7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter)));
            __Vdlyvdim0__integrated__DOT__data_in__v0 
                = (0x7ffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__read_bit_counter) 
                             >> 3U));
        }
    } else {
        __Vdly__integrated__DOT__spi__DOT__read_bit_counter = 0U;
    }
    vlSelf->integrated__DOT__spi__DOT__read_bit_counter 
        = __Vdly__integrated__DOT__spi__DOT__read_bit_counter;
    if (__Vdlyvset__integrated__DOT__data_in__v0) {
        vlSelf->integrated__DOT__data_in[__Vdlyvdim0__integrated__DOT__data_in__v0] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__integrated__DOT__data_in__v0))) 
                & vlSelf->integrated__DOT__data_in[__Vdlyvdim0__integrated__DOT__data_in__v0]) 
               | (0xffU & ((IData)(__Vdlyvval__integrated__DOT__data_in__v0) 
                           << (IData)(__Vdlyvlsb__integrated__DOT__data_in__v0))));
    }
}

VL_INLINE_OPT void Vintegrated___024root___nba_sequent__TOP__1(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*15:0*/ __Vdly__integrated__DOT__spi__DOT__write_bit_counter;
    __Vdly__integrated__DOT__spi__DOT__write_bit_counter = 0;
    // Body
    __Vdly__integrated__DOT__spi__DOT__write_bit_counter 
        = vlSelf->integrated__DOT__spi__DOT__write_bit_counter;
    if (vlSelf->writing) {
        __Vdly__integrated__DOT__spi__DOT__write_bit_counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter)));
        vlSelf->integrated__DOT__spi__DOT__sdo_delayed 
            = (1U & (((0x176fU >= (0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter) 
                                              >> 3U)))
                       ? vlSelf->integrated__DOT__output_memory
                      [(0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter) 
                                   >> 3U))] : 0U) >> 
                     (7U & ((IData)(7U) - (IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter)))));
        vlSelf->integrated__DOT__spi__DOT__prev_writing = 1U;
    } else {
        __Vdly__integrated__DOT__spi__DOT__write_bit_counter = 0U;
        vlSelf->integrated__DOT__spi__DOT__prev_writing = 0U;
    }
    vlSelf->integrated__DOT__spi__DOT__write_bit_counter 
        = __Vdly__integrated__DOT__spi__DOT__write_bit_counter;
}

VL_INLINE_OPT void Vintegrated___024root___nba_sequent__TOP__2(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ integrated__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0;
    integrated__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0 = 0;
    SData/*10:0*/ __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address;
    __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address = 0;
    SData/*10:0*/ __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    SData/*10:0*/ __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address = 0;
    SData/*12:0*/ __Vdlyvdim0__integrated__DOT__output_memory__v0;
    __Vdlyvdim0__integrated__DOT__output_memory__v0 = 0;
    CData/*7:0*/ __Vdlyvval__integrated__DOT__output_memory__v0;
    __Vdlyvval__integrated__DOT__output_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__output_memory__v0;
    __Vdlyvset__integrated__DOT__output_memory__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__integrated__DOT__output_memory__v1;
    __Vdlyvdim0__integrated__DOT__output_memory__v1 = 0;
    CData/*7:0*/ __Vdlyvval__integrated__DOT__output_memory__v1;
    __Vdlyvval__integrated__DOT__output_memory__v1 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__output_memory__v1;
    __Vdlyvset__integrated__DOT__output_memory__v1 = 0;
    SData/*12:0*/ __Vdlyvdim0__integrated__DOT__output_memory__v2;
    __Vdlyvdim0__integrated__DOT__output_memory__v2 = 0;
    CData/*7:0*/ __Vdlyvval__integrated__DOT__output_memory__v2;
    __Vdlyvval__integrated__DOT__output_memory__v2 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__output_memory__v2;
    __Vdlyvset__integrated__DOT__output_memory__v2 = 0;
    SData/*12:0*/ __Vdlyvdim0__integrated__DOT__output_memory__v3;
    __Vdlyvdim0__integrated__DOT__output_memory__v3 = 0;
    CData/*7:0*/ __Vdlyvval__integrated__DOT__output_memory__v3;
    __Vdlyvval__integrated__DOT__output_memory__v3 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__output_memory__v3;
    __Vdlyvset__integrated__DOT__output_memory__v3 = 0;
    SData/*12:0*/ __Vdlyvdim0__integrated__DOT__output_memory__v4;
    __Vdlyvdim0__integrated__DOT__output_memory__v4 = 0;
    CData/*7:0*/ __Vdlyvval__integrated__DOT__output_memory__v4;
    __Vdlyvval__integrated__DOT__output_memory__v4 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__output_memory__v4;
    __Vdlyvset__integrated__DOT__output_memory__v4 = 0;
    SData/*12:0*/ __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__output_address;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__output_address = 0;
    CData/*5:0*/ __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0;
    CData/*5:0*/ __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    IData/*31:0*/ __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    // Body
    __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0U;
    __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0U;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address 
        = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address;
    __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address 
        = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
        = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address;
    __Vdlyvset__integrated__DOT__output_memory__v0 = 0U;
    __Vdlyvset__integrated__DOT__output_memory__v1 = 0U;
    __Vdlyvset__integrated__DOT__output_memory__v2 = 0U;
    __Vdlyvset__integrated__DOT__output_memory__v3 = 0U;
    __Vdlyvset__integrated__DOT__output_memory__v4 = 0U;
    integrated__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0 
        = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out;
    if ((0x4afU >= (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))) {
        __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 
            = integrated__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0;
        __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 = 1U;
        __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address;
    }
    __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = (0x1fffU & ((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address) 
                      + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count)));
    if ((0U < (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count))) {
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0 
            = (0xffU & (IData)((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x20U)));
        if ((0x176fU >= (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address))) {
            __Vdlyvval__integrated__DOT__output_memory__v0 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0;
            __Vdlyvset__integrated__DOT__output_memory__v0 = 1U;
            __Vdlyvdim0__integrated__DOT__output_memory__v0 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address;
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0 
            = (0xffU & (IData)((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x18U)));
        if ((0x176fU >= (0x1fffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            __Vdlyvval__integrated__DOT__output_memory__v1 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0;
            __Vdlyvset__integrated__DOT__output_memory__v1 = 1U;
            __Vdlyvdim0__integrated__DOT__output_memory__v1 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0 
            = (0xffU & (IData)((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x10U)));
        if ((0x176fU >= (0x1fffU & ((IData)(2U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            __Vdlyvval__integrated__DOT__output_memory__v2 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0;
            __Vdlyvset__integrated__DOT__output_memory__v2 = 1U;
            __Vdlyvdim0__integrated__DOT__output_memory__v2 
                = (0x1fffU & ((IData)(2U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0 
            = (0xffU & (IData)((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 8U)));
        if ((0x176fU >= (0x1fffU & ((IData)(3U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            __Vdlyvval__integrated__DOT__output_memory__v3 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0;
            __Vdlyvset__integrated__DOT__output_memory__v3 = 1U;
            __Vdlyvdim0__integrated__DOT__output_memory__v3 
                = (0x1fffU & ((IData)(3U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0 
            = (0xffU & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data));
        if ((0x176fU >= (0x1fffU & ((IData)(4U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            __Vdlyvval__integrated__DOT__output_memory__v4 
                = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0;
            __Vdlyvset__integrated__DOT__output_memory__v4 = 1U;
            __Vdlyvdim0__integrated__DOT__output_memory__v4 
                = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
    }
    if (vlSelf->integrated__DOT__integrated_core__DOT__color_done) {
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count)));
        __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 
            = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px;
        __Vdlyvset__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 1U;
        __Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 
            = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position;
        if ((1U & (~ (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__done)))) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address)));
        }
        if (((0x4b1U == (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address)) 
             & (~ (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__done)))) {
            vlSelf->integrated__DOT__bytes_output = 
                (0x1fffU & ((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address) 
                            + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count)));
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_data 
            = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data;
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_count 
            = (((~ (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))
                ? 1U : (7U & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count)));
        if (((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running) 
             & (0x3dU > (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)))) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xc000000000ULL | ((QData)((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)) 
                                      << 0x20U));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 0U;
        } else if (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running) {
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xc000000000ULL | ((QData)((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)) 
                                      << 0x20U));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 1U;
        } else if ((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index
                    [vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position] 
                    == vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px)) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = ((QData)((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position)) 
                   << 0x20U);
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
        } else if ((IData)((((0U == (0xf0U & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg))) 
                             & (0U == (0xf0U & (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg)))) 
                            & (0U == (3U & (((IData)(0x20U) 
                                             + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)) 
                                            >> 6U)))))) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0x8000000000ULL | (((QData)((IData)(
                                                       (0x3fU 
                                                        & ((IData)(0x20U) 
                                                           + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg) 
                                                                     << 0x1cU) 
                                                                    | (0xf000000U 
                                                                       & ((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg) 
                                                                          << 0x18U)))))));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 2U;
        } else if ((((0U == (0x3fU & (((IData)(2U) 
                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x3fU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)) 
                                                      >> 2U)))) 
                    & (0U == (0x3fU & (((IData)(2U) 
                                        + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)) 
                                       >> 2U))))) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0x4000000000ULL | (((QData)((IData)(
                                                       (3U 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0))))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        (3U 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))))) 
                                        << 0x22U) | 
                                       ((QData)((IData)(
                                                        (3U 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0))))) 
                                        << 0x20U))));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
        } else if (((0xffU & vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px) 
                    == (0xffU & vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px))) {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = ((QData)((IData)((0xfe000000U | (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                   >> 8U)))) 
                   << 8U);
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 4U;
        } else {
            __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xff00000000ULL | (QData)((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px)));
            vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 5U;
        }
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
            = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px;
    } else {
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count = 0U;
        __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address = 0U;
        vlSelf->integrated__DOT__bytes_output = 0U;
        __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px = 0xffU;
    }
    if (__Vdlyvset__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0) {
        vlSelf->integrated__DOT__integrated_core__DOT__qoi_input_memory[__Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0] 
            = __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi_input_memory__v0;
    }
    if (__Vdlyvset__integrated__DOT__output_memory__v0) {
        vlSelf->integrated__DOT__output_memory[__Vdlyvdim0__integrated__DOT__output_memory__v0] 
            = __Vdlyvval__integrated__DOT__output_memory__v0;
    }
    if (__Vdlyvset__integrated__DOT__output_memory__v1) {
        vlSelf->integrated__DOT__output_memory[__Vdlyvdim0__integrated__DOT__output_memory__v1] 
            = __Vdlyvval__integrated__DOT__output_memory__v1;
    }
    if (__Vdlyvset__integrated__DOT__output_memory__v2) {
        vlSelf->integrated__DOT__output_memory[__Vdlyvdim0__integrated__DOT__output_memory__v2] 
            = __Vdlyvval__integrated__DOT__output_memory__v2;
    }
    if (__Vdlyvset__integrated__DOT__output_memory__v3) {
        vlSelf->integrated__DOT__output_memory[__Vdlyvdim0__integrated__DOT__output_memory__v3] 
            = __Vdlyvval__integrated__DOT__output_memory__v3;
    }
    if (__Vdlyvset__integrated__DOT__output_memory__v4) {
        vlSelf->integrated__DOT__output_memory[__Vdlyvdim0__integrated__DOT__output_memory__v4] 
            = __Vdlyvval__integrated__DOT__output_memory__v4;
    }
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__output_address;
    vlSelf->writing = (0U < (IData)(vlSelf->integrated__DOT__bytes_output));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__done 
        = (0x4b2U <= (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address 
        = __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__input_address;
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running 
        = vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running;
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
        = __Vdly__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    if (__Vdlyvset__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0) {
        vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index[__Vdlyvdim0__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0] 
            = __Vdlyvval__integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    }
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
        = ((0x4afU >= (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address))
            ? vlSelf->integrated__DOT__integrated_core__DOT__qoi_input_memory
           [vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__input_address]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position 
        = (0x3fU & (((IData)(3U) * (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                    >> 0x18U)) + (((IData)(5U) 
                                                   * 
                                                   (0xffU 
                                                    & (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                       >> 0x10U))) 
                                                  + 
                                                  (((IData)(7U) 
                                                    * 
                                                    (0xffU 
                                                     & (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                        >> 8U))) 
                                                   + 
                                                   ((IData)(0xbU) 
                                                    * 
                                                    (0xffU 
                                                     & vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px))))));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running 
        = ((0x4b0U != (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count)) 
           & (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
              == vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0 
        = (0xffU & ((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 0x18U) - (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                                  >> 0x18U)));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0 
        = (0xffU & ((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 8U) - (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                               >> 8U)));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0 
        = (0xffU & ((vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                     >> 0x10U) - (vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
                                  >> 0x10U)));
    if (vlSelf->reading) {
        vlSelf->integrated__DOT__integrated_core__DOT__color_done = 0U;
        __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address = 0U;
    } else if ((0x4b0U == (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))) {
        vlSelf->integrated__DOT__integrated_core__DOT__color_done = 1U;
    } else {
        __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)));
    }
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0) 
                                   - (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0) 
                                   - (IData)(vlSelf->integrated__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address 
        = __Vdly__integrated__DOT__integrated_core__DOT__color__DOT__address;
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col 
        = ((1U & VL_MODDIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
            ? ((1U & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
                ? 1U : 2U) : ((1U & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U)))
                               ? 3U : 0U));
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical 
        = ((0U == (0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
            ? 0U : ((0x1dU == (0x1fU & VL_DIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
                     ? 2U : 1U));
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral 
        = ((0U == (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
            ? 0U : ((0x27U == (0x3fU & VL_MODDIV_III(11, (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address), (IData)(0x28U))))
                     ? 2U : 1U));
}

VL_INLINE_OPT void Vintegrated___024root___nba_comb__TOP__0(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->spi_done = (((0x1fffU & ((IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter) 
                                     >> 3U)) == (IData)(vlSelf->integrated__DOT__bytes_output)) 
                        & (6U == (7U & ((IData)(7U) 
                                        - (IData)(vlSelf->integrated__DOT__spi__DOT__write_bit_counter)))));
    vlSelf->sdo = (1U & (((~ (IData)(vlSelf->integrated__DOT__spi__DOT__prev_writing)) 
                          & (IData)(vlSelf->writing))
                          ? (vlSelf->integrated__DOT__output_memory
                             [0U] >> 7U) : (IData)(vlSelf->integrated__DOT__spi__DOT__sdo_delayed)));
}

VL_INLINE_OPT void Vintegrated___024root___nba_comb__TOP__1(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[0U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d7U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x7d7U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[1U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7ffU) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x7ffU) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[2U][0U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x27U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x27U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[0U][1U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d8U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x7d8U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[1U][1U] 
        = ((0x4afU >= (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))
            ? vlSelf->integrated__DOT__data_in[vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[2U][1U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x28U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x28U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[0U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x7d9U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x7d9U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[1U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out[2U][2U] 
        = ((0x4afU >= (0x7ffU & ((IData)(0x29U) + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address))))
            ? vlSelf->integrated__DOT__data_in[(0x7ffU 
                                                & ((IData)(0x29U) 
                                                   + (IData)(vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__address)))]
            : 0U);
    if ((0U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
    } else if ((1U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
    } else if ((2U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__lateral)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__data_out
            [0U][0U];
    }
    if ((0U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
    } else if ((1U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
    } else if ((2U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__vertical)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [2U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[1U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [1U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[0U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][0U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][0U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][1U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][1U];
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels[2U][2U] 
            = vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__edge_handler__DOT__horizontally_extended
            [0U][2U];
    }
    if ((0U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x18U));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff0000U & ((((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                 [0U][1U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]) << 0xeU)));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [2U][0U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                               [0U][2U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [0U][0U]) << 6U)));
    } else if ((1U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                    [2U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                    [2U][0U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                   [0U][2U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [0U][0U]) << 0x16U)));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff0000U & ((((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                 [0U][1U]) + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                [1U][0U]) << 0xeU)));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 8U));
    } else if ((2U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [1U][0U]) << 0x17U)));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x10U));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [2U][1U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [0U][1U]) << 7U)));
    } else if ((3U == vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__col)) {
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff000000U & ((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [2U][1U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                                  [0U][1U]) << 0x17U)));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xff00ffffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                  [1U][1U] << 0x10U));
        vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out 
            = ((0xffff00ffU & vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__pixel_out) 
               | (0xff00U & ((vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [1U][2U] + vlSelf->integrated__DOT__integrated_core__DOT__color__DOT__filter3x3__DOT__pixels
                              [1U][0U]) << 7U)));
    }
}

void Vintegrated___024root___eval_nba(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
}

void Vintegrated___024root___eval_triggers__act(Vintegrated___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated___024root___dump_triggers__act(Vintegrated___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated___024root___dump_triggers__nba(Vintegrated___024root* vlSelf);
#endif  // VL_DEBUG

void Vintegrated___024root___eval(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vintegrated___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vintegrated___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("integrated.sv", 494, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vintegrated___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vintegrated___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("integrated.sv", 494, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vintegrated___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vintegrated___024root___eval_debug_assertions(Vintegrated___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->sdi & 0xfeU))) {
        Verilated::overWidthError("sdi");}
    if (VL_UNLIKELY((vlSelf->sck & 0xfeU))) {
        Verilated::overWidthError("sck");}
    if (VL_UNLIKELY((vlSelf->reading & 0xfeU))) {
        Verilated::overWidthError("reading");}
}
#endif  // VL_DEBUG
