`timescale 1ns / 1ps

module BlockChecker(
    input clk,
    input reset,
    input [7:0] in,
    output result
    );
	 
	 parameter S0 = 4'b0000,
	           S1 = 4'b0001,
				  S2 = 4'b0010,
				  S3 = 4'b0011,
				  S4 = 4'b0100,
				  S5 = 4'b0101,
				  S6 = 4'b0110,
				  S7 = 4'b0111,
				  S8 = 4'b1000,
				  S9 = 4'b1001;

	 reg[3:0] stat;
	 reg not_err;
	 
	 integer bg = 0, ed = 0;
	 
	 always@(posedge clk or posedge reset)
	 begin
		if(reset == 1)
		begin
			stat <= S0;
			bg <= 0;
			ed <= 0;
			not_err <= 1;
		end
		else
		begin
			if(ed > bg && stat == S0) not_err <= 0;
			case(stat)
				S0:
				begin
					stat <= (in == "b" || in == "B") ? S1 :
							  (in == "e" || in == "E") ? S5 :
							  (in == " " || in == 0) ? S0 : S9;
				end
				S1:
				begin
					stat <= (in == "e" || in == "E") ? S2 :
                       (in == " ") ? S0 : S9;
				end
				S2:
				begin
					stat <= (in == "g" || in == "G") ? S3 :
                       (in == " ") ? S0 : S9;
				end
				S3:
				begin
					stat <= (in == "i" || in == "I") ? S4 :
                       (in == " ") ? S0 : S9;
				end
				S4:
				begin
					bg <= (in == "n" || in == "N") ? bg + 1 : bg;
					stat <= (in == "n" || in == "N") ? S7 :
							  (in == " ") ? S0 : S9;
				end
				S5:
				begin
					stat <= (in == "n" || in == "N") ? S6 :
                       (in == " ") ? S0 : S9;
				end
				S6:
				begin
					ed <= (in == "d" || in == "D") ? ed + 1 : ed;
					stat <= (in == "d" || in == "D") ? S8 :
							  (in == " ") ? S0 : S9;
				end
				S7:
				begin
					stat <= (in == " ") ? S0 : S9;
					if(in != " ") bg <= bg - 1;
				end
				S8:
				begin
					stat <= (in == " ") ? S0 : S9;
					if(in != " ") ed <= ed - 1;
				end
				S9:
				begin
					stat <= (in == " " || in == 0) ? S0 : S9;
				end
			endcase
		end
	 end
	 assign result = ((ed == bg) && not_err);
	 
endmodule
