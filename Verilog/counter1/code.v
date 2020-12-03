`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:55 09/16/2020 
// Design Name: 
// Module Name:    code 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module code(
    input Clk,
    input Reset,
    input Slt,
    input En,
    output reg[63:0] Output0,
    output reg[63:0] Output1
    );
    
	 //reg[63:0] Out_0;
	 //reg[63:0] Out_1;
	 
	 //assign Output0 = Out_0;
	 //assign OutPut1 = Out_1;
	 
	 reg[1:0] i;
	 
	 initial begin
	     //Out_0 <= 64'd0;
		  //Out_1 <= 64'd0;
		  Output0 <= 64'd0;
		  Output1 <= 64'd0;
		  i <= 2'b00;
	 end
	 
	 always@(posedge Clk)
	 begin
	     if(Reset == 1)
		  begin
		      //Out_0 <= 64'd0;
				//Out_1 <= 64'd0;
		      Output0 <= 64'd0;
				Output1 <= 64'd0;
				i <= 2'b00;
		  end
		  
		  else if(En == 1)
		  begin
		      if(Slt == 0)
				begin
				    //Out_0 <= Out_0 + 1;
					 Output0 <= Output0 + 1;
				end
				
				else
				begin
				    i <= i + 1;
					 if(i == 3)
					 begin
					     i <= 2'b00;
						  //Out_1 <= Out_1 + 1;
						  Output1 <= Output1 + 1;
					 end
				end
		  end
	 end

endmodule
