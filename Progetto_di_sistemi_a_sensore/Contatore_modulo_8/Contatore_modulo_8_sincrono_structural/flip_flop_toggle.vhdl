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
		variable state: integer := 0;
	begin
		if(clk'event and clk = '0' and clk'last_value = '1')then	--se sono abilitato e c'è stato un fronte di discesa del clock, cambio
			if state = 1 then
				state := 0;
			else
				state := 1;
			end if;
		end if;
		
		if state = 1 then
			ex <= '1';
		else
			ex <= '0';
		end if;
		
	end process toggle;

end architecture arch;




