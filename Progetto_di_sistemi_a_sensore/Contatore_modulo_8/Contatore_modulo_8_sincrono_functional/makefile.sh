ghdl -a count8.vhdl
ghdl -a tb.vhdl
ghdl -e tb
ghdl -r tb --vcd=output.vcd
