`timescale 1ns / 1ps
module Lemmings1(
    input clk,
    input areset,    // Freshly brainwashed Lemmings walk left.
    input bump_left,
    input bump_right,
    input ground,
    input dig,
    output walk_left,
    output walk_right,
    output aaah,
    output digging ); 
	 
	 parameter S0 = 4'b0000,//left
				  S1 = 4'b0001,//right
				  S2 = 4'b0010,//fall with left
				  S3 = 4'b0011,//fall with right
				  S4 = 4'b0100,//dig left
				  S5 = 4'b0101,//dig right
				  S6 = 4'b0110;//dead
	reg[3:0] stat;
	integer fallingtime;
	
   always@(posedge clk ,posedge areset)
	begin
        if(areset == 1)
		  begin
			stat <= S0;
			fallingtime <= 0;
		  end
		  else
		  begin
				case(stat)
				S0:
				begin
						if(!ground) 
						begin
							stat <= S2;
							fallingtime <= 0;
						end
						else if(dig) stat <= S4;
						else if(bump_left) stat <= S1;
						else stat <= S0;
				end
				S1:
				begin
						if(!ground)  
						begin
							stat <= S3;
							fallingtime <= 0;
						end
						else if(dig) stat <= S5;
						else if(bump_right) stat <= S0;
						else stat <= S1;
				end
				S2:
				begin
					if(ground) 
					begin
						if(fallingtime < 20) stat <= S0;
						else stat <= S6;
					end
					else
					begin
						stat <= S2;
						fallingtime <= fallingtime + 1;
					end
				end
				S3:
				begin
					if(ground) 
					begin
						if(fallingtime < 20) stat <= S1;
						else stat <= S6;
					end
					else begin
						stat <= S3;
						fallingtime <= fallingtime + 1;
					end
				end
				S4:
				begin
					if(!ground) 
						begin
							stat <= S2;
							fallingtime <= 0;
						end
					else stat <= S4;
				end
				S5:
				begin
					if(!ground)  
						begin
							stat <= S3;
							fallingtime <= 0;
						end
					else stat <= S5;
				end
				default: stat <= stat;
				endcase
			end
	end
	assign walk_left = (stat == S0) ? 1 : 0,
	       walk_right = (stat == S1) ? 1 : 0,
			 aaah = (stat == S2 || stat == S3) ? 1 : 0,
			 digging = (stat == S4 || stat == S5) ? 1 : 0;

endmodule
