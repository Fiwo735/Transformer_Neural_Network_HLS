#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /mnt/ccnas2/bdp/faw18/FYP/example_hls/myproject_prj/solution1/.autopilot/db/a.g.bc ${1+"$@"}
