// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_pipe_ialu.h for the primary calling header

#include "Vscr1_pipe_ialu__pch.h"
#include "Vscr1_pipe_ialu___024root.h"

VL_INLINE_OPT void Vscr1_pipe_ialu___024root___ico_sequent__TOP__0(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ scr1_pipe_ialu__DOT__main_sum_pos_ovflw;
    scr1_pipe_ialu__DOT__main_sum_pos_ovflw = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__main_sum_neg_ovflw;
    scr1_pipe_ialu__DOT__main_sum_neg_ovflw = 0;
    IData/*31:0*/ scr1_pipe_ialu__DOT__shft_op1;
    scr1_pipe_ialu__DOT__shft_op1 = 0;
    CData/*4:0*/ scr1_pipe_ialu__DOT__shft_op2;
    scr1_pipe_ialu__DOT__shft_op2 = 0;
    CData/*1:0*/ scr1_pipe_ialu__DOT__shft_cmd;
    scr1_pipe_ialu__DOT__shft_cmd = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_corr_req;
    scr1_pipe_ialu__DOT__mdu_corr_req = 0;
    CData/*1:0*/ scr1_pipe_ialu__DOT__mul_cmd;
    scr1_pipe_ialu__DOT__mul_cmd = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_res_rem_c;
    scr1_pipe_ialu__DOT__div_res_rem_c = 0;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_rem;
    scr1_pipe_ialu__DOT__div_res_rem = 0;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_quo;
    scr1_pipe_ialu__DOT__div_res_quo = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_quo_bit;
    scr1_pipe_ialu__DOT__div_quo_bit = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_sum_sub;
    scr1_pipe_ialu__DOT__mdu_sum_sub = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op1;
    scr1_pipe_ialu__DOT__mdu_sum_op1 = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op2;
    scr1_pipe_ialu__DOT__mdu_sum_op2 = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_res;
    scr1_pipe_ialu__DOT__mdu_sum_res = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0;
    scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0 = 0;
    QData/*63:0*/ scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0;
    scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 = 0;
    // Body
    vlSelf->ialu2exu_addr_res_o = (vlSelf->exu2ialu_addr_op1_i 
                                   + vlSelf->exu2ialu_addr_op2_i);
    scr1_pipe_ialu__DOT__shft_cmd = (((0xcU == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                      | ((0xdU == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                         | (0xeU == (IData)(vlSelf->exu2ialu_cmd_i))))
                                      ? (((0xcU != (IData)(vlSelf->exu2ialu_cmd_i)) 
                                          << 1U) | 
                                         (0xeU == (IData)(vlSelf->exu2ialu_cmd_i)))
                                      : 0U);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_res = (0x1ffffffffULL 
                                                 & ((4U 
                                                     != (IData)(vlSelf->exu2ialu_cmd_i))
                                                     ? 
                                                    ((QData)((IData)(vlSelf->exu2ialu_main_op1_i)) 
                                                     - (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))
                                                     : 
                                                    ((QData)((IData)(vlSelf->exu2ialu_main_op1_i)) 
                                                     + (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))));
    scr1_pipe_ialu__DOT__main_sum_pos_ovflw = (((~ 
                                                 (vlSelf->exu2ialu_main_op1_i 
                                                  >> 0x1fU)) 
                                                & (vlSelf->exu2ialu_main_op2_i 
                                                   >> 0x1fU)) 
                                               & (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                  >> 0x1fU));
    scr1_pipe_ialu__DOT__main_sum_neg_ovflw = (((vlSelf->exu2ialu_main_op1_i 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->exu2ialu_main_op2_i 
                                                    >> 0x1fU))) 
                                               & (~ 
                                                  (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                   >> 0x1fU)));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                                 >> 0x20U))));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (7U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | (8U 
                                                      & ((~ (IData)(
                                                                    (0U 
                                                                     != (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)))) 
                                                         << 3U)));
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = (
                                                   (9U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)) 
                                                   | ((4U 
                                                       & ((IData)(
                                                                  (vlSelf->scr1_pipe_ialu__DOT__main_sum_res 
                                                                   >> 0x1fU)) 
                                                          << 2U)) 
                                                      | (((IData)(scr1_pipe_ialu__DOT__main_sum_pos_ovflw) 
                                                          | (IData)(scr1_pipe_ialu__DOT__main_sum_neg_ovflw)) 
                                                         << 1U)));
    vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn 
        = ((vlSelf->exu2ialu_main_op1_i ^ vlSelf->exu2ialu_main_op2_i) 
           >> 0x1fU);
    scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0 = (
                                                   (0x10U 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                   | (0x11U 
                                                      == (IData)(vlSelf->exu2ialu_cmd_i)));
    vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0 
        = ((0x16U == (IData)(vlSelf->exu2ialu_cmd_i)) 
           | (0x14U == (IData)(vlSelf->exu2ialu_cmd_i)));
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem = ((0x15U 
                                                 == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                | (0x16U 
                                                   == (IData)(vlSelf->exu2ialu_cmd_i)));
    scr1_pipe_ialu__DOT__shft_op1 = vlSelf->exu2ialu_main_op1_i;
    scr1_pipe_ialu__DOT__shft_op2 = (0x1fU & vlSelf->exu2ialu_main_op2_i);
    vlSelf->scr1_pipe_ialu__DOT__shft_res = ((2U == (IData)(scr1_pipe_ialu__DOT__shft_cmd))
                                              ? (scr1_pipe_ialu__DOT__shft_op1 
                                                 >> (IData)(scr1_pipe_ialu__DOT__shft_op2))
                                              : ((3U 
                                                  == (IData)(scr1_pipe_ialu__DOT__shft_cmd))
                                                  ? 
                                                 VL_SHIFTRS_III(32,32,5, scr1_pipe_ialu__DOT__shft_op1, (IData)(scr1_pipe_ialu__DOT__shft_op2))
                                                  : 
                                                 (scr1_pipe_ialu__DOT__shft_op1 
                                                  << (IData)(scr1_pipe_ialu__DOT__shft_op2))));
    vlSelf->ialu2exu_cmp_res_o = 0U;
    if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) >> 4U)))) {
        if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
            if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                          >> 2U)))) {
                vlSelf->ialu2exu_cmp_res_o = (1U & 
                                              ((2U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->exu2ialu_cmd_i))
                                                    ? 
                                                   (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))
                                                    : 
                                                   (~ 
                                                    (((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                      >> 2U) 
                                                     ^ 
                                                     ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                      >> 1U))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->exu2ialu_cmd_i))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                     >> 3U))
                                                    : 
                                                   ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                    >> 3U))));
            }
        } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
            if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                vlSelf->ialu2exu_cmp_res_o = (1U & 
                                              ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)
                                                : (
                                                   ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                    >> 2U) 
                                                   ^ 
                                                   ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                    >> 1U))));
            }
        }
    }
    scr1_pipe_ialu__DOT__mul_cmd = (((IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0) 
                                     << 1U) | ((0x10U 
                                                == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                               | (0x12U 
                                                  == (IData)(vlSelf->exu2ialu_cmd_i))));
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul = ((0xfU 
                                                 == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                | ((0x12U 
                                                    == (IData)(vlSelf->exu2ialu_cmd_i)) 
                                                   | (IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0)));
    vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg = (
                                                   (~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)) 
                                                   & (vlSelf->exu2ialu_main_op1_i 
                                                      >> 0x1fU));
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter = 
        ((0x13U == (IData)(vlSelf->exu2ialu_cmd_i)) 
         | ((0x14U == (IData)(vlSelf->exu2ialu_cmd_i)) 
            | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)));
    scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 = VL_MULS_QQQ(64, 
                                                              VL_EXTENDS_QQ(64,33, 
                                                                            ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                                                              ? 
                                                                             (((QData)((IData)(
                                                                                ((vlSelf->exu2ialu_main_op1_i 
                                                                                >> 0x1fU) 
                                                                                & (~ (IData)(
                                                                                (3U 
                                                                                == (IData)(scr1_pipe_ialu__DOT__mul_cmd))))))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelf->exu2ialu_main_op1_i)))
                                                                              : 0ULL)), 
                                                              VL_EXTENDS_QQ(64,33, 
                                                                            ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                                                              ? 
                                                                             (((QData)((IData)(
                                                                                ((~ (IData)(scr1_pipe_ialu__DOT____VdfgTmp_hf0464054__0)) 
                                                                                & (vlSelf->exu2ialu_main_op2_i 
                                                                                >> 0x1fU)))) 
                                                                               << 0x20U) 
                                                                              | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)))
                                                                              : 0ULL)));
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
        = ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                ? 0x40000000U : vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
            : VL_SHIFTR_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt, 1U));
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((0U 
                                                     != vlSelf->exu2ialu_main_op1_i) 
                                                    & ((0U 
                                                        != vlSelf->exu2ialu_main_op2_i) 
                                                       & (0U 
                                                          == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)))));
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
        = ((1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)) 
                  | (2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))))
            ? 0U : ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                     ? VL_SHIFTL_III(32,32,32, vlSelf->exu2ialu_main_op1_i, 1U)
                     : VL_SHIFTL_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff, 1U)));
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 
        = ((2U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
    scr1_pipe_ialu__DOT__mdu_sum_sub = 0U;
    scr1_pipe_ialu__DOT__mdu_sum_op1 = 0ULL;
    scr1_pipe_ialu__DOT__mdu_sum_op2 = 0ULL;
    if ((2U == ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                 ? 2U : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                          ? 1U : 0U)))) {
        if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                   ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff));
            scr1_pipe_ialu__DOT__mdu_sum_op1 = (0x1ffffffffULL 
                                                & (QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)));
        } else {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)) 
                   & (~ vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
            scr1_pipe_ialu__DOT__mdu_sum_op1 = (0x1ffffffffULL 
                                                & ((0U 
                                                    == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                                                    ? 
                                                   VL_EXTENDS_QI(33,2, 
                                                                 (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                                   << 1U) 
                                                                  | (vlSelf->exu2ialu_main_op1_i 
                                                                     >> 0x1fU)))
                                                    : 
                                                   (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                                                                       >> 0x1fU))))));
        }
        vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv 
            = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)) 
               & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
        scr1_pipe_ialu__DOT__mdu_sum_op2 = (((QData)((IData)(
                                                             ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)) 
                                                              & (vlSelf->exu2ialu_main_op2_i 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)));
        scr1_pipe_ialu__DOT__mdu_sum_sub = (1U ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv) 
                                                  ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn)));
    }
    scr1_pipe_ialu__DOT__mdu_sum_res = (0x1ffffffffULL 
                                        & ((IData)(scr1_pipe_ialu__DOT__mdu_sum_sub)
                                            ? (scr1_pipe_ialu__DOT__mdu_sum_op1 
                                               - scr1_pipe_ialu__DOT__mdu_sum_op2)
                                            : (scr1_pipe_ialu__DOT__mdu_sum_op1 
                                               + scr1_pipe_ialu__DOT__mdu_sum_op2)));
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0 
        = ((0U != (IData)(scr1_pipe_ialu__DOT__mul_cmd))
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                ? (IData)((scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0 
                           >> 0x20U)) : 0U) : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                                                ? (IData)(scr1_pipe_ialu__DOT____VdfgTmp_h9863f6f0__0)
                                                : 0U));
    scr1_pipe_ialu__DOT__div_res_rem = 0U;
    scr1_pipe_ialu__DOT__div_res_rem_c = 0U;
    scr1_pipe_ialu__DOT__div_res_quo = 0U;
    scr1_pipe_ialu__DOT__div_quo_bit = 0U;
    if (vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0) {
        scr1_pipe_ialu__DOT__div_res_rem = (IData)(scr1_pipe_ialu__DOT__mdu_sum_res);
        scr1_pipe_ialu__DOT__div_res_rem_c = (1U & (IData)(
                                                           (scr1_pipe_ialu__DOT__mdu_sum_res 
                                                            >> 0x20U)));
        scr1_pipe_ialu__DOT__div_quo_bit = (1U & ((~ 
                                                   ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                    ^ (IData)(scr1_pipe_ialu__DOT__div_res_rem_c))) 
                                                  | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                     & (0U 
                                                        == 
                                                        ((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                                                          | (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)) 
                                                         | (IData)(
                                                                   (scr1_pipe_ialu__DOT__mdu_sum_res 
                                                                    >> 0x20U)))))));
        scr1_pipe_ialu__DOT__div_res_quo = ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                                             ? (IData)(scr1_pipe_ialu__DOT__div_quo_bit)
                                             : ((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                                                 << 1U) 
                                                | (IData)(scr1_pipe_ialu__DOT__div_quo_bit)));
    }
    if (vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = scr1_pipe_ialu__DOT__div_res_rem;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = scr1_pipe_ialu__DOT__div_res_quo;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = scr1_pipe_ialu__DOT__div_res_rem_c;
        vlSelf->ialu2exu_main_res_o = 0U;
        scr1_pipe_ialu__DOT__mdu_corr_req = (((0U == 
                                               (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                 << 1U) 
                                                | (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0))) 
                                              & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn)) 
                                             | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                & ((0U 
                                                    != scr1_pipe_ialu__DOT__div_res_rem) 
                                                   & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                      ^ (IData)(scr1_pipe_ialu__DOT__div_res_rem_c)))));
    } else {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
        vlSelf->ialu2exu_main_res_o = 0U;
        scr1_pipe_ialu__DOT__mdu_corr_req = 0U;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
                    ? ((IData)(scr1_pipe_ialu__DOT__mdu_corr_req)
                        ? 2U : 0U) : 1U);
        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
        }
    }
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 
        = (1U & ((~ (IData)(scr1_pipe_ialu__DOT__mdu_corr_req)) 
                 & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                    ? vlSelf->exu2ialu_main_op1_i
                                    : 0xffffffffU);
                            vlSelf->ialu2exu_rvm_res_rdy_o 
                                = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? scr1_pipe_ialu__DOT__div_res_rem
                                    : scr1_pipe_ialu__DOT__div_res_quo);
                            vlSelf->ialu2exu_rvm_res_rdy_o 
                                = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                    : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                            vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = (
                                                   ((0U 
                                                     != vlSelf->exu2ialu_main_op2_i) 
                                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                                    ? vlSelf->exu2ialu_main_op1_i
                                                    : 0xffffffffU);
                    vlSelf->ialu2exu_rvm_res_rdy_o 
                        = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                                    ? scr1_pipe_ialu__DOT__div_res_rem
                                                    : scr1_pipe_ialu__DOT__div_res_quo);
                    vlSelf->ialu2exu_rvm_res_rdy_o 
                        = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                                    ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                                    : 
                                                   (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                    vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                ? vlSelf->exu2ialu_main_op1_i
                                : 0xffffffffU);
                        vlSelf->ialu2exu_rvm_res_rdy_o 
                            = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? scr1_pipe_ialu__DOT__div_res_rem
                                : scr1_pipe_ialu__DOT__div_res_quo);
                        vlSelf->ialu2exu_rvm_res_rdy_o 
                            = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                        vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                    }
                } else {
                    vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
                }
            } else {
                vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
            }
        }
    } else if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((4U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0
                                                : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                                            : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                                        : ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (~ 
                                                   (1U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)))
                                                : (~ 
                                                   ((1U 
                                                     & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (1U 
                                                     & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                        >> 1U)))))
                                            : ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (~ 
                                                   (1U 
                                                    & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                       >> 3U)))
                                                : (1U 
                                                   & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                      >> 3U)))));
    } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))
                                            : ((1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 2U)) 
                                               ^ (1U 
                                                  & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                     >> 1U))))
                                        : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)
                                            : (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)));
    } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? (vlSelf->exu2ialu_main_op1_i 
                                           ^ vlSelf->exu2ialu_main_op2_i)
                                        : (vlSelf->exu2ialu_main_op1_i 
                                           | vlSelf->exu2ialu_main_op2_i));
    } else if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = (vlSelf->exu2ialu_main_op1_i 
                                       & vlSelf->exu2ialu_main_op2_i);
    }
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = 
        ((~ (IData)(vlSelf->ialu2exu_rvm_res_rdy_o)) 
         & (IData)(vlSelf->exu2ialu_rvm_cmd_vd_i));
}

void Vscr1_pipe_ialu___024root___eval_ico(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vscr1_pipe_ialu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void Vscr1_pipe_ialu___024root___eval_triggers__ico(Vscr1_pipe_ialu___024root* vlSelf);

bool Vscr1_pipe_ialu___024root___eval_phase__ico(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vscr1_pipe_ialu___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vscr1_pipe_ialu___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vscr1_pipe_ialu___024root___eval_act(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vscr1_pipe_ialu___024root___nba_sequent__TOP__0(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd) {
        vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next;
        vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
            = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next;
    }
}

VL_INLINE_OPT void Vscr1_pipe_ialu___024root___nba_sequent__TOP__1(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff = ((IData)(vlSelf->rst_n)
                                                ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next)
                                                : 0U);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((0U 
                                                     != vlSelf->exu2ialu_main_op1_i) 
                                                    & ((0U 
                                                        != vlSelf->exu2ialu_main_op2_i) 
                                                       & (0U 
                                                          == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)))));
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 
        = ((2U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
}

VL_INLINE_OPT void Vscr1_pipe_ialu___024root___nba_comb__TOP__0(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_corr_req;
    scr1_pipe_ialu__DOT__mdu_corr_req = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_res_rem_c;
    scr1_pipe_ialu__DOT__div_res_rem_c = 0;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_rem;
    scr1_pipe_ialu__DOT__div_res_rem = 0;
    IData/*31:0*/ scr1_pipe_ialu__DOT__div_res_quo;
    scr1_pipe_ialu__DOT__div_res_quo = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__div_quo_bit;
    scr1_pipe_ialu__DOT__div_quo_bit = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT__mdu_sum_sub;
    scr1_pipe_ialu__DOT__mdu_sum_sub = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op1;
    scr1_pipe_ialu__DOT__mdu_sum_op1 = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_op2;
    scr1_pipe_ialu__DOT__mdu_sum_op2 = 0;
    QData/*32:0*/ scr1_pipe_ialu__DOT__mdu_sum_res;
    scr1_pipe_ialu__DOT__mdu_sum_res = 0;
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 = 0;
    // Body
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
        = ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                ? 0x40000000U : vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
            : VL_SHIFTR_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt, 1U));
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
        = ((1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)) 
                  | (2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))))
            ? 0U : ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                     ? VL_SHIFTL_III(32,32,32, vlSelf->exu2ialu_main_op1_i, 1U)
                     : VL_SHIFTL_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff, 1U)));
    scr1_pipe_ialu__DOT__mdu_sum_sub = 0U;
    scr1_pipe_ialu__DOT__mdu_sum_op1 = 0ULL;
    scr1_pipe_ialu__DOT__mdu_sum_op2 = 0ULL;
    if ((2U == ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                 ? 2U : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul)
                          ? 1U : 0U)))) {
        if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                   ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff));
            scr1_pipe_ialu__DOT__mdu_sum_op1 = (0x1ffffffffULL 
                                                & (QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)));
        } else {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)) 
                   & (~ vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
            scr1_pipe_ialu__DOT__mdu_sum_op1 = (0x1ffffffffULL 
                                                & ((0U 
                                                    == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                                                    ? 
                                                   VL_EXTENDS_QI(33,2, 
                                                                 (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                                   << 1U) 
                                                                  | (vlSelf->exu2ialu_main_op1_i 
                                                                     >> 0x1fU)))
                                                    : 
                                                   (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)) 
                                                     << 1U) 
                                                    | (QData)((IData)(
                                                                      (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                                                                       >> 0x1fU))))));
        }
        vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv 
            = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)) 
               & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
        scr1_pipe_ialu__DOT__mdu_sum_op2 = (((QData)((IData)(
                                                             ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0)) 
                                                              & (vlSelf->exu2ialu_main_op2_i 
                                                                 >> 0x1fU)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)));
        scr1_pipe_ialu__DOT__mdu_sum_sub = (1U ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv) 
                                                  ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn)));
    }
    scr1_pipe_ialu__DOT__mdu_sum_res = (0x1ffffffffULL 
                                        & ((IData)(scr1_pipe_ialu__DOT__mdu_sum_sub)
                                            ? (scr1_pipe_ialu__DOT__mdu_sum_op1 
                                               - scr1_pipe_ialu__DOT__mdu_sum_op2)
                                            : (scr1_pipe_ialu__DOT__mdu_sum_op1 
                                               + scr1_pipe_ialu__DOT__mdu_sum_op2)));
    scr1_pipe_ialu__DOT__div_res_rem = 0U;
    scr1_pipe_ialu__DOT__div_res_rem_c = 0U;
    scr1_pipe_ialu__DOT__div_res_quo = 0U;
    scr1_pipe_ialu__DOT__div_quo_bit = 0U;
    if (vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0) {
        scr1_pipe_ialu__DOT__div_res_rem = (IData)(scr1_pipe_ialu__DOT__mdu_sum_res);
        scr1_pipe_ialu__DOT__div_res_rem_c = (1U & (IData)(
                                                           (scr1_pipe_ialu__DOT__mdu_sum_res 
                                                            >> 0x20U)));
        scr1_pipe_ialu__DOT__div_quo_bit = (1U & ((~ 
                                                   ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                    ^ (IData)(scr1_pipe_ialu__DOT__div_res_rem_c))) 
                                                  | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                     & (0U 
                                                        == 
                                                        ((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                                                          | (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)) 
                                                         | (IData)(
                                                                   (scr1_pipe_ialu__DOT__mdu_sum_res 
                                                                    >> 0x20U)))))));
        scr1_pipe_ialu__DOT__div_res_quo = ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))
                                             ? (IData)(scr1_pipe_ialu__DOT__div_quo_bit)
                                             : ((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                                                 << 1U) 
                                                | (IData)(scr1_pipe_ialu__DOT__div_quo_bit)));
    }
    if (vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = scr1_pipe_ialu__DOT__div_res_rem;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = scr1_pipe_ialu__DOT__div_res_quo;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = scr1_pipe_ialu__DOT__div_res_rem_c;
        vlSelf->ialu2exu_main_res_o = 0U;
        scr1_pipe_ialu__DOT__mdu_corr_req = (((0U == 
                                               (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                 << 1U) 
                                                | (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0))) 
                                              & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn)) 
                                             | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                & ((0U 
                                                    != scr1_pipe_ialu__DOT__div_res_rem) 
                                                   & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                      ^ (IData)(scr1_pipe_ialu__DOT__div_res_rem_c)))));
    } else {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
        vlSelf->ialu2exu_main_res_o = 0U;
        scr1_pipe_ialu__DOT__mdu_corr_req = 0U;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
                    ? ((IData)(scr1_pipe_ialu__DOT__mdu_corr_req)
                        ? 2U : 0U) : 1U);
        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
        }
    }
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 
        = (1U & ((~ (IData)(scr1_pipe_ialu__DOT__mdu_corr_req)) 
                 & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt));
    vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                    ? vlSelf->exu2ialu_main_op1_i
                                    : 0xffffffffU);
                            vlSelf->ialu2exu_rvm_res_rdy_o 
                                = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? scr1_pipe_ialu__DOT__div_res_rem
                                    : scr1_pipe_ialu__DOT__div_res_quo);
                            vlSelf->ialu2exu_rvm_res_rdy_o 
                                = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                    : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                            vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = (
                                                   ((0U 
                                                     != vlSelf->exu2ialu_main_op2_i) 
                                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                                    ? vlSelf->exu2ialu_main_op1_i
                                                    : 0xffffffffU);
                    vlSelf->ialu2exu_rvm_res_rdy_o 
                        = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                                    ? scr1_pipe_ialu__DOT__div_res_rem
                                                    : scr1_pipe_ialu__DOT__div_res_quo);
                    vlSelf->ialu2exu_rvm_res_rdy_o 
                        = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->ialu2exu_main_res_o = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                                    ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                                    : 
                                                   (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                    vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                ? vlSelf->exu2ialu_main_op1_i
                                : 0xffffffffU);
                        vlSelf->ialu2exu_rvm_res_rdy_o 
                            = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? scr1_pipe_ialu__DOT__div_res_rem
                                : scr1_pipe_ialu__DOT__div_res_quo);
                        vlSelf->ialu2exu_rvm_res_rdy_o 
                            = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? (IData)(scr1_pipe_ialu__DOT__mdu_sum_res)
                                : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                        vlSelf->ialu2exu_rvm_res_rdy_o = 1U;
                    }
                } else {
                    vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
                }
            } else {
                vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
            }
        }
    } else if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((4U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0
                                                : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                                            : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                                        : ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (~ 
                                                   (1U 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)))
                                                : (~ 
                                                   ((1U 
                                                     & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                        >> 2U)) 
                                                    ^ 
                                                    (1U 
                                                     & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                        >> 1U)))))
                                            : ((1U 
                                                & (IData)(vlSelf->exu2ialu_cmd_i))
                                                ? (~ 
                                                   (1U 
                                                    & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                       >> 3U)))
                                                : (1U 
                                                   & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                      >> 3U)))));
    } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))
                                            : ((1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 2U)) 
                                               ^ (1U 
                                                  & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                     >> 1U))))
                                        : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                            ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)
                                            : (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)));
    } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                                        ? (vlSelf->exu2ialu_main_op1_i 
                                           ^ vlSelf->exu2ialu_main_op2_i)
                                        : (vlSelf->exu2ialu_main_op1_i 
                                           | vlSelf->exu2ialu_main_op2_i));
    } else if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->ialu2exu_main_res_o = (vlSelf->exu2ialu_main_op1_i 
                                       & vlSelf->exu2ialu_main_op2_i);
    }
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = 
        ((~ (IData)(vlSelf->ialu2exu_rvm_res_rdy_o)) 
         & (IData)(vlSelf->exu2ialu_rvm_cmd_vd_i));
}

void Vscr1_pipe_ialu___024root___eval_nba(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_pipe_ialu___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_pipe_ialu___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vscr1_pipe_ialu___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vscr1_pipe_ialu___024root___eval_triggers__act(Vscr1_pipe_ialu___024root* vlSelf);

bool Vscr1_pipe_ialu___024root___eval_phase__act(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vscr1_pipe_ialu___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vscr1_pipe_ialu___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vscr1_pipe_ialu___024root___eval_phase__nba(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vscr1_pipe_ialu___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__ico(Vscr1_pipe_ialu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__nba(Vscr1_pipe_ialu___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__act(Vscr1_pipe_ialu___024root* vlSelf);
#endif  // VL_DEBUG

void Vscr1_pipe_ialu___024root___eval(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vscr1_pipe_ialu___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("scr1_pipe_ialu.sv", 30, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vscr1_pipe_ialu___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vscr1_pipe_ialu___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("scr1_pipe_ialu.sv", 30, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vscr1_pipe_ialu___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("scr1_pipe_ialu.sv", 30, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vscr1_pipe_ialu___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vscr1_pipe_ialu___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vscr1_pipe_ialu___024root___eval_debug_assertions(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->exu2ialu_rvm_cmd_vd_i 
                     & 0xfeU))) {
        Verilated::overWidthError("exu2ialu_rvm_cmd_vd_i");}
    if (VL_UNLIKELY((vlSelf->exu2ialu_cmd_i & 0xe0U))) {
        Verilated::overWidthError("exu2ialu_cmd_i");}
}
#endif  // VL_DEBUG
