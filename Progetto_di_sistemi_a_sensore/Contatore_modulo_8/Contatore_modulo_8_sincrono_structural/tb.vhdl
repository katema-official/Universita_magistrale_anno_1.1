library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb is
end entity tb;

architecture arch of tb is

	constant clk_frequency: time := 1 ms;
	
	signal i: std_logic;
	signal clk: std_logic;
	signal outt: unsigned(2 downto 0);
	
begin

	count8_instance: entity work.count8(arch) generic map(clk_frequency) port map(i, clk, outt);
	clock_gen: process
		begin
			clk <= '1', '0' after clk_frequency/2;
			wait for clk_frequency;
		end process clock_gen;
	
		i <= '0',
			'1' after 2 ms,
			'0' after 5 ms,		--valore = 3
			'1' after 10 ms,
			'0' after 14 ms,	--valore = 7
			'1' after 25 ms,
			'0' after 28 ms,	--valore = 2
			'1' after 30 ms;
		
	tmp: process
		begin
			wait for 100 ms;
			assert false report "tb finished" severity failure;
		end process tmp;
		
		

end architecture arch;







