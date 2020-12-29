`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:00:09 12/10/2020 
// Design Name: 
// Module Name:    MemErrDect 
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
module MemErrDect(
    input wire [59:0] InstrType,
    input wire Err_EX_to_Mem,
    input wire [4:0] ErrStat_EX_to_Mem,
    input wire [31:0] MemRWAddr,
    output wire Err,
    output wire [4:0] ErrStat
    );
	
	wire Addr4BAlignErr, Addr2BAlignErr, LoadAlignErr, StoreAlignErr;
	assign Addr4BAlignErr = MemRWAddr[1:0] != 2'b00 ? 1 : 0;
	assign Addr2BAlignErr = (MemRWAddr[0] == 1) ? 1 : 0;
	assign LoadAlignErr = ((`lw && Addr4BAlignErr) || ((`lh || `lhu) && Addr2BAlignErr)) ? 1 : 0;
	assign StoreAlignErr = ((`sw && Addr4BAlignErr) || (`sh && Addr2BAlignErr)) ? 1 : 0;
	//对齐错误部分
	
	wire DMRange, TimerRange, LoadAddrErr, StoreAddrErr, TimerRange_No_sw;
	assign DMRange = (MemRWAddr >= 32'h0000_0000 && MemRWAddr <= 32'h0000_2fff) ? 1 : 0;
	assign TimerRange = ((MemRWAddr >= 32'h0000_7f00 && MemRWAddr <= 32'h0000_7f0b) || 
						(MemRWAddr >= 32'h0000_7f10 && MemRWAddr <= 32'h0000_7f1b)) ? 1 : 0;
	assign TimerRange_No_sw = (MemRWAddr >= 32'h0000_7f08 && MemRWAddr <= 32'h0000_7f0b) || 
							  (MemRWAddr >= 32'h0000_7f18 && MemRWAddr <= 32'h0000_7f1b) ? 1 : 0;
	assign LoadAddrErr = (!(DMRange || TimerRange) && (`lw || `lh || `lhu || `lb || `lbu)) || 
						 (TimerRange && (`lh || `lhu || `lb || `lbu)) || 
						 (`sw && TimerRange_No_sw)? 1 : 0;
	assign StoreAddrErr = (!(DMRange || TimerRange) && (`sw || `sh || `sb)) || (TimerRange && (`sh || `sb)) ? 1 : 0;
	// 地址非法部分
	
	wire LoadAddrOv, StoreAddrOv;
	assign LoadAddrOv = (ErrStat_EX_to_Mem == `Ov) && (`lw || `lh || `lhu || `lb || `lbu);
	assign StoreAddrOv = (ErrStat_EX_to_Mem == `Ov) && (`sw || `sh || `sb);
	// 地址溢出部分
	
	assign Err = (LoadAlignErr || StoreAlignErr || LoadAddrErr || StoreAddrErr ||
				 LoadAddrOv || StoreAddrOv) ? 1 : Err_EX_to_Mem;
	assign ErrStat = (LoadAlignErr || LoadAddrErr || LoadAddrOv) ? `AdEL :
					 (StoreAlignErr || StoreAddrErr || StoreAddrOv) ? `AdES :
					 ErrStat_EX_to_Mem;
	
endmodule
