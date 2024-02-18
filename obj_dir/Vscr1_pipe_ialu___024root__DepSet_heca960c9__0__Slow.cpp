// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscr1_pipe_ialu.h for the primary calling header

#include "Vscr1_pipe_ialu__pch.h"
#include "Vscr1_pipe_ialu___024root.h"

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_static(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_initial(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = vlSelf->rst_n;
}

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_final(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__stl(Vscr1_pipe_ialu___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vscr1_pipe_ialu___024root___eval_phase__stl(Vscr1_pipe_ialu___024root* vlSelf);

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_settle(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_settle\n"); );
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
            Vscr1_pipe_ialu___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("scr1_pipe_ialu.sv", 30, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vscr1_pipe_ialu___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__stl(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vscr1_pipe_ialu___024root___ico_sequent__TOP__0(Vscr1_pipe_ialu___024root* vlSelf);

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_stl(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vscr1_pipe_ialu___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___eval_triggers__stl(Vscr1_pipe_ialu___024root* vlSelf);

VL_ATTR_COLD bool Vscr1_pipe_ialu___024root___eval_phase__stl(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vscr1_pipe_ialu___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vscr1_pipe_ialu___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__ico(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__act(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void Vscr1_pipe_ialu___024root___dump_triggers__nba(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___dump_triggers__nba\n"); );
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

VL_ATTR_COLD void Vscr1_pipe_ialu___024root___ctor_var_reset(Vscr1_pipe_ialu___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vscr1_pipe_ialu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscr1_pipe_ialu___024root___ctor_var_reset\n"); );
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
    vlSelf->scr1_pipe_ialu__DOT__main_sum_res = VL_RAND_RESET_Q(33);
    vlSelf->scr1_pipe_ialu__DOT__main_sum_flags = VL_RAND_RESET_I(4);
    vlSelf->scr1_pipe_ialu__DOT__main_ops_diff_sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__shft_res = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_is_iter = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_req = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_ff = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mdu_fsm_next = VL_RAND_RESET_I(2);
    vlSelf->scr1_pipe_ialu__DOT__mdu_cmd_mul = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_cmd_rem = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_op1_is_neg = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_upd = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__div_dvdnd_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_iter_cnt_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_ff = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_c_next = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_hi_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_ff = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__mdu_res_lo_next = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__sgn = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT__unnamedblk1__DOT__inv = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h4eb2c666__0 = VL_RAND_RESET_I(1);
    vlSelf->scr1_pipe_ialu__DOT____VdfgExtracted_h7eacfea1__0 = VL_RAND_RESET_I(32);
    vlSelf->scr1_pipe_ialu__DOT____VdfgTmp_h8ffc7e80__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = VL_RAND_RESET_I(1);
}
