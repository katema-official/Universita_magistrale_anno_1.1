entity tb is
end entity tb;

architecture arch of tb is

	signal din, clk, en : bit;
	signal qout : bit;

	begin
	
		dlatch_en : entity work.Dlatch_En port map(din, clk, en, qout);
		
		ClockGen : process
			constant period: time := 1 ms;--1000 Hz
				begin
					clk <= '0', '1' after period/2;
					wait for period;
				end process;
				
		MyProcess : process
		
			begin
				en <= '1';
				din <= '0',
						'1' after 5 ms,
						'0' after 10 ms;
				assert(false) report "tb ended" severity failure;
			end process MyProcess;
		


end architecture arch;
