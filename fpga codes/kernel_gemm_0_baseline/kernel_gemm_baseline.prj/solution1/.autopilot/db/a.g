#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /localhdd/kss24/kernel_gemm_0_baseline/kernel_gemm_baseline.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
