// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated_tb.h for the primary calling header

#include "verilated.h"

#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb___024root.h"

void Vintegrated_tb___024root___eval_act(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__0(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0;
    integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0 = 0;
    SData/*10:0*/ __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address = 0;
    SData/*10:0*/ __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0;
    SData/*10:0*/ __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address = 0;
    SData/*12:0*/ __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address = 0;
    CData/*5:0*/ __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0;
    CData/*5:0*/ __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    IData/*31:0*/ __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0;
    // Body
    vlSelf->__Vdly__integrated_tb__DOT__it = vlSelf->integrated_tb__DOT__it;
    vlSelf->__Vdly__integrated_tb__DOT__read_it = vlSelf->integrated_tb__DOT__read_it;
    vlSelf->__Vdlyvset__integrated_tb__DOT__output_memory__v0 = 0U;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 = 0U;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 0U;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address;
    vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__bytes_output 
        = vlSelf->integrated_tb__DOT__dut__DOT__bytes_output;
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v0 = 0U;
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v1 = 0U;
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v2 = 0U;
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v3 = 0U;
    vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v4 = 0U;
    vlSelf->__Vdly__integrated_tb__DOT__it = ((IData)(1U) 
                                              + vlSelf->integrated_tb__DOT__it);
    integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__pixel_out;
    if ((0x4afU >= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))) {
        __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 
            = integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT____Vlvbound_hc20cade2__0;
        __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 = 1U;
        __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address;
    }
    __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = (0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address) 
                      + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count)));
    if ((0U < (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count))) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0 
            = (0xffU & (IData)((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x20U)));
        if ((0x176fU >= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address))) {
            vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v0 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_hd93d9012__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v0 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address;
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0 
            = (0xffU & (IData)((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x18U)));
        if ((0x176fU >= (0x1fffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v1 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19647613__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v1 = 1U;
            vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v1 
                = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0 
            = (0xffU & (IData)((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 0x10U)));
        if ((0x176fU >= (0x1fffU & ((IData)(2U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v2 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h19670c0f__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v2 = 1U;
            vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v2 
                = (0x1fffU & ((IData)(2U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0 
            = (0xffU & (IData)((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data 
                                >> 8U)));
        if ((0x176fU >= (0x1fffU & ((IData)(3U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v3 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h196de583__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v3 = 1U;
            vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v3 
                = (0x1fffU & ((IData)(3U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0 
            = (0xffU & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data));
        if ((0x176fU >= (0x1fffU & ((IData)(4U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address))))) {
            vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v4 
                = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT____Vlvbound_h195a3e88__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v4 = 1U;
            vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v4 
                = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address)));
        }
    }
    if (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count)));
        __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px;
        __Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 = 1U;
        __Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position;
        if ((1U & (~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done)))) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address 
                = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address)));
        }
        if (((0x4b1U == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address)) 
             & (~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done)))) {
            vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__bytes_output 
                = (0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address) 
                              + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count)));
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_data 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data;
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_count 
            = (((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running)) 
                & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running))
                ? 1U : (7U & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count)));
        if (((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running) 
             & (0x3dU > (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)))) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xc000000000ULL | ((QData)((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)) 
                                      << 0x20U));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 0U;
        } else if (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running) {
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xc000000000ULL | ((QData)((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count)) 
                                      << 0x20U));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 1U;
        } else if ((vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index
                    [vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position] 
                    == vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px)) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = ((QData)((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index_position)) 
                   << 0x20U);
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
        } else if ((IData)((((0U == (0xf0U & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg))) 
                             & (0U == (0xf0U & (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg)))) 
                            & (0U == (3U & (((IData)(0x20U) 
                                             + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)) 
                                            >> 6U)))))) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0x8000000000ULL | (((QData)((IData)(
                                                       (0x3fU 
                                                        & ((IData)(0x20U) 
                                                           + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   (((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg) 
                                                                     << 0x1cU) 
                                                                    | (0xf000000U 
                                                                       & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg) 
                                                                          << 0x18U)))))));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 2U;
        } else if ((((0U == (0x3fU & (((IData)(2U) 
                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0)) 
                                      >> 2U))) & (0U 
                                                  == 
                                                  (0x3fU 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0)) 
                                                      >> 2U)))) 
                    & (0U == (0x3fU & (((IData)(2U) 
                                        + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0)) 
                                       >> 2U))))) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0x4000000000ULL | (((QData)((IData)(
                                                       (3U 
                                                        & ((IData)(2U) 
                                                           + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0))))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(
                                                        (3U 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))))) 
                                        << 0x22U) | 
                                       ((QData)((IData)(
                                                        (3U 
                                                         & ((IData)(2U) 
                                                            + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0))))) 
                                        << 0x20U))));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 1U;
        } else if (((0xffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px) 
                    == (0xffU & vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px))) {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = ((QData)((IData)((0xfe000000U | (vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
                                                   >> 8U)))) 
                   << 8U);
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 4U;
        } else {
            __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_data 
                = (0xff00000000ULL | (QData)((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px)));
            vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__staged_count = 5U;
        }
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px 
            = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px;
    } else {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__pixel_count = 0U;
        __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address = 0U;
        vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__bytes_output = 0U;
        __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count = 0U;
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__prev_px = 0xffU;
    }
    if (__Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory[__Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0] 
            = __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory__v0;
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address 
        = __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__output_address;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__done 
        = (0x4b2U <= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address 
        = __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__last_running 
        = vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__running;
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count 
        = __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__run_count;
    if (__Vdlyvset__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index[__Vdlyvdim0__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0] 
            = __Vdlyvval__integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__index__v0;
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__cur_px 
        = ((0x4afU >= (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address))
            ? vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi_input_memory
           [vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__input_address]
            : 0U);
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
    if (vlSelf->integrated_tb__DOT__reading) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done = 0U;
        __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address = 0U;
    } else if ((0x4b0U == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address))) {
        vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color_done = 1U;
    } else {
        __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address 
            = (0x7ffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address)));
    }
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__dr_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_h17160d48__0) 
                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT__db_dg 
        = (0xffU & ((IData)(8U) + ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_he95b88f6__0) 
                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__qoi__DOT__core__DOT____VdfgTmp_hedfa1f09__0))));
    vlSelf->integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address 
        = __Vdly__integrated_tb__DOT__dut__DOT__integrated_core__DOT__color__DOT__address;
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
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__1(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter 
        = vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter;
    vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter 
        = ((IData)(vlSelf->integrated_tb__DOT__writing)
            ? (0xffffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))
            : 0U);
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__2(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__2\n"); );
    // Init
    SData/*10:0*/ __Vdlyvdim0__integrated_tb__DOT__dut__DOT__data_in__v0;
    __Vdlyvdim0__integrated_tb__DOT__dut__DOT__data_in__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__integrated_tb__DOT__dut__DOT__data_in__v0;
    __Vdlyvlsb__integrated_tb__DOT__dut__DOT__data_in__v0 = 0;
    CData/*0:0*/ __Vdlyvval__integrated_tb__DOT__dut__DOT__data_in__v0;
    __Vdlyvval__integrated_tb__DOT__dut__DOT__data_in__v0 = 0;
    CData/*0:0*/ __Vdlyvset__integrated_tb__DOT__dut__DOT__data_in__v0;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__data_in__v0 = 0;
    SData/*15:0*/ __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter;
    __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter = 0;
    // Body
    __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter 
        = vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter;
    __Vdlyvset__integrated_tb__DOT__dut__DOT__data_in__v0 = 0U;
    if (vlSelf->integrated_tb__DOT__reading) {
        __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter)));
        vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT____Vlvbound_h3df50bb2__0 
            = vlSelf->integrated_tb__DOT__sdi;
        if ((0x4afU >= (0x7ffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter) 
                                  >> 3U)))) {
            __Vdlyvval__integrated_tb__DOT__dut__DOT__data_in__v0 
                = vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT____Vlvbound_h3df50bb2__0;
            __Vdlyvset__integrated_tb__DOT__dut__DOT__data_in__v0 = 1U;
            __Vdlyvlsb__integrated_tb__DOT__dut__DOT__data_in__v0 
                = (7U & ((IData)(7U) - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter)));
            __Vdlyvdim0__integrated_tb__DOT__dut__DOT__data_in__v0 
                = (0x7ffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter) 
                             >> 3U));
        }
    } else {
        __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter = 0U;
    }
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter 
        = __Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__read_bit_counter;
    if (__Vdlyvset__integrated_tb__DOT__dut__DOT__data_in__v0) {
        vlSelf->integrated_tb__DOT__dut__DOT__data_in[__Vdlyvdim0__integrated_tb__DOT__dut__DOT__data_in__v0] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__integrated_tb__DOT__dut__DOT__data_in__v0))) 
                & vlSelf->integrated_tb__DOT__dut__DOT__data_in
                [__Vdlyvdim0__integrated_tb__DOT__dut__DOT__data_in__v0]) 
               | (0xffU & ((IData)(__Vdlyvval__integrated_tb__DOT__dut__DOT__data_in__v0) 
                           << (IData)(__Vdlyvlsb__integrated_tb__DOT__dut__DOT__data_in__v0))));
    }
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__3(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__3\n"); );
    // Init
    SData/*12:0*/ __Vdlyvdim0__integrated_tb__DOT__output_memory__v0;
    __Vdlyvdim0__integrated_tb__DOT__output_memory__v0 = 0;
    CData/*2:0*/ __Vdlyvlsb__integrated_tb__DOT__output_memory__v0;
    __Vdlyvlsb__integrated_tb__DOT__output_memory__v0 = 0;
    CData/*0:0*/ __Vdlyvval__integrated_tb__DOT__output_memory__v0;
    __Vdlyvval__integrated_tb__DOT__output_memory__v0 = 0;
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    if (VL_GTS_III(32, 0x4b00U, vlSelf->integrated_tb__DOT__it)) {
        vlSelf->integrated_tb__DOT__sdi = (1U & (((0x4afU 
                                                   >= 
                                                   (0x7ffU 
                                                    & VL_DIVS_III(32, 
                                                                  VL_DIVS_III(32, vlSelf->integrated_tb__DOT__it, (IData)(2U)), (IData)(8U))))
                                                   ? 
                                                  vlSelf->integrated_tb__DOT__data_in
                                                  [
                                                  (0x7ffU 
                                                   & VL_DIVS_III(32, 
                                                                 VL_DIVS_III(32, vlSelf->integrated_tb__DOT__it, (IData)(2U)), (IData)(8U)))]
                                                   : 0U) 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - 
                                                     VL_MODDIVS_III(32, 
                                                                    VL_DIVS_III(32, vlSelf->integrated_tb__DOT__it, (IData)(2U)), (IData)(8U))))));
        vlSelf->integrated_tb__DOT__sck = (1U & VL_MODDIVS_III(32, vlSelf->integrated_tb__DOT__it, (IData)(2U)));
    } else if ((0x4b00U == vlSelf->integrated_tb__DOT__it)) {
        vlSelf->integrated_tb__DOT__reading = 0U;
    } else if (((IData)(vlSelf->integrated_tb__DOT__writing) 
                & (~ (IData)(vlSelf->integrated_tb__DOT__writing_last)))) {
        vlSelf->__Vdly__integrated_tb__DOT__read_it = 0U;
        vlSelf->integrated_tb__DOT__sck = 0U;
    } else if (((IData)(vlSelf->integrated_tb__DOT__writing) 
                & (~ (IData)(vlSelf->integrated_tb__DOT__spi_done)))) {
        vlSelf->__Vdly__integrated_tb__DOT__read_it 
            = ((IData)(1U) + vlSelf->integrated_tb__DOT__read_it);
        vlSelf->integrated_tb__DOT__sck = (1U & VL_MODDIVS_III(32, vlSelf->integrated_tb__DOT__read_it, (IData)(2U)));
        vlSelf->integrated_tb__DOT____Vlvbound_hbc168415__0 
            = (1U & (((~ (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing)) 
                      & (IData)(vlSelf->integrated_tb__DOT__writing))
                      ? (vlSelf->integrated_tb__DOT__dut__DOT__output_memory
                         [0U] >> 7U) : (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed)));
        if (VL_LIKELY((0x176fU >= (0x1fffU & VL_DIVS_III(32, 
                                                         VL_DIVS_III(32, vlSelf->integrated_tb__DOT__read_it, (IData)(2U)), (IData)(8U)))))) {
            __Vdlyvval__integrated_tb__DOT__output_memory__v0 
                = vlSelf->integrated_tb__DOT____Vlvbound_hbc168415__0;
            vlSelf->__Vdlyvset__integrated_tb__DOT__output_memory__v0 = 1U;
            __Vdlyvlsb__integrated_tb__DOT__output_memory__v0 
                = (7U & ((IData)(7U) - VL_MODDIVS_III(32, 
                                                      VL_DIVS_III(32, vlSelf->integrated_tb__DOT__read_it, (IData)(2U)), (IData)(8U))));
            __Vdlyvdim0__integrated_tb__DOT__output_memory__v0 
                = (0x1fffU & VL_DIVS_III(32, VL_DIVS_III(32, vlSelf->integrated_tb__DOT__read_it, (IData)(2U)), (IData)(8U)));
        }
    } else if (VL_UNLIKELY(((IData)(vlSelf->integrated_tb__DOT__spi_done) 
                            & (IData)(vlSelf->integrated_tb__DOT__writing)))) {
        VL_WRITEF("Bytes output: %4#\n",13,vlSelf->integrated_tb__DOT__dut__DOT__bytes_output);
        __Vtemp_1[0U] = 0x2e6d656dU;
        __Vtemp_1[1U] = 0x5f737069U;
        __Vtemp_1[2U] = 0x706f7374U;
        __Vtemp_1[3U] = 0x7075745fU;
        __Vtemp_1[4U] = 0x6f7574U;
        VL_WRITEMEM_N(true, 8, 6000, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                      ,  &(vlSelf->integrated_tb__DOT__output_memory)
                      , 0, ~0ULL);
        VL_FINISH_MT("integrated.sv", 581, "");
    }
    vlSelf->integrated_tb__DOT__it = vlSelf->__Vdly__integrated_tb__DOT__it;
    vlSelf->integrated_tb__DOT__read_it = vlSelf->__Vdly__integrated_tb__DOT__read_it;
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__output_memory__v0) {
        vlSelf->integrated_tb__DOT__output_memory[__Vdlyvdim0__integrated_tb__DOT__output_memory__v0] 
            = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__integrated_tb__DOT__output_memory__v0))) 
                & vlSelf->integrated_tb__DOT__output_memory
                [__Vdlyvdim0__integrated_tb__DOT__output_memory__v0]) 
               | (0xffU & ((IData)(__Vdlyvval__integrated_tb__DOT__output_memory__v0) 
                           << (IData)(__Vdlyvlsb__integrated_tb__DOT__output_memory__v0))));
    }
    vlSelf->integrated_tb__DOT__dut__DOT__bytes_output 
        = vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__bytes_output;
    vlSelf->integrated_tb__DOT__writing_last = vlSelf->integrated_tb__DOT__writing;
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_comb__TOP__0(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_comb__TOP__0\n"); );
    // Body
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

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__4(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__4\n"); );
    // Body
    if (vlSelf->integrated_tb__DOT__writing) {
        vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing = 1U;
        vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__sdo_delayed 
            = (1U & (((0x176fU >= (0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                              >> 3U)))
                       ? vlSelf->integrated_tb__DOT__dut__DOT__output_memory
                      [(0x1fffU & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                   >> 3U))] : 0U) >> 
                     (7U & ((IData)(7U) - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))));
    } else {
        vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__prev_writing = 0U;
    }
    vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter 
        = vlSelf->__Vdly__integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter;
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_sequent__TOP__5(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_sequent__TOP__5\n"); );
    // Body
    vlSelf->integrated_tb__DOT__writing = (0U < (IData)(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output));
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v0) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v0] 
            = vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v0;
    }
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v1) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v1] 
            = vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v1;
    }
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v2) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v2] 
            = vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v2;
    }
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v3) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v3] 
            = vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v3;
    }
    if (vlSelf->__Vdlyvset__integrated_tb__DOT__dut__DOT__output_memory__v4) {
        vlSelf->integrated_tb__DOT__dut__DOT__output_memory[vlSelf->__Vdlyvdim0__integrated_tb__DOT__dut__DOT__output_memory__v4] 
            = vlSelf->__Vdlyvval__integrated_tb__DOT__dut__DOT__output_memory__v4;
    }
}

VL_INLINE_OPT void Vintegrated_tb___024root___nba_comb__TOP__1(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->integrated_tb__DOT__spi_done = (((0x1fffU 
                                              & ((IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter) 
                                                 >> 3U)) 
                                             == (IData)(vlSelf->integrated_tb__DOT__dut__DOT__bytes_output)) 
                                            & (6U == 
                                               (7U 
                                                & ((IData)(7U) 
                                                   - (IData)(vlSelf->integrated_tb__DOT__dut__DOT__spi__DOT__write_bit_counter)))));
}

void Vintegrated_tb___024root___eval_nba(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((5ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vintegrated_tb___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vintegrated_tb___024root___eval_triggers__act(Vintegrated_tb___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__act(Vintegrated_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vintegrated_tb___024root___dump_triggers__nba(Vintegrated_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vintegrated_tb___024root___eval(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval\n"); );
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
            Vintegrated_tb___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vintegrated_tb___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("integrated.sv", 525, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vintegrated_tb___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vintegrated_tb___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("integrated.sv", 525, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vintegrated_tb___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vintegrated_tb___024root___eval_debug_assertions(Vintegrated_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vintegrated_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vintegrated_tb___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
