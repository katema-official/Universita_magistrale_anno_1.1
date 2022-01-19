library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity orologio is
	port(unita, decine, centinaia: in unsigned(3 downto 0);
		preset, stop_run, clock: in std_logic;
		digits: out std_logic_vector(0 to 6);
		c0, c1, c2: out std_logic);
end entity orologio;
	
architecture a of orologio is
	signal new_value: unsigned(9 downto 0);
	signal value: unsigned(3 downto 0);
	signal u_d_c: std_logic_vector(0 to 1);
begin
	input: entity work.input_manager port map(unita, decine, centinaia, new_value);
	core: entity work.core port map(new_value, preset, stop_run, clock, value, u_d_c);
	display: entity work.display_mux port map(value, u_d_c, digits, c0, c1, c2);
end architecture a;
	

	
		
		