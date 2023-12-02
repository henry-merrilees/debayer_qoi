// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated.h for the primary calling header

#include "verilated.h"

#include "Vintegrated__Syms.h"
#include "Vintegrated__Syms.h"
#include "Vintegrated___024unit.h"

void Vintegrated___024unit___ctor_var_reset(Vintegrated___024unit* vlSelf);

Vintegrated___024unit::Vintegrated___024unit(Vintegrated__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vintegrated___024unit___ctor_var_reset(this);
}

void Vintegrated___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vintegrated___024unit::~Vintegrated___024unit() {
}
