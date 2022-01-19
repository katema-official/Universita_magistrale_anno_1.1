library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity input_manager is
	port(unita, decine, centinaia: in unsigned(3 downto 0);
	new_value: out unsigned(9 downto 0));
end entity input_manager;

architecture a of input_manager is
begin
	
	life: process
		variable input: integer range 0 to 999 := 0;
	begin
		input := input + 100 * to_integer(centinaia);
		input := input + 10 * to_integer(decine);
		input := input + to_integer(unita);
		new_value <= to_unsigned(input, 10);
	end process life;
	
end architecture a;



