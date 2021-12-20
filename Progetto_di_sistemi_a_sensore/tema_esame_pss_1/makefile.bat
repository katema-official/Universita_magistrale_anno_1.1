ghdl -a generatore_onde_quadre.vhdl
ghdl -a generatore_onde_quadre_tb.vhdl
ghdl -e generatore_onde_quadre_tb
ghdl -r generatore_onde_quadre_tb --vcd=generatore_onde_quadre.vcd
gtkwave generatore_onde_quadre.vcd