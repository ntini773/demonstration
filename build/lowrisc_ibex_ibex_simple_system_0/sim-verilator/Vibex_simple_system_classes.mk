# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vibex_simple_system.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 1

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vibex_simple_system \
	Vibex_simple_system__Dpi_Export__0 \
	Vibex_simple_system___024root__DepSet_h5466fb0c__0 \
	Vibex_simple_system___024root__DepSet_hb578de4c__0 \
	Vibex_simple_system_ibex_simple_system__DepSet_hd46f50ff__0 \
	Vibex_simple_system_ibex_simple_system__DepSet_h358232dd__0 \
	Vibex_simple_system_ibex_simple_system__DepSet_h358232dd__1 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vibex_simple_system__ConstPool_0 \
	Vibex_simple_system___024root__Slow \
	Vibex_simple_system___024root__DepSet_h5466fb0c__0__Slow \
	Vibex_simple_system___024root__DepSet_hb578de4c__0__Slow \
	Vibex_simple_system_ibex_simple_system__Slow \
	Vibex_simple_system_ibex_simple_system__DepSet_hd46f50ff__0__Slow \
	Vibex_simple_system_ibex_simple_system__DepSet_hd46f50ff__1__Slow \
	Vibex_simple_system_ibex_simple_system__DepSet_h358232dd__0__Slow \
	Vibex_simple_system_ibex_pkg__Slow \
	Vibex_simple_system_ibex_pkg__DepSet_hf2e7715c__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vibex_simple_system__Dpi \
	Vibex_simple_system__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vibex_simple_system__Syms \
	Vibex_simple_system__Trace__0__Slow \
	Vibex_simple_system__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_fst_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
