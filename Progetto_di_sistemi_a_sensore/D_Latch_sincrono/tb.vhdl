entity tb is
end entity tb;

architecture arch of tb is

	signal din, clk, en : bit;
	signal qout : bit;

	begin
	
		dlatch_en : entity work.Dlatch_En port map(Din => din, Clk => clk, En => en, Qout => qout);
		
		ClockGen : process
			constant period: time := 1 ms;--1000 Hz
				begin
					clk <= '0', '1' after period/2;
					wait for period;
				end process;
				
		
		en <= '0',
				'1' after 20 ms,
				'0' after 90 ms,
				'1' after 115 ms;
		din <= '0',
				'1' after 50 ms,
				'0' after 100 ms;
				
		
		tmp: process
			variable counter: integer := 0;
				begin
					if (counter <= 100) then
						counter := counter + 1;
					else
						assert(false) report "tb ended" severity failure;
					end if;
					wait for 100 ms;
				end process tmp;
		
		
end architecture arch;
