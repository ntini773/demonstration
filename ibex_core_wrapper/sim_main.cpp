#include "Vibex_core_wrapper.h"
#include "verilated.h"
#include <fstream>
#include <iostream>

vluint64_t main_time = 0;

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vibex_core_wrapper* top = new Vibex_core_wrapper;

    std::ofstream log("rvfi_trace.log");

    top->clk = 0;
    top->rst = 1;
    for (int i = 0; i < 10; ++i) {
        top->clk = !top->clk;
        top->eval();
        main_time++;
    }
    top->rst = 0;

    while (!Verilated::gotFinish() && main_time < 5000) {
        top->clk = !top->clk;
        top->eval();

        if (top->rvfi_valid) {
            log << std::hex << "[Cycle " << main_time << "] "
                << "PC=0x" << top->rvfi_pc_rdata
                << " INSN=0x" << top->rvfi_insn
                << " RD=" << std::dec << (int)top->rvfi_rd_addr
                << " <- 0x" << std::hex << top->rvfi_rd_wdata
                << std::endl;
        }

        main_time++;
    }

    log.close();
    delete top;
    return 0;
}
