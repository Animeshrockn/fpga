#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /localhdd/kss24/kernel_gemm_3_ping_pong/kernel_gemm_ping_pong.prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
