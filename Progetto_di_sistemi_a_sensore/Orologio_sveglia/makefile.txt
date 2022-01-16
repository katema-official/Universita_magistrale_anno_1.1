ghdl -a Clock_gen.vhdl
ghdl -a Orologio.vhdl
ghdl -a AlarmClock.vhdl
ghdl -a tb.vhdl
ghdl -e tb
ghdl -r tb --vcd=output.vcd