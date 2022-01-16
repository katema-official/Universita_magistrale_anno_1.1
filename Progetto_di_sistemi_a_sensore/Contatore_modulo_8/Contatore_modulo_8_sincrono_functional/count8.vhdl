library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity count8 is
	port(i, ck: in std_logic;
		y: out unsigned(2 downto 0));

end entity count8;

architecture functional of count8 is
	
	
	
	
begin
	increment: process(ck, i)
		variable cnt: integer range 0 to 7 := 0;
		begin
			if(ck'event and ck='1' and i='1') then
				cnt := (cnt + 1) mod 8;
			end if;
			y <= to_unsigned(cnt, y'length);
		end process increment;
	



end architecture functional;









