// verilator --cc --timing --exe --build -j 0 -Wall --top-module integrated sim_main.cpp integrated.sv --trace
#include "Vintegrated.h"
#include "verilated.h"
#include <iostream>
#include <stdlib.h>
#include <verilated_vcd_c.h>

vluint64_t sim_time = 0;

int main(int argc, char **argv) {
  VerilatedContext *contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  Vintegrated *top = new Vintegrated{contextp};

  Verilated::traceEverOn(true);
  VerilatedVcdC *m_trace = new VerilatedVcdC;

  top->trace(m_trace, 5);
  m_trace->open("waveform.vcd");

  // flash reset

  while (!Verilated::gotFinish()) {

    // std::cout << std::endl;
    //  print sim time
    // std::cout << "@" << sim_time << std::endl;

    if (sim_time < 6) {
      top->reset_n = 0;
    } else {
      top->reset_n = 1;
    }

    top->clk ^= 1;
    top->eval();
    m_trace->dump(sim_time);
    sim_time++;
  }

  m_trace->close();

  delete top;
  delete contextp;
  return 0;
}
