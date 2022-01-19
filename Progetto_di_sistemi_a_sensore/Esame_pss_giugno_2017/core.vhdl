library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity core is
	port(new_value: in unsigned(9 downto 0);
		preset, stop_run, clock: in std_logic;
		value: out unsigned(3 downto 0);
		u_d_c: out std_logic_vector(0 to 1));
end entity core;

architecture a of core is
	
	
begin
	
	life: process(clock, preset, stop_run)
		variable current_value: integer := 0;
		variable current_digit: integer range 0 to 2 := 0;
	begin
		
		--in modo asincrono, quando preset va a 1, prendo come valore quello fornito in ingresso
		if preset'event and preset='1' then
			current_value := to_integer(new_value);
		end if;
		
		if clock'event and clock='1' and preset = '0' then
			
			--distinguo STOP_RUN
			if stop_run = '1' and current_value > 0 then
				current_value := current_value - 1;
			end if;
			
			case current_digit is
				--unità
				when 0 => u_d_c <= "00"; 
						value <= to_unsigned(current_value mod 10, 4);
						current_digit := 1;
				--decine
				when 1 => u_d_c <= "01";
						value <= to_unsigned((current_value / 10) mod 10, 4);
						current_digit := 2;
				--centinaia
				when 2 => u_d_c <= "10";
						value <= to_unsigned(current_value / 100, 4);
						current_digit := 0;
				when others => NULL;	--non dovrebbe mai accadere però
			end case;
			
			
		end if;
		
		
	end process life;
	
end architecture a;
	





