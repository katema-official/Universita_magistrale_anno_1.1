entity And2 is
	port(In1, In2: in bit;
		Out1: out bit);
end entity And2;

architecture Beh of And2 is
	begin
		Out1 <= In1 and In2 after 2 ns;
end architecture Beh;




