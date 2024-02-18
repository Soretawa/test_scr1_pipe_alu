// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop__Syms.h"
#include "Vtop___024unit.h"

VL_ATTR_COLD void Vtop___024unit___configure_coverage(Vtop___024unit* vlSelf, bool first) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtop___024unit___configure_coverage\n"); );
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[947]), first, "scr1_search_ms1.svh", 25, 45, "", "v_line/$unit", "block", "25,29-32");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[948]), first, "scr1_search_ms1.svh", 53, 5, "", "v_line/$unit", "block", "53,55-57");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[949]), first, "scr1_search_ms1.svh", 61, 5, "", "v_line/$unit", "block", "61,63-65");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[950]), first, "scr1_search_ms1.svh", 69, 5, "", "v_line/$unit", "block", "69,71-73");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[951]), first, "scr1_search_ms1.svh", 77, 5, "", "v_line/$unit", "block", "77,79-81");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[952]), first, "scr1_search_ms1.svh", 36, 32, "", "v_line/$unit", "block", "36,39,53,61,69,77,85-86,88,90");
}
