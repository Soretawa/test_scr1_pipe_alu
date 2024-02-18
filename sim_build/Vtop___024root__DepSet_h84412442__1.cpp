// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    ++(vlSymsp->__Vcoverage[909]);
    if (vlSelf->rst_n) {
        ++(vlSymsp->__Vcoverage[908]);
        vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff = vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next;
    } else {
        vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        ++(vlSymsp->__Vcoverage[907]);
    }
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    ++(vlSymsp->__Vcoverage[912]);
                }
            }
            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                ++(vlSymsp->__Vcoverage[911]);
            }
        }
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            ++(vlSymsp->__Vcoverage[910]);
        }
    }
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                              >> 1U)))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        ++(vlSymsp->__Vcoverage[941]);
                    }
                    if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[942]);
                        }
                        if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[943]);
                            }
                        }
                    }
                }
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[941]);
                        }
                        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                    ++(vlSymsp->__Vcoverage[943]);
                                }
                            }
                            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[942]);
                            }
                        }
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                        if ((0U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            if ((1U != (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                    ++(vlSymsp->__Vcoverage[943]);
                                }
                            }
                            if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                                ++(vlSymsp->__Vcoverage[942]);
                            }
                        }
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            ++(vlSymsp->__Vcoverage[941]);
                        }
                    }
                }
            }
        }
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)))) {
        ++(vlSymsp->__Vcoverage[321]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)))) {
        ++(vlSymsp->__Vcoverage[322]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff)));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle = (0U 
                                                 == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff));
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr = (2U 
                                                 == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle))) {
        ++(vlSymsp->__Vcoverage[325]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr))) {
        ++(vlSymsp->__Vcoverage[326]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr;
    }
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero) 
                                                    & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)));
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 
        = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req))) {
        ++(vlSymsp->__Vcoverage[316]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req;
    }
    if (vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0) {
        ++(vlSymsp->__Vcoverage[916]);
    }
    if ((1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0)))) {
        ++(vlSymsp->__Vcoverage[917]);
    }
}

VL_INLINE_OPT void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 = 0;
    // Body
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
            ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)
                ? 0x40000000U : vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt)
            : VL_SHIFTR_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt, 1U));
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
        = ((1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter)) 
                  | (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr)))
            ? 0U : ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
                     ? VL_SHIFTL_III(32,32,32, vlSelf->exu2ialu_main_op1_i, 1U)
                     : VL_SHIFTL_III(32,32,32, vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff, 1U)));
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub = 0U;
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 = 0ULL;
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 = 0ULL;
    if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd))) {
        if (vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr) {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff)));
            vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & (QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)));
        } else {
            vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn 
                = (1U & ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)) 
                         & (~ vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff)));
            vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                = (0x1ffffffffULL & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
                                      ? VL_EXTENDS_QI(33,2, 
                                                      (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                        << 1U) 
                                                       | (vlSelf->exu2ialu_main_op1_i 
                                                          >> 0x1fU)))
                                      : (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff)) 
                                          << 1U) | (QData)((IData)(
                                                                   (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff 
                                                                    >> 0x1fU))))));
        }
        vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv 
            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn) 
               & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn));
        vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 = 
            (((QData)((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg)) 
              << 0x20U) | (QData)((IData)(vlSelf->exu2ialu_main_op2_i)));
        vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub = 
            (1U ^ ((IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv) 
                   ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn)));
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res = (0x1ffffffffULL 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub)
                                                    ? 
                                                   (vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                    - vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)
                                                    : 
                                                   (vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                    + vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[737]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[738]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[739]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[740]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[741]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[742]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[743]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[744]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[745]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[746]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[747]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[748]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[749]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[750]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[751]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[752]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[753]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[754]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[755]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[756]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[757]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[758]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[759]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[760]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[761]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[762]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[763]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[764]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[765]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[766]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next))) {
        ++(vlSymsp->__Vcoverage[767]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[768]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[573]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[574]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[575]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[576]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[577]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[578]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[579]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[580]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[581]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[582]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[583]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[584]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[585]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[586]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[587]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[588]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[589]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[590]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[591]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[592]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[593]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[594]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[595]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[596]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[597]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[598]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[599]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[600]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[601]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[602]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next))) {
        ++(vlSymsp->__Vcoverage[603]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[604]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub))) {
        ++(vlSymsp->__Vcoverage[605]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub;
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1)))) {
        ++(vlSymsp->__Vcoverage[606]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[607]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[608]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[609]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[610]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[611]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[612]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[613]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[614]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[615]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[616]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[617]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[618]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[619]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[620]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[621]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[622]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[623]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[624]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[625]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[626]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[627]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[628]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[629]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[630]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[631]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[632]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[633]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[634]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[635]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[636]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[637]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[638]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2)))) {
        ++(vlSymsp->__Vcoverage[639]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[640]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[641]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[642]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[643]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[644]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[645]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[646]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[647]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[648]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[649]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[650]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[651]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[652]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[653]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[654]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[655]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[656]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[657]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[658]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[659]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[660]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[661]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[662]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[663]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[664]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[665]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[666]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[667]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[668]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[669]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[670]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[671]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res)))) {
        ++(vlSymsp->__Vcoverage[672]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffeULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | (IData)((IData)((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)))));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 1U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 1U))))) {
        ++(vlSymsp->__Vcoverage[673]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffdULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 1U))))) 
                  << 1U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 2U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 2U))))) {
        ++(vlSymsp->__Vcoverage[674]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffffbULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 2U))))) 
                  << 2U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 3U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 3U))))) {
        ++(vlSymsp->__Vcoverage[675]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffff7ULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 3U))))) 
                  << 3U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 4U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 4U))))) {
        ++(vlSymsp->__Vcoverage[676]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffefULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 4U))))) 
                  << 4U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 5U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 5U))))) {
        ++(vlSymsp->__Vcoverage[677]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffdfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 5U))))) 
                  << 5U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 6U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 6U))))) {
        ++(vlSymsp->__Vcoverage[678]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffffbfULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 6U))))) 
                  << 6U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 7U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 7U))))) {
        ++(vlSymsp->__Vcoverage[679]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffff7fULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 7U))))) 
                  << 7U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 8U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 8U))))) {
        ++(vlSymsp->__Vcoverage[680]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffeffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 8U))))) 
                  << 8U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 9U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                           >> 9U))))) {
        ++(vlSymsp->__Vcoverage[681]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffdffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 9U))))) 
                  << 9U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xaU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xaU))))) {
        ++(vlSymsp->__Vcoverage[682]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffffbffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xaU))))) 
                  << 0xaU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xbU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xbU))))) {
        ++(vlSymsp->__Vcoverage[683]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffff7ffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xbU))))) 
                  << 0xbU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xcU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xcU))))) {
        ++(vlSymsp->__Vcoverage[684]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffefffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xcU))))) 
                  << 0xcU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xdU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xdU))))) {
        ++(vlSymsp->__Vcoverage[685]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffdfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xdU))))) 
                  << 0xdU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xeU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xeU))))) {
        ++(vlSymsp->__Vcoverage[686]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffffbfffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xeU))))) 
                  << 0xeU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0xfU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                             >> 0xfU))))) {
        ++(vlSymsp->__Vcoverage[687]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffff7fffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0xfU))))) 
                  << 0xfU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x10U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x10U))))) {
        ++(vlSymsp->__Vcoverage[688]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffeffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x10U))))) 
                  << 0x10U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x11U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x11U))))) {
        ++(vlSymsp->__Vcoverage[689]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffdffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x11U))))) 
                  << 0x11U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x12U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x12U))))) {
        ++(vlSymsp->__Vcoverage[690]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fffbffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x12U))))) 
                  << 0x12U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x13U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x13U))))) {
        ++(vlSymsp->__Vcoverage[691]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fff7ffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x13U))))) 
                  << 0x13U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x14U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x14U))))) {
        ++(vlSymsp->__Vcoverage[692]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffefffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x14U))))) 
                  << 0x14U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x15U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x15U))))) {
        ++(vlSymsp->__Vcoverage[693]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffdfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x15U))))) 
                  << 0x15U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x16U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x16U))))) {
        ++(vlSymsp->__Vcoverage[694]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ffbfffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x16U))))) 
                  << 0x16U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x17U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x17U))))) {
        ++(vlSymsp->__Vcoverage[695]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1ff7fffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x17U))))) 
                  << 0x17U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x18U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x18U))))) {
        ++(vlSymsp->__Vcoverage[696]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1feffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x18U))))) 
                  << 0x18U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x19U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x19U))))) {
        ++(vlSymsp->__Vcoverage[697]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fdffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x19U))))) 
                  << 0x19U));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1aU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1aU))))) {
        ++(vlSymsp->__Vcoverage[698]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1fbffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1bU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1bU))))) {
        ++(vlSymsp->__Vcoverage[699]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1f7ffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1cU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1cU))))) {
        ++(vlSymsp->__Vcoverage[700]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1efffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1dU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1dU))))) {
        ++(vlSymsp->__Vcoverage[701]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1dfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1eU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1eU))))) {
        ++(vlSymsp->__Vcoverage[702]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x1bfffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x1fU)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[703]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0x17fffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
    }
    if ((1U & ((IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                        >> 0x20U)) ^ (IData)((vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
                                              >> 0x20U))))) {
        ++(vlSymsp->__Vcoverage[704]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res 
            = ((0xffffffffULL & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res) 
               | ((QData)((IData)((1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                                 >> 0x20U))))) 
                  << 0x20U));
    }
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_res_quo = 0U;
    vlSelf->scr1_pipe_ialu__DOT__div_quo_bit = 0U;
    if (vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0) {
        vlSelf->scr1_pipe_ialu__DOT__div_res_rem = (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res);
        vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c 
            = (1U & (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                             >> 0x20U)));
        vlSelf->scr1_pipe_ialu__DOT__div_quo_bit = 
            (1U & ((~ ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                       ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c))) 
                   | ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                      & (0U == ((vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next 
                                 | (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)) 
                                | (IData)((vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res 
                                           >> 0x20U)))))));
        vlSelf->scr1_pipe_ialu__DOT__div_res_quo = 
            ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle)
              ? (IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit)
              : ((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff 
                  << 1U) | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit)));
    }
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[475]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[476]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[477]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[478]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[479]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[480]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[481]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[482]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[483]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[484]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[485]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[486]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[487]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[488]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[489]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[490]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[491]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[492]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[493]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[494]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[495]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[496]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[497]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[498]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[499]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[500]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[501]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[502]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[503]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[504]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem))) {
        ++(vlSymsp->__Vcoverage[505]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_res_rem 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[506]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_rem));
    }
    if (vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_quo;
    } else {
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff;
        vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_quo_bit) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit))) {
        ++(vlSymsp->__Vcoverage[539]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit 
            = vlSelf->scr1_pipe_ialu__DOT__div_quo_bit;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c))) {
        ++(vlSymsp->__Vcoverage[474]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c 
            = vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c;
    }
    vlSelf->scr1_pipe_ialu__DOT__rem_corr_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem) 
                                                 & ((0U 
                                                     != vlSelf->scr1_pipe_ialu__DOT__div_res_rem) 
                                                    & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg) 
                                                       ^ (IData)(vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c))));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[507]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[508]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[509]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[510]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[511]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[512]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[513]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[514]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[515]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[516]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[517]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[518]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[519]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[520]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[521]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[522]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[523]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[524]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[525]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[526]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[527]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[528]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[529]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[530]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[531]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[532]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[533]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[534]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[535]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[536]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo))) {
        ++(vlSymsp->__Vcoverage[537]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__div_res_quo 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[538]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__div_res_quo));
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o = 0U;
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[803]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[804]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[805]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[806]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[807]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[808]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[809]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[810]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[811]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[812]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[813]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[814]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[815]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[816]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[817]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[818]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[819]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[820]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[821]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[822]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[823]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[824]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[825]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[826]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[827]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[828]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[829]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[830]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[831]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[832]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next))) {
        ++(vlSymsp->__Vcoverage[833]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[834]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next))) {
        ++(vlSymsp->__Vcoverage[770]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next;
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req))) {
        ++(vlSymsp->__Vcoverage[320]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req 
            = vlSelf->scr1_pipe_ialu__DOT__rem_corr_req;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter) 
                                                 & ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_corr_req) 
                                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__rem_corr_req)));
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[867]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[868]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[869]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[870]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[871]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[872]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[873]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[874]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[875]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[876]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[877]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[878]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[879]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[880]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[881]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[882]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[883]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[884]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[885]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[886]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[887]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[888]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[889]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[890]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[891]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[892]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[893]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[894]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[895]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[896]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next))) {
        ++(vlSymsp->__Vcoverage[897]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[898]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next));
    }
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                    | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                    ? vlSelf->exu2ialu_main_op1_i
                                    : 0xffffffffU);
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                                    : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                    ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                                    : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = (((0U != vlSelf->exu2ialu_main_op2_i) 
                            | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                            ? vlSelf->exu2ialu_main_op1_i
                            : 0xffffffffU);
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                            ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                            : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                            ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                            : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = (((0U != vlSelf->exu2ialu_main_op2_i) 
                                | (IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem))
                                ? vlSelf->exu2ialu_main_op1_i
                                : 0xffffffffU);
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? vlSelf->scr1_pipe_ialu__DOT__div_res_rem
                                : vlSelf->scr1_pipe_ialu__DOT__div_res_quo);
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                            = ((IData)(vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem)
                                ? (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res)
                                : (- vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff));
                    }
                } else {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
                }
            } else {
                vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    = vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0;
            }
        }
    } else if ((8U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((4U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0
                        : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                    : vlSelf->scr1_pipe_ialu__DOT__shft_res)
                : ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? (~ (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags)))
                        : (~ ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                     >> 2U)) ^ (1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 1U)))))
                    : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                        ? (~ (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                    >> 3U))) : (1U 
                                                & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                                   >> 3U)))));
    } else if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((2U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags))
                    : ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                              >> 2U)) ^ (1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_flags) 
                                               >> 1U))))
                : ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                    ? (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)
                    : (IData)(vlSelf->scr1_pipe_ialu__DOT__main_sum_res)));
    } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = ((1U & (IData)(vlSelf->exu2ialu_cmd_i))
                ? (vlSelf->exu2ialu_main_op1_i ^ vlSelf->exu2ialu_main_op2_i)
                : (vlSelf->exu2ialu_main_op1_i | vlSelf->exu2ialu_main_op2_i));
    } else if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
            = (vlSelf->exu2ialu_main_op1_i & vlSelf->exu2ialu_main_op2_i);
    }
    vlSelf->ialu2exu_main_res_o = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o;
    if ((1U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[73]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffeU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (1U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((2U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[74]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffdU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (2U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((4U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[75]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffffbU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (4U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((8U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
               ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[76]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffff7U & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (8U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[77]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffefU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[78]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffdfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[79]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffffbfU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x80U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                  ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[80]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffff7fU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x100U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[81]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffeffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x100U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x200U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[82]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffdffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x200U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x400U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[83]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffffbffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x400U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x800U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                   ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[84]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffff7ffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x800U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x1000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[85]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffefffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x1000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x2000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[86]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffdfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x2000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x4000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[87]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffffbfffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x4000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x8000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                    ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[88]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffff7fffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x8000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[89]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffeffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[90]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffdffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[91]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfffbffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x80000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                     ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[92]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfff7ffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x100000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[93]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffefffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x100000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x200000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[94]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffdfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x200000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x400000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[95]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xffbfffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x400000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x800000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                      ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[96]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xff7fffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x800000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x1000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[97]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfeffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x1000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x2000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[98]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfdffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x2000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x4000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[99]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xfbffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x4000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x8000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                       ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[100]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xf7ffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x8000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x10000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[101]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xefffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x10000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x20000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[102]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xdfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x20000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if ((0x40000000U & (vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
                        ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o))) {
        ++(vlSymsp->__Vcoverage[103]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0xbfffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x40000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if (((vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o 
          ^ vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[104]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o 
            = ((0x7fffffffU & vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o) 
               | (0x80000000U & vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o));
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req))) {
        ++(vlSymsp->__Vcoverage[318]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req 
            = vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
    if (vlSelf->exu2ialu_rvm_cmd_vd_i) {
        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)
                    ? 1U : 0U);
        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next 
                = ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy)
                    ? ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req)
                        ? 2U : 0U) : 1U);
        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
            vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = 0U;
        }
    }
    scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0 
        = ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req)) 
           & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy));
    if ((1U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)))) {
        ++(vlSymsp->__Vcoverage[323]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next 
            = ((2U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)) 
               | (1U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next)));
    }
    if ((2U & ((IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next) 
               ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)))) {
        ++(vlSymsp->__Vcoverage[324]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next 
            = ((1U & (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next)) 
               | (2U & (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next)));
    }
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
    if ((0x10U & (IData)(vlSelf->exu2ialu_cmd_i))) {
        if ((1U & (~ ((IData)(vlSelf->exu2ialu_cmd_i) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((1U & (~ (IData)(vlSelf->exu2ialu_cmd_i)))) {
                        if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                                = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                        } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                                = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                        } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                            vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                        }
                    }
                } else if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                        = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                        = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                }
            } else if ((2U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                if ((1U & (IData)(vlSelf->exu2ialu_cmd_i))) {
                    if ((0U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                            = (1U & (~ (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req)));
                    } else if ((1U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o 
                            = scr1_pipe_ialu__DOT____VdfgExtracted_had502fbc__0;
                    } else if ((2U == (IData)(vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff))) {
                        vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = 1U;
                    }
                }
            }
        }
    }
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o))) {
        ++(vlSymsp->__Vcoverage[3]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o 
            = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o;
    }
    vlSelf->ialu2exu_rvm_res_rdy_o = vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o;
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = 
        ((~ (IData)(vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o)) 
         & (IData)(vlSelf->exu2ialu_rvm_cmd_vd_i));
    if (((IData)(vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd) 
         ^ (IData)(vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd))) {
        ++(vlSymsp->__Vcoverage[540]);
        vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd 
            = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
    }
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_en = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_upd = vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd;
}
