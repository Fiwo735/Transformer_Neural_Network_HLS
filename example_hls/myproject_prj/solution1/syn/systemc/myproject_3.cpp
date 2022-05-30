#include "myproject.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void myproject::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_in_V_address0\" :  \"" << data_in_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_in_V_ce0\" :  \"" << data_in_V_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"data_in_V_q0\" :  \"" << data_in_V_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_out_V_address0\" :  \"" << data_out_V_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_out_V_ce0\" :  \"" << data_out_V_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_out_V_we0\" :  \"" << data_out_V_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"data_out_V_d0\" :  \"" << data_out_V_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

