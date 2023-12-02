// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VINTEGRATED_TB__SYMS_H_
#define VERILATED_VINTEGRATED_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vintegrated_tb.h"

// INCLUDE MODULE CLASSES
#include "Vintegrated_tb___024root.h"
#include "Vintegrated_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vintegrated_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vintegrated_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vintegrated_tb___024root       TOP;

    // CONSTRUCTORS
    Vintegrated_tb__Syms(VerilatedContext* contextp, const char* namep, Vintegrated_tb* modelp);
    ~Vintegrated_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
