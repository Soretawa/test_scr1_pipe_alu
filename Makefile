# Makefile

# defaults
SIM ?= verilator
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/scr1_pipe_ialu.sv
# use VHDL_SOURCES for VHDL files

# TOPLEVEL is the name of the toplevel module in your Verilog or VHDL file
TOPLEVEL = scr1_pipe_ialu

# MODULE is the basename of the Python test file
MODULE = testbench

EXTRA_ARGS += --trace-fst --trace-structs
EXTRA_ARGS += --coverage

# include cocotb's make rules to take care of the simulator setup
include $(shell cocotb-config --makefiles)/Makefile.sim