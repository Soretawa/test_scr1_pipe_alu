// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_pipe_ialu.h for the primary calling header

#include "Vscr1_pipe_ialu__pch.h"
#include "Vscr1_pipe_ialu__Syms.h"
#include "Vscr1_pipe_ialu___024unit.h"

void Vscr1_pipe_ialu___024unit___ctor_var_reset(Vscr1_pipe_ialu___024unit* vlSelf);

Vscr1_pipe_ialu___024unit::Vscr1_pipe_ialu___024unit(Vscr1_pipe_ialu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vscr1_pipe_ialu___024unit___ctor_var_reset(this);
}

void Vscr1_pipe_ialu___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vscr1_pipe_ialu___024unit::~Vscr1_pipe_ialu___024unit() {
}
