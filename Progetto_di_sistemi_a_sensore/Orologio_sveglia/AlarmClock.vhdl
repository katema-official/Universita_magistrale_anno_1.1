library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity AlarmClock is
	port(clock_wire: in std_logic;
		time_alarm, min_incr, ore_incr: in std_logic;
		min_1, ore_1: out std_logic_vector(0 to 9);
		min_10: out std_logic_vector(0 to 5);
		ore_10: out std_logic_vector(0 to 2);
		alarm: out std_logic);
end entity AlarmClock;

architecture arch of AlarmClock is
	--signal clock_wire: std_logic := '0';
begin
	--clock_gen: entity work.Clock_gen port map(clock_wire);
	assert false report "clock wire is " & std_logic'image(clock_wire) & "" severity warning;
	actual_orologio: entity work.Orologio port map(clock_wire, time_alarm, min_incr, ore_incr, min_1, ore_1, min_10, ore_10, alarm);
	
	debug: process
		begin
			assert false report "clock wire is " & std_logic'image(clock_wire) & "" severity warning;
			--wait for 1 sec;
	end process debug;

end architecture arch;






