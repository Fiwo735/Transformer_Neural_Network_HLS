<project xmlns="com.autoesl.autopilot.project" name="myproject_prj" top="myproject">
    <libraryPaths/>
    <Simulation argv="">
        <SimFlow name="csim" ldflags="" mflags="" setup="false" optimizeCompile="false" clean="false"/>
    </Simulation>
    <includePaths xmlns=""/>
    <libraryFlag xmlns=""/>
    <files xmlns="">
        <file name="../../tb_data" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../firmware/weights" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../myproject_test.cpp" sc="0" tb="1" cflags=" -std=c++0x -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="firmware/myproject.cpp" sc="0" tb="false" cflags="-std=c++0x" csimflags="" blackbox="false"/>
    </files>
    <solutions xmlns="">
        <solution name="solution1" status=""/>
    </solutions>
</project>

