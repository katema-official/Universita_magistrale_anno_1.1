library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity generatore_onde_quadre is
	port(
		CLK : in std_logic;
		RST : in std_logic;
		VAL : in unsigned (7 downto 0);
		OUT_S : out std_logic
	);
end generatore_onde_quadre;


architecture arch1 of generatore_onde_quadre is
	
	begin
	
		MainProcess : process(CLK)
			variable counter: integer := 0;--per sapere a che punto sono arrivato nella generazione del segnale di uscita
			variable current_val: integer range 0 to 255;
				begin
					--posso operare solo quando il clock va sul fronte di salita, pertanto dipendo in prima istanza da lui
					if (CLK'event and CLK='1') then
						--ok, sì, assumo che all'inizio il reset sia a uno così da poter impostare il valore di current_val basandomi sul segnale val.
						--quindi, quando reset è a 1, assegno a current val il valore di val
						if(RST = '1') then
							current_val := to_integer(VAL);		--l'idea è convertire l'unsigned che ho come input in un integer
							counter := 0;						--ho appena resettato, devo per forza ricominciare a contare
							--report "current_val: " & integer'image(current_val);
							--report "counter: " & integer'image(counter);
						end if;
						
						counter := counter + 1;
						--report "current_val: " & integer'image(current_val);
						--report "counter: " & integer'image(counter);
						
						if(counter < current_val) then
							OUT_S <= '1';
						else
							OUT_S <= '0';
						end if;
						
						if(counter mod 256 = 0) then
							counter := 0;
						end if;
						
					end if;
	
				end process;
	
	
	
	end arch1;













