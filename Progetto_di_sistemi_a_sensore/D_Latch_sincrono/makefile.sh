ghdl -a And2.vhdl
ghdl -a Dlatch.vhdl
ghdl -a Dlatch_En.vhdl
ghdl -a tb.vhdl
ghdl -e tb
ghdl -r tb --vcd=output.vcd