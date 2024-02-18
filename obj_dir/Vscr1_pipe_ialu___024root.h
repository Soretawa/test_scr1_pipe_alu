// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscr1_pipe_ialu.h for the primary calling header

#ifndef VERILATED_VSCR1_PIPE_IALU___024ROOT_H_
#define VERILATED_VSCR1_PIPE_IALU___024ROOT_H_  // guard

#include "verilated.h"


class Vscr1_pipe_ialu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscr1_pipe_ialu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(exu2ialu_rvm_cmd_vd_i,0,0);
    VL_OUT8(ialu2exu_rvm_res_rdy_o,0,0);
    VL_IN8(exu2ialu_cmd_i,4,0);
    VL_OUT8(ialu2exu_cmp_res_o,0,0);
    CData/*3:0*/ scr1_pipe_ialu__DOT__main_sum_flags;
    CData/*0:0*/ scr1_pipe_ialu__DOT__main_ops_diff_sgn;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_cmd_is_iter;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_iter_req;
    CData/*1:0*/ scr1_pipe_ialu__DOT__mdu_fsm_ff;
    CData/*1:0*/ scr1_pipe_ialu__DOT__mdu_fsm_next;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_cmd_mul;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_cmd_rem;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_op1_is_neg;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_res_c_ff;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_res_c_next;
    CData/*0:0*/ scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn;
    CData/*0:0*/ scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(exu2ialu_main_op1_i,31,0);
    VL_IN(exu2ialu_main_op2_i,31,0);
    VL_OUT(ialu2exu_main_res_o,31,0);
    VL_IN(exu2ialu_addr_op1_i,31,0);
    VL_IN(exu2ialu_addr_op2_i,31,0);
    VL_OUT(ialu2exu_addr_res_o,31,0);
    IData/*31:0*/ scr1_pipe_ialu__DOT__shft_res;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_ff;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_next;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_iter_cnt;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_iter_cnt_next;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_hi_ff;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_hi_next;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_lo_ff;
    IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_lo_next;
    IData/*31:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ scr1_pipe_ialu__DOT__main_sum_res;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vscr1_pipe_ialu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vscr1_pipe_ialu___024root(Vscr1_pipe_ialu__Syms* symsp, const char* v__name);
    ~Vscr1_pipe_ialu___024root();
    VL_UNCOPYABLE(Vscr1_pipe_ialu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
