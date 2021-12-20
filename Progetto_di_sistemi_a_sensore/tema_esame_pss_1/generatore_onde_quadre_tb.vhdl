library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


entity generatore_onde_quadre_tb is

end generatore_onde_quadre_tb;



architecture tb of generatore_onde_quadre_tb is

	component generatore_onde_quadre is
		port(
		CLK : in std_logic;
		RST : in std_logic;
		VAL : in unsigned (7 downto 0);
		OUT_S : out std_logic
		);
	end component;
	
	signal rstt : std_logic := '1';
	signal vall : unsigned(7 downto 0) := "00000000";
	signal out_ss : std_logic;
	
	signal clk : std_logic;
	
	
	
	begin
		gen_maremma_buttana: generatore_onde_quadre port map(CLK => clk, RST => rstt, VAL => vall, OUT_S => out_ss);
		
		
		ClockGen : process
			constant period: time := 1 ms;--1000 Hz
				begin
					clk <= '0', '1' after period/2;
					wait for period;
				end process;

		TestBench : process(clk)
			variable i : integer range 0 to 1000 := 0;
				begin
					--tutto avviene al battere del clock
					if(clk'event and clk = '1') then
						
						if(rstt = '1') then
							rstt <= '0';
						end if;
						
						if(i mod 1000 = 0) then
							rstt <= '1';
							vall <= vall + 1;
							i := 0;
							
						end if;
						
						i := i + 1;
						
						--assert (i>0) report "i is 0" severity failure;
						
						--report "vall: " & integer'image(to_integer(vall));
						--report "i: " & integer'image(i);
						
					elsif(clk'event and clk = '0') then
						
						--if(rstt = '1') then
						--	rstt <= '0';
						--end if;
						
					end if;
			
					
					assert(vall < 255) report "reached end of test" severity failure;
			
		end process;


end tb;


