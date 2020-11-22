`timescale 1ns / 1ps
`include "CPU_Param.h"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:48:58 11/22/2020 
// Design Name: 
// Module Name:    InstrDecoder 
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
module InstrDecoder(
    input wire [31:0] Instr,
    output wire [59:0] InstrType
    );
	 wire [5:0] OpCode, Func;
	 wire typeR;
	 
	 assign {OpCode, Func} = {Instr[31:26], Instr[5:0]};
	 assign typeR = & (!OpCode);
	 
	 assign InstrType = (typeR && Func == 6'b100001) ? addu :
	                    (typeR && Func == 6'b100011) ? subu :
                       (OpCode == 6'b001101) ? ori :
                       (OpCode == 6'b100011) ? lw :
                       (OpCode == 6'b101011) ? sw :
                       (OpCode == 6'b000100) ? beq :
                       (OpCode == 6'b001111) ? lui :
                       (OpCode == 6'b000010) ? j :
                       (OpCode == 6'b000011) ? jal :
                       (typeR && Func == 6'b001000) ? jr :
                       (typeR && Func == 6'b000000) ? sll : err;

endmodule
