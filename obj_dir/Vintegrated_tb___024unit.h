// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintegrated_tb.h for the primary calling header

#ifndef VERILATED_VINTEGRATED_TB___024UNIT_H_
#define VERILATED_VINTEGRATED_TB___024UNIT_H_  // guard

#include "verilated.h"


class Vintegrated_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintegrated_tb___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vintegrated_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintegrated_tb___024unit(Vintegrated_tb__Syms* symsp, const char* v__name);
    ~Vintegrated_tb___024unit();
    VL_UNCOPYABLE(Vintegrated_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
