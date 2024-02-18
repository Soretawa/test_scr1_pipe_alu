// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
class Vtop___024unit;


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(exu2ialu_rvm_cmd_vd_i,0,0);
        VL_OUT8(ialu2exu_rvm_res_rdy_o,0,0);
        VL_IN8(exu2ialu_cmd_i,4,0);
        VL_OUT8(ialu2exu_cmp_res_o,0,0);
        CData/*0:0*/ scr1_pipe_ialu__DOT__clk;
        CData/*0:0*/ scr1_pipe_ialu__DOT__rst_n;
        CData/*0:0*/ scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i;
        CData/*0:0*/ scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o;
        CData/*4:0*/ scr1_pipe_ialu__DOT__exu2ialu_cmd_i;
        CData/*0:0*/ scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o;
        CData/*3:0*/ scr1_pipe_ialu__DOT__main_sum_flags;
        CData/*0:0*/ scr1_pipe_ialu__DOT__main_sum_pos_ovflw;
        CData/*0:0*/ scr1_pipe_ialu__DOT__main_sum_neg_ovflw;
        CData/*0:0*/ scr1_pipe_ialu__DOT__main_ops_diff_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__main_ops_non_zero;
        CData/*0:0*/ scr1_pipe_ialu__DOT__ialu_cmd_shft;
        CData/*4:0*/ scr1_pipe_ialu__DOT__shft_op2;
        CData/*1:0*/ scr1_pipe_ialu__DOT__shft_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_cmd_is_iter;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_iter_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_iter_rdy;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_corr_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_corr_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT__rem_corr_req;
        CData/*1:0*/ scr1_pipe_ialu__DOT__mdu_fsm_ff;
        CData/*1:0*/ scr1_pipe_ialu__DOT__mdu_fsm_next;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_fsm_idle;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_fsm_corr;
        CData/*1:0*/ scr1_pipe_ialu__DOT__mdu_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_cmd_mul;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_cmd_div;
        CData/*1:0*/ scr1_pipe_ialu__DOT__mul_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mul_cmd_hi;
        CData/*1:0*/ scr1_pipe_ialu__DOT__div_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_cmd_div;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_cmd_rem;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mul_op1_is_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mul_op2_is_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mul_op1_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mul_op2_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_ops_are_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_op1_is_neg;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_op2_is_neg;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_res_rem_c;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_quo_bit;
        CData/*0:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_sum_sub;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_iter_cnt_en;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_res_upd;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_res_c_ff;
        CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_res_c_next;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__clk;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__rst_n;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_rvm_cmd_vd_i;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o;
        CData/*4:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_cmp_res_o;
        CData/*3:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_sum_pos_ovflw;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_sum_neg_ovflw;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_ops_diff_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_ops_non_zero;
    };
    struct {
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__ialu_cmd_shft;
        CData/*4:0*/ scr1_pipe_ialu__DOT____Vtogcov__shft_op2;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__shft_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_is_iter;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_corr_req;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_mul;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_cmd_hi;
        CData/*1:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_cmd;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_cmd_div;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_cmd_rem;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op1_is_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op2_is_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op1_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op2_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_ops_are_sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_op1_is_neg;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_op2_is_neg;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff;
        CData/*0:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next;
        CData/*0:0*/ scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn;
        CData/*0:0*/ scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv;
        CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0;
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
        IData/*31:0*/ scr1_pipe_ialu__DOT__exu2ialu_main_op1_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT__exu2ialu_main_op2_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT__ialu2exu_main_res_o;
        IData/*31:0*/ scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT__ialu2exu_addr_res_o;
        IData/*31:0*/ scr1_pipe_ialu__DOT__shft_op1;
        IData/*31:0*/ scr1_pipe_ialu__DOT__shft_res;
        IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_rem;
        IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_quo;
        IData/*31:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_ff;
        IData/*31:0*/ scr1_pipe_ialu__DOT__div_dvdnd_lo_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_iter_cnt;
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_iter_cnt_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_hi_ff;
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_hi_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_lo_ff;
    };
    struct {
        IData/*31:0*/ scr1_pipe_ialu__DOT__mdu_res_lo_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__shft_op1;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__shft_res;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_res_rem;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_res_quo;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff;
        IData/*31:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next;
        IData/*31:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ scr1_pipe_ialu__DOT__main_sum_res;
        QData/*32:0*/ scr1_pipe_ialu__DOT__mul_op1;
        QData/*32:0*/ scr1_pipe_ialu__DOT__mul_op2;
        QData/*63:0*/ scr1_pipe_ialu__DOT__mul_res;
        QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op1;
        QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op2;
        QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_res;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__main_sum_res;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op1;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_op2;
        QData/*63:0*/ scr1_pipe_ialu__DOT____Vtogcov__mul_res;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2;
        QData/*32:0*/ scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr IData/*31:0*/ scr1_pipe_ialu__DOT__SCR1_MUL_WIDTH = 0x00000020U;
    static constexpr IData/*31:0*/ scr1_pipe_ialu__DOT__SCR1_MUL_RES_WIDTH = 0x00000040U;
    static constexpr IData/*31:0*/ scr1_pipe_ialu__DOT__SCR1_MDU_SUM_WIDTH = 0x00000021U;
    static constexpr IData/*31:0*/ scr1_pipe_ialu__DOT__SCR1_DIV_WIDTH = 1U;
    static constexpr IData/*31:0*/ scr1_pipe_ialu__DOT__SCR1_DIV_CNT_INIT = 0x40000000U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
