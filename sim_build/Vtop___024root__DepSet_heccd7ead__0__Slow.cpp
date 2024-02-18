// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/user/test/scr1_pipe_ialu.sv", 30, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk or negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst_n = VL_RAND_RESET_I(1);
    vlSelf->exu2ialu_rvm_cmd_vd_i = VL_RAND_RESET_I(1);
    vlSelf->ialu2exu_rvm_res_rdy_o = VL_RAND_RESET_I(1);
    vlSelf->exu2ialu_main_op1_i = VL_RAND_RESET_I(32);
    vlSelf->exu2ialu_main_op2_i = VL_RAND_RESET_I(32);
    vlSelf->exu2ialu_cmd_i = VL_RAND_RESET_I(5);
    vlSelf->ialu2exu_main_res_o = VL_RAND_RESET_I(32);
    vlSelf->ialu2exu_cmp_res_o = VL_RAND_RESET_I(1);
    vlSelf->exu2ialu_addr_op1_i = VL_RAND_RESET_I(32);
    vlSelf->exu2ialu_addr_op2_i = VL_RAND_RESET_I(32);
    vlSelf->ialu2exu_addr_res_o = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_rvm_cmd_vd_i = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_rvm_res_rdy_o = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op1_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_main_op2_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_cmd_i = VL_RAND_RESET_I(5);
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_main_res_o = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_cmp_res_o = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op1_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__exu2ialu_addr_op2_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__ialu2exu_addr_res_o = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = VL_RAND_RESET_I(4);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_pos_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_neg_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__main_ops_non_zero = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__ialu_cmd_shft = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__shft_op1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__shft_op2 = VL_RAND_RESET_I(5);
    vlSelf->scr1_pipe_ialu__DOT__shft_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__shft_res = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_rdy = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__rem_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_idle = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_corr = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_div = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mul_cmd_hi = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_div = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_op1_is_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_op2_is_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_op1_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_op2_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mul_op1 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__mul_op2 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__mul_res = VL_RAND_RESET_Q(64);
    vlSelf->scr1_pipe_ialu__DOT__div_ops_are_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_op2_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem_c = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_res_rem = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__div_res_quo = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__div_quo_bit = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_sub = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op1 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_op2 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__mdu_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_en = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rst_n = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_rvm_cmd_vd_i = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_rvm_res_rdy_o = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op1_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_main_op2_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_cmd_i = VL_RAND_RESET_I(5);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_main_res_o = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_cmp_res_o = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op1_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__exu2ialu_addr_op2_i = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu2exu_addr_res_o = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_flags = VL_RAND_RESET_I(4);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_pos_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_sum_neg_ovflw = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_diff_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__main_ops_non_zero = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__ialu_cmd_shft = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op1 = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_op2 = VL_RAND_RESET_I(5);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__shft_res = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_is_iter = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_rdy = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__rem_corr_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_idle = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_fsm_corr = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_cmd_mul = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_cmd_hi = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_div = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_cmd_rem = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_is_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_is_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op1 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_op2 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mul_res = VL_RAND_RESET_Q(64);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_ops_are_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op1_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_op2_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem_c = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_rem = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_res_quo = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_quo_bit = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__div_dvdnd_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_sub = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op1 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_op2 = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_iter_cnt_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_c_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_hi_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____Vtogcov__mdu_res_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
