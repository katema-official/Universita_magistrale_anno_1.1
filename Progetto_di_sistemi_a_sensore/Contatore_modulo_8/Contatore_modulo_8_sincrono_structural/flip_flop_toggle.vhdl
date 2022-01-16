library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity flip_flop_toggle is
	port(clk: in std_logic;
		ex: out std_logic);
end entity flip_flop_toggle;


architecture arch of flip_flop_toggle is
	
begin

	toggle: process(clk)
		variable state: std_logic := '0';
	begin
		if(clk'event and clk = '0' and clk'last_value = '1')then	--se sono abilitato e c'è stato un fronte di discesa del clock, cambio
			state := not state;
		end if;
		
		ex <= state;
		
	end process toggle;

end architecture arch;




