library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity display_mux is
	port(value: in unsigned(3 downto 0);
		u_d_c: in std_logic_vector(0 to 1);
		digits: out std_logic_vector(0 to 6);
		c0, c1, c2: out std_logic);
end entity display_mux;

architecture a of display_mux is

begin
	
	life: process
		variable what_to_show: integer;
	begin
		case u_d_c is
			when "00" => c0 <= '1'; c1 <= '0'; c2 <= '0';
				
			when "01" => c0 <= '0'; c1 <= '1'; c2 <= '0';
			
			when "10" => c0 <= '0'; c1 <= '0'; c2 <= '1';
			when others => NULL;
		end case;
		
		what_to_show := to_integer(value);
		
		case what_to_show is
			when 0 => digits <= "0000000";
			when 1 => digits <= "0110000";
			when 2 => digits <= "1101101";
			when 3 => digits <= "1111001";
			when 4 => digits <= "0110011";
			when 5 => digits <= "1011011";
			when 6 => digits <= "1011111";
			when 7 => digits <= "1110000";
			when 8 => digits <= "1111111";
			when 9 => digits <= "1111011";
			when others => NULL;
		end case;
	end process life;

end architecture a;


