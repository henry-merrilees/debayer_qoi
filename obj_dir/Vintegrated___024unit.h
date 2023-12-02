// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vintegrated.h for the primary calling header

#ifndef VERILATED_VINTEGRATED___024UNIT_H_
#define VERILATED_VINTEGRATED___024UNIT_H_  // guard

#include "verilated.h"


class Vintegrated__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vintegrated___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vintegrated__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vintegrated___024unit(Vintegrated__Syms* symsp, const char* v__name);
    ~Vintegrated___024unit();
    VL_UNCOPYABLE(Vintegrated___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
