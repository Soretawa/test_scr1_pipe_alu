// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSCR1_PIPE_IALU__SYMS_H_
#define VERILATED_VSCR1_PIPE_IALU__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vscr1_pipe_ialu.h"

// INCLUDE MODULE CLASSES
#include "Vscr1_pipe_ialu___024root.h"
#include "Vscr1_pipe_ialu___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vscr1_pipe_ialu__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vscr1_pipe_ialu* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vscr1_pipe_ialu___024root      TOP;

    // CONSTRUCTORS
    Vscr1_pipe_ialu__Syms(VerilatedContext* contextp, const char* namep, Vscr1_pipe_ialu* modelp);
    ~Vscr1_pipe_ialu__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
