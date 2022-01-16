library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity Orologio is
	port(clk_in, tm_al, m_incr, h_incr: in std_logic;
		m1, h1: out std_logic_vector(0 to 9);
		m10: out std_logic_vector(0 to 5);
		h10: out std_logic_vector(0 to 2);
		al: out std_logic);
end entity Orologio;

architecture arch of Orologio is
	signal minutes_time_counter: unsigned(5 downto 0) := "000000";		--contatore dei minuti
	signal hours_time_counter: unsigned(4 downto 0) := "00000";			--contatore delle ore
	signal minutes_alarm: unsigned(5 downto 0) := "000000";				--registro dei minuti-allarme
	signal hours_alarm: unsigned(4 downto 0) := "00000";				--registro delle ore-allarme
begin
	
	debug: process
		begin
			assert false report "clk_in is " & std_logic'image(clk_in) & "" severity warning;
			wait for 1 ps;
	end process debug;
	
	--normalmente, quando arriva il clock, i secondi aumentano di uno.
	--quindi, ogni 60 colpi di clock, devo incrementare di uno i minuti
	minutes: process(clk_in)
	
	begin
		assert false report "clk_in is " & std_logic'image(clk_in) & "" severity warning;

		if clk_in'event and clk_in = '1' then
			assert false report "minutes: going to increment by 1 minutes" severity warning;
			minutes_time_counter <= minutes_time_counter + 1;
			assert false report "minutes: incremented by 1 minutes" severity warning;
			if minutes_time_counter mod 60 = 0 then
				minutes_time_counter <= (others => '0');
				hours_time_counter <= hours_time_counter + 1;
			end if;
		end if;
		assert false report "minutes" severity warning;
	end process minutes;
		
	--ogni volta che le ore aumentano, mi assicuro di rimetterle a 0 quando
	--arrivano a 24
	hours: process(hours_time_counter)
	
	begin
		if hours_time_counter = 24 then
			hours_time_counter <= (others => '0');
		end if;
		assert false report "hours" severity warning;
	end process hours;
	
	--se l'orologio-sveglia è in modalità orologio e l'utente ha schiacciato
	--mi_incr, devo aumentare i minuti di uno. Scelta implementativa:
	--un utente che vuole cambiare i minuti, non vuole che l'ora cambi quando passa da 59 a 00
	minutes_incr_time: process(m_incr)
	
	begin
		if tm_al = '0' and m_incr'event and m_incr = '1' then
			minutes_time_counter <= minutes_time_counter + 1;
			if minutes_time_counter mod 60 = 0 then
				minutes_time_counter <= (others => '0');
				--hours_time_counter := hours_time_counter + 1;
			end if;
		end if;
		assert false report "minutes_incr_time" severity warning;

	end process minutes_incr_time;

	--stessa cosa per le ore
	hours_incr_time: process(h_incr)
	
	begin
		if tm_al = '0' and h_incr'event and h_incr = '1' then
			hours_time_counter <= hours_time_counter + 1;
		end if;
		assert false report "hours_incr_time" severity warning;
	end process hours_incr_time;
	
	--ora la logica per impostare la sveglia. L'utente può lavorare sulla svelgia solo quando tm_al è su sveglia (1),
	--e sia l'ora che i minuti di quest'ultima possono essere modificate solo manualmente coi pulsanti. Partiamo dai minuti.
	set_minutes_alarm: process(m_incr)
	
	begin
		if tm_al = '1' then
			minutes_alarm <= minutes_alarm + 1;
			if minutes_alarm mod 60 = 0 then
				minutes_alarm <= (others => '0');
			end if;
		end if;
		assert false report "set_minutes_alarm" severity warning;
	end process set_minutes_alarm;
	
	--e ora le ore.
	set_hours_alarm: process(h_incr)
	
	begin
		if tm_al = '1' then
			hours_alarm <= hours_alarm + 1;
			if hours_alarm mod 24 = 0 then
				hours_alarm <= (others => '0');
			end if;
		end if;
		assert false report "set_hours_alarm" severity warning;
	end process set_hours_alarm;
	
	--quando l'ora corrente equivale alla sveglia, deve suonare l'allarme
	wake_up: process(minutes_time_counter, hours_time_counter)
	
	begin
		if minutes_time_counter = minutes_alarm and hours_time_counter = hours_alarm then
			al <= '1';
		end if;
		assert false report "wake_up" severity warning;
	end process wake_up;
	
	--ora devo collegare le uscite agli ingressi. Se tm_al è a 0, significa che voglio mostrare l'orologio vero e proprio.
	--altrimenti, voglio mostrare il valore della sveglia.
	show_time: process
		variable min_units: unsigned(0 to 3) := "0000";
		variable min_decim: unsigned(0 to 2) := "000";
		variable hou_units: unsigned(0 to 3) := "0000";
		variable hou_decim: unsigned(0 to 1) := "00";
	begin
		if tm_al = '0' then
			assert false report "tm_al = 0" severity warning;
			--voglio mostrare il tempo sulle uscite appropriate.
			min_units :=  ter mod 10;
			min_decim := (minutes_time_counter - min_units)/10;
			hou_units := hours_time_counter mod 10;
			hou_decim := (hours_time_counter - hou_units)/10;
		else
			if not minutes_alarm = "UUUUUU" and not hours_alarm = "UUUUU" then
				--voglio mostrare la sveglia sulle uscite appropriate
				min_units := minutes_alarm mod 10;
				min_decim := (minutes_alarm - min_units)/10;
				hou_units := hours_alarm mod 10;
				hou_decim := (hours_alarm - hou_units)/10;
			end if;
		end if;
		
		case to_integer(min_units) is
			when 0 => m1 <= "0000000001";
			when 1 => m1 <= "0000000010";
			when 2 => m1 <= "0000000100";
			when 3 => m1 <= "0000001000";
			when 4 => m1 <= "0000010000";
			when 5 => m1 <= "0000100000";
			when 6 => m1 <= "0001000000";
			when 7 => m1 <= "0010000000";
			when 8 => m1 <= "0100000000";
			when 9 => m1 <= "1000000000";
			when others => null;
		end case;
		
		case to_integer(min_decim) is
			when 0 => m10 <= "000001";
			when 1 => m10 <= "000010";
			when 2 => m10 <= "000100";
			when 3 => m10 <= "001000";
			when 4 => m10 <= "010000";
			when 5 => m10 <= "100000";
			when others => null;
		end case;
		
		case to_integer(hou_units) is
			when 0 => h1 <= "0000000001";
			when 1 => h1 <= "0000000010";
			when 2 => h1 <= "0000000100";
			when 3 => h1 <= "0000001000";
			when 4 => h1 <= "0000010000";
			when 5 => h1 <= "0000100000";
			when 6 => h1 <= "0001000000";
			when 7 => h1 <= "0010000000";
			when 8 => h1 <= "0100000000";
			when 9 => h1 <= "1000000000";
			when others => null;
		end case;
		
		case to_integer(hou_decim) is
			when 0 => h10 <= "001";
			when 1 => h10 <= "010";
			when 2 => h10 <= "100";
			when others => null;
		end case;
		--assert false report "show_time" severity warning;
	end process show_time;


end architecture arch;







