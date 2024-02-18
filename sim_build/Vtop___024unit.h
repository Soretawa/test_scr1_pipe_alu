// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024UNIT_H_
#define VERILATED_VTOP___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // PARAMETERS
    static constexpr CData/*3:0*/ SCR1_EXC_CODE_IRQ_M_SOFTWARE = 3U;
    static constexpr CData/*3:0*/ SCR1_EXC_CODE_IRQ_M_TIMER = 7U;
    static constexpr CData/*3:0*/ SCR1_EXC_CODE_IRQ_M_EXTERNAL = 0x0bU;
    static constexpr CData/*3:0*/ SCR1_EXC_CODE_RESET = 0U;
    static constexpr IData/*31:0*/ SCR1_MTVEC_BASE_WR_BITS = 0x0000001aU;
    static constexpr IData/*31:0*/ SCR1_TDU_TRIG_NUM = 2U;
    static constexpr IData/*31:0*/ SCR1_ARCH_RST_VECTOR = 0x00000200U;
    static constexpr IData/*31:0*/ SCR1_ARCH_MTVEC_BASE = 0x000001c0U;
    static constexpr IData/*31:0*/ SCR1_TCM_ADDR_MASK = 0xffff0000U;
    static constexpr IData/*31:0*/ SCR1_TCM_ADDR_PATTERN = 0x00480000U;
    static constexpr IData/*31:0*/ SCR1_TIMER_ADDR_MASK = 0xffffffe0U;
    static constexpr IData/*31:0*/ SCR1_TIMER_ADDR_PATTERN = 0x00490000U;
    static constexpr IData/*31:0*/ SCR1_SIM_EXIT_ADDR = 0x000000f8U;
    static constexpr IData/*31:0*/ SCR1_SIM_PRINT_ADDR = 0xf0000000U;
    static constexpr IData/*31:0*/ SCR1_SIM_EXT_IRQ_ADDR = 0xf0000100U;
    static constexpr IData/*31:0*/ SCR1_SIM_SOFT_IRQ_ADDR = 0xf0000200U;
    static constexpr IData/*31:0*/ SCR1_CSR_ADDR_WIDTH = 0x0000000cU;
    static constexpr IData/*31:0*/ SCR1_CSR_MTVEC_BASE_ZERO_BITS = 6U;
    static constexpr IData/*31:0*/ SCR1_CSR_MTVEC_BASE_VAL_BITS = 0x0000001aU;
    static constexpr IData/*25:0*/ SCR1_CSR_MTVEC_BASE_WR_RST_VAL = 7U;
    static constexpr IData/*31:0*/ SCR1_CSR_MTVEC_BASE_RO_BITS = 0U;
    static constexpr IData/*31:0*/ SCR1_EXC_CODE_WIDTH_E = 4U;
    static constexpr IData/*31:0*/ SCR1_IALU_OP_ALL_NUM_E = 2U;
    static constexpr IData/*31:0*/ SCR1_IALU_OP_WIDTH_E = 1U;
    static constexpr IData/*31:0*/ SCR1_IALU_CMD_ALL_NUM_E = 0x00000017U;
    static constexpr IData/*31:0*/ SCR1_IALU_CMD_WIDTH_E = 5U;
    static constexpr IData/*31:0*/ SCR1_SUM2_OP_ALL_NUM_E = 2U;
    static constexpr IData/*31:0*/ SCR1_SUM2_OP_WIDTH_E = 1U;
    static constexpr IData/*31:0*/ SCR1_LSU_CMD_ALL_NUM_E = 9U;
    static constexpr IData/*31:0*/ SCR1_LSU_CMD_WIDTH_E = 4U;
    static constexpr IData/*31:0*/ SCR1_CSR_OP_ALL_NUM_E = 2U;
    static constexpr IData/*31:0*/ SCR1_CSR_OP_WIDTH_E = 1U;
    static constexpr IData/*31:0*/ SCR1_CSR_CMD_ALL_NUM_E = 4U;
    static constexpr IData/*31:0*/ SCR1_CSR_CMD_WIDTH_E = 2U;
    static constexpr IData/*31:0*/ SCR1_RD_WB_ALL_NUM_E = 7U;
    static constexpr IData/*31:0*/ SCR1_RD_WB_WIDTH_E = 3U;
    static constexpr IData/*31:0*/ SCR1_GPR_FIELD_WIDTH = 5U;

    // CONSTRUCTORS
    Vtop___024unit(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024unit();
    VL_UNCOPYABLE(Vtop___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
};


#endif  // guard
