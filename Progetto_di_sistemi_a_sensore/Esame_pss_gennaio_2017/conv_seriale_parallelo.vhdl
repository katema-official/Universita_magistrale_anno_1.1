library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity conv_seriale_parallelo is
	port(clock, serial_in, reset: in std_logic;
		parallel_out: out std_logic_vector(15 downto 0);
		ready: out std_logic);
end entity conv_seriale_parallelo;

architecture arch of conv_seriale_parallelo is
	constant counter_max: integer := 4;			--per leggere correttamente i bit seriali.
												--ricevo 1200 colpi di clock al secondo, e devo convertire 300 bit in un secondo
												--ergo, ogni 4 colpi di clock, devo leggere un bit che mi arriva in ingresso.
	signal parallel_bits: std_logic_vector(15 downto 0) := (others => '0');
begin
	
	Life: process(clock, serial_in, reset)
		variable counter: integer range 0 to 4 := 0;
		variable general_counter: integer range 0 to 16 := 0;		--counter per capire quanti bit ho scritto
	begin
		
		--al fronte di salita del clock
		if clock'event and clock = '1' then
			
			--se è arrivato reset, resetto tutto
			if reset = '1' then
				counter := 0;
				parallel_bits <= (others => '0');
				general_counter := 0;
			else
				if counter < counter_max then
					counter := counter + 1;
				else
					--devo leggere un nuovo bit. Shifto il valore letto finora a destra di uno, e aggiungo in testa il nuovo bit.
					parallel_bits <= '0' & parallel_bits(14 downto 0);
					parallel_bits(15) <= serial_in;
					counter := 0;
					general_counter := general_counter + 1;
				end if;
			end if;
			
			if general_counter = 16 then
				parallel_out <= parallel_bits;
				ready <= '1';
			else
				parallel_out <= (others => '0');
				ready <= '0';
			end if;
		end if;
	end process Life;
	
end architecture arch;