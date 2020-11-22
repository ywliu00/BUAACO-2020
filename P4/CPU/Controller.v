`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:35 11/17/2020 
// Design Name: 
// Module Name:    Controller 
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
module Controller(
	 input wire [5:0] OpCode,
	 input wire [4:0] rt,
    input wire [5:0] Func,
	 output wire RegWrite,
	 output wire [1:0] ALUOp,
	 output wire Branch,
	 output wire Jump,
	 output wire Jr,
	 output wire [1:0] RegDst,
	 output wire ALUSel,
	 output wire MemWrite,
	 output wire Sign,
	 output wire [2:0] RegWriteSel,
	 output wire LShift
    );
    wire addu, subu, ori, lw, sw, beq, lui, jal, jr, sll;
	 
	 Ctrl_And And_Logic(.OpCode(OpCode), 
							  .rt(rt),
							  .Func(Func),
							  .addu(addu),
							  .subu(subu),
							  .ori(ori),
							  .lw(lw),
							  .sw(sw),
							  .beq(beq),
							  .lui(lui),
							  .jal(jal),
							  .jr(jr),
							  .sll(sll)
							  );
	 
	 assign RegWrite = | {addu, subu, ori, lw, lui, jal, sll};
	 assign ALUOp = ori ? 2'b10 :
						 (subu || beq) ? 2'b01 : 2'b00;
	 assign {Branch, Jump, Jr} = {beq, jal, jr};
	 assign RegDst = jal ? 2'b10 :
						  (addu || subu || sll) ? 2'b01 : 2'b00;
	 assign ALUSel = | {ori, lw, sw};
	 assign MemWrite = sw;
	 assign RegWriteSel = jal ? 3'b011 :
	                      (lui || sll) ? 3'b010 :
								 lw ? 3'b001 : 3'b000;
	 assign Sign = | {lw, sw, beq};
	 assign LShift = sll;

endmodule
