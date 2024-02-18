// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscr1_pipe_ialu.h for the primary calling header

#ifndef VERILATED_VSCR1_PIPE_IALU___024UNIT_H_
#define VERILATED_VSCR1_PIPE_IALU___024UNIT_H_  // guard

#include "verilated.h"


class Vscr1_pipe_ialu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscr1_pipe_ialu___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vscr1_pipe_ialu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vscr1_pipe_ialu___024unit(Vscr1_pipe_ialu__Syms* symsp, const char* v__name);
    ~Vscr1_pipe_ialu___024unit();
    VL_UNCOPYABLE(Vscr1_pipe_ialu___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
