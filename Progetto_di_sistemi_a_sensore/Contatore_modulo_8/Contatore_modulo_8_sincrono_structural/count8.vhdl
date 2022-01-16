library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity count8 is
	generic(clk_frequency : time);
	port(i, clk: in std_logic;
		y: out unsigned(2 downto 0));

end entity count8;


architecture arch of count8 is

	--component flip_flop_toggle is
	--	port(clk: in std_logic;
	--			ex: out std_logic);
	--end component;
	
	signal sig0, sig1, sig2, incr_tmp: std_logic;
	
	signal current_value: unsigned(2 downto 0);
	
begin
	--ff0: flip_flop_toggle port map(incr_tmp, sig0);
	--ff1: flip_flop_toggle port map(sig0, sig1);
	--ff2: flip_flop_toggle port map(sig1, sig2);
	ff0: entity work.flip_flop_toggle port map(incr_tmp, sig0);
	ff1: entity work.flip_flop_toggle port map(sig0, sig1);
	ff2: entity work.flip_flop_toggle port map(sig1, sig2);

	life: process(i, clk)
	
	begin
		if clk'event and clk = '1' and i = '1' then
			incr_tmp <= '1', '0' after clk_frequency/2;			--per simulare il "colpo di clock", perché ho bisogno di un fronte di discesa
		end if;
	
	end process life;
	
	current_value(0) <= sig0;
	current_value(1) <= sig1;
	current_value(2) <= sig2;
	
	y <= current_value;

end architecture arch;





