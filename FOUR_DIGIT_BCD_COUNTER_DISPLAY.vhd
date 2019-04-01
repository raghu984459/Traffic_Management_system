-- Simple 4 Digit BCD Counter by raghu

library ieee;                    -- Standard ieee Library
use ieee.std_logic_1164.all;     -- Use std_logic_1164 package from ieee library
use work.CS254_EE214.all;

entity FOUR_DIGIT_BCD_COUNTER_DISPLAY is -- Entity declaration
	port(CLK : in std_logic; -- Clock input of the counter
   	 
	     RSTN : in std_logic; -- Active low reset input of the counter
		  LDN : in std_logic; -- Active low load input of the counter
		  DIG : in std_logic_vector ( 1 downto 0); -- Select Pins of Latch Bank
		  D : in std_logic_vector(3 downto 0); -- Value to be assigned to the counter when LDN is active
		  O : out std_logic_vector(3 downto 0); -- Output of the counter
		   P : out std_logic_vector(3 downto 0); -- select lines for the digit in seven segment display
		  C : out std_logic); -- Carry Output Of The Counter
end FOUR_DIGIT_BCD_COUNTER_DISPLAY;

architecture FUNCTIONALITY of FOUR_DIGIT_BCD_COUNTER_DISPLAY is

signal Q1 , Q2 , Q3 , Q4 , D0 , D1 , D2 , D3 : std_logic_vector (3 downto 0);
signal S : std_logic_vector (4 downto 0);
signal K : std_logic_vector (1 downto 0);
signal g : std_logic_vector (1 downto 0);
signal C1 , C2 , C3,S0,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10,S11,S12,S13,S14,S15 : std_logic;

begin
		
		A0 : DIV_BY_FOUR32 port map (CLK , RSTN , S);
	g(1)<= S(1);
	g(0)<= S(0);
		M0 : strMUX_16X4 port map(Q4 , Q3 , Q2 , Q1 , g , O);
		
		L0 : LATCH_BANK3 port map (D , DIG , D0 , D1 , D2 , D3);--D0 lsb D3 msb of the counters 
		
		U17 : OR_4 port map (Q1,Q2,S7);
		U18 : OR_4 port map (Q3,Q4,S8);
		U19 : OR_2 port map (S8,S7,S10);  -- sum of all the bits of the output is anded with the enable of the each clock 
	   U20 : NOT_1 port map (S10,C);
		
		U21 : AND_1 port map (S10,'1',S12);
		U0 : COUNTERSYNC port map (S(4) , S12 , RSTN , LDN , D0 ,'0' ,C1 , Q1);
		U1 : NOT_1 port map (C1,S0);
		
		U22 : AND_1 port map (S10,S0,S13);
		U2 : COUNTERSYNC port map (S(4) , S13, RSTN , LDN , D1 ,C1, C2 , Q2);
		U3 : NOT_1 port map (C2,S1);
		U9 : AND_1 port map (S1,S0,S5);
		U4 : OR_2 port map (C1,C2,S3);
		
		U23 : AND_1 port map (S10,S5,S14);
		U5 : COUNTERSYNC port map (S(4), S14 , RSTN , LDN , D2 ,S3, C3 , Q3);
		U6 : NOT_1 port map (C3,S2);
		U10 : AND_1 port map (S2,S5,S6);
		U7 : OR_2 port map (S3,C3,S4);

		U24 : AND_1 port map (S10,S6,S15);
		U8 : COUNTERSYNC port map (S(4) , S15 , RSTN , LDN , D3 , S4,S11 , Q4);--lsb Q1 msb = q4
		
				
		-- switches code
		U15 : NOT_1 port map (S(0),K(0));
		U16 : NOT_1 port map (S(1),K(1));
		U11 : OR_2 port map (S(0), S(1),P(3)); -- P(3) is S4 select line 
		U12 : OR_2 port map (S(0),K(1),P(2));
		U13 : OR_2 port map (K(0),S(1),P(1));
		U14 : OR_2 port map (K(0), K(1),P(0));
		
end FUNCTIONALITY;