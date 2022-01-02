entity Dlatch_En is
	port(Din, Clk, En : in bit;
		Qout : out bit);
end entity Dlatch_En;

architecture Struct of Dlatch_En is
	signal IntClk : bit;
	begin
		gate: entity work.And2 port map(In1 => Clk, In2 => En, Out1 => IntClk);
		latch: entity work.Dlatch(Beh) port map(Clk => IntClk, D => Din, Q => Qout);
end architecture Struct;
		
		
		