// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vintegrated_tb__Syms.h"
#include "Vintegrated_tb.h"
#include "Vintegrated_tb___024root.h"
#include "Vintegrated_tb___024unit.h"

// FUNCTIONS
Vintegrated_tb__Syms::~Vintegrated_tb__Syms()
{
}

Vintegrated_tb__Syms::Vintegrated_tb__Syms(VerilatedContext* contextp, const char* namep, Vintegrated_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
