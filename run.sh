#python3 main.py load "mp.png" "image.mem"
python3 main.py gen "image.mem"
python3 main.py view_bw "image.mem"
verilator --cc --timing --exe --build -j 0 -Wall --top-module integrated_tb --trace integrated.sv sim_main_tb.cpp
obj_dir/Vintegrated_tb
python3 main.py to_qoi "output.mem" "output.qoi"
