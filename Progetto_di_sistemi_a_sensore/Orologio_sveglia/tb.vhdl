library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb is
end entity tb;

architecture arch of tb is
	signal clock: std_logic := '0';
	signal time_alarm, min_incr, ore_incr: std_logic;
	signal ore_1, min_1: std_logic_vector(0 to 9);
	signal min_10: std_logic_vector(0 to 5);
	signal ore_10: std_logic_vector(0 to 2);
	signal wake_up: std_logic;
begin

	

	min_incr <= '0';
	ore_incr <= '0';
	
	my_orologio: entity work.AlarmClock port map(clock_wire => clock, time_alarm => time_alarm, min_incr => min_incr, ore_incr => ore_incr, min_1 => min_1, ore_1 => ore_1, min_10 => min_10, ore_10 => ore_10, alarm => wake_up);
	
	time_alarm <= '0';
	
	
	
	clock_process: process
	begin
		assert false report "clk_in is " & std_logic'image(clock) & "" severity warning;		
		clock <= '1', '0' after 500 ms;
		wait for 1000 ms;
	end process clock_process;
	
	

	tmp: process
		begin
			wait for 50000 ms;
			assert false report "tb finished" severity failure;
		end process tmp;
		
	assert false report "hello" severity warning;

end architecture arch;


