#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /localhdd/kss24/kernel_gemm_4_DRAM_reorg/kernel_gemm_buffering.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
