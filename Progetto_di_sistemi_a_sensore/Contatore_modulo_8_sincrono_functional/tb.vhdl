library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb is
end entity tb;

architecture a of tb is
	signal i: std_logic;
	signal clk: std_logic;
	signal outt: unsigned(2 downto 0);
	
begin
	count8_instance: entity work.count8 port map(i, clk, outt);
	clock_gen: process
		constant clk_frequency: time := 1 us;
		begin
			clk <= '1', '0' after clk_frequency/2;
			wait for clk_frequency;
		end process clock_gen;
	
		i <= '0',
			'1' after 2 us,
			'0' after 5 us,		--valore = 3
			'1' after 10 us,
			'0' after 14 us,	--valore = 7
			'1' after 25 us,
			'0' after 28 us,	--valore = 2
			'1' after 30 us;
		
	tmp: process
		begin
			wait for 100 us;
			assert false report "tb finished" severity failure;
		end process tmp;
		
		--if(now >= 100 ms) then
		--	assert false report "tb finished" severity failure;
		--end if;

end architecture a;


