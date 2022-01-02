entity Dlatch is
	port(D, Clk : in bit;
		Q : out bit);
end entity Dlatch;

architecture Beh of Dlatch is
	begin
		process(D, Clk)
		begin
			if Clk='1' and Clk'Event then
				Q <= D after 3 ns;
			end if;
		end process;
end architecture Beh;

