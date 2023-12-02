// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vintegrated_tb.h for the primary calling header

#include "verilated.h"

#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb___024unit.h"

void Vintegrated_tb___024unit___ctor_var_reset(Vintegrated_tb___024unit* vlSelf);

Vintegrated_tb___024unit::Vintegrated_tb___024unit(Vintegrated_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vintegrated_tb___024unit___ctor_var_reset(this);
}

void Vintegrated_tb___024unit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vintegrated_tb___024unit::~Vintegrated_tb___024unit() {
}
