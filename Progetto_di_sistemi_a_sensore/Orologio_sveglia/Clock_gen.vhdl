library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity Clock_gen is
	port(clock: out std_logic := '1');
end entity Clock_gen;

architecture arch of Clock_gen is

begin
	clock_process: process
	begin
		assert false report "clk_in is " & std_logic'image(clock) & "" severity warning;		
		clock <= '1', '0' after 500 ms;
		wait for 1000 ms;
	end process clock_process;

end architecture arch;
