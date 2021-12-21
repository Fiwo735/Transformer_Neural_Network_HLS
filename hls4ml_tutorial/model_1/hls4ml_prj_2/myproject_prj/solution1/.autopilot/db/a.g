#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/jovyan/model_1/hls4ml_prj_2/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
