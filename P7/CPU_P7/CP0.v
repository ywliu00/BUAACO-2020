`timescale 1ns / 1ps
`include "CPU_Param.v"
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:48:39 12/10/2020 
// Design Name: 
// Module Name:    CP0
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
module CP0(
	input wire clk,
	input wire reset,
    input wire [59:0] InstrType,
	input wire [59:0] WBInstrType,
    input wire [31:0] PCAddr,
	input wire [31:0] DataIn,
	input wire [31:0] CP0Addr,
	input wire Err,
	input wire [4:0] ErrStat,
	input wire [7:2] HWInt,
	input wire BD_from_Mem,
	output wire ErrSignal,
	output wire [31:0] DataOut
    );
	wire [4:0] ExcCode;
	wire [7:2] IM_wire;
	wire EXL_wire, BD_wire, HWIntEn;
	wire [31:0] SR_wire, EPC_wire, Cause_wire;
	reg [31:0] SR, EPC, Cause, PRId;
	
	assign IM_wire = SR[15:10];
	assign HWIntEn = (HWInt[7] && IM_wire[7]) || 
					 (HWInt[6] && IM_wire[6]) || 
					 (HWInt[5] && IM_wire[5]) || 
					 (HWInt[4] && IM_wire[4]) || 
					 (HWInt[3] && IM_wire[3]) || 
					 (HWInt[2] && IM_wire[2]);
	
	assign ErrSignal = Err || (HWIntEn && (SR[1] == 0) && SR[0]);// EXL为1时禁止中断，IE全局中断使能
	//assign ErrSignal = Err || ((HWInt != 6'b000000) && (SR[1] == 0) && SR[0]);
	// 通知CPU开始中断
	
	//assign WBJump = WBInstrType == `inst_j || 
	//				WBInstrType == `inst_jal ||
	//				WBInstrType == `inst_jr ||
	//				WBInstrType == `inst_jalr ? 1 : 0;
	//assign WBBranch = WBInstrType == `inst_beq ||
	//				  WBInstrType == `inst_bgez ||
	//				  WBInstrType == `inst_bgtz ||
	//				  WBInstrType == `inst_blez ||
	//				  WBInstrType == `inst_bltz ||
	//				  WBInstrType == `inst_bne ? 1 : 0;
	assign EPC_wire = (`mtc0 && CP0Addr[4:0] == 14) ? DataIn :
					  (`mtc0 && CP0Addr[4:0] != 14) ? EPC :
					  //(WBJump || WBBranch) ? {PCAddr[31:2], 2'b0} - 32'd4 : 
					  BD_from_Mem ? {PCAddr[31:2], 2'b0} - 32'd4 :
										{PCAddr[31:2], 2'b0};
	// mtc0指令写EPC，如果写的不是EPC则保持原值
	
	assign ExcCode = (| HWInt) ? 5'd0 : 
					 Err ? ErrStat : 5'd31;//中断优先级高于异常
	
	//assign BD_wire = (WBJump || WBBranch) ? 1 : 0;
	// 是否在延迟槽内
	//assign Cause_wire = ErrSignal ? {BD_wire, 15'd0, HWInt, 3'd0, ExcCode, 2'd0} : 
	//								{Cause_wire[31:16], HWInt, Cause_wire[9:0]};
	
	assign Cause_wire = ErrSignal ? {BD_from_Mem, 15'd0, HWInt, 3'd0, ExcCode, 2'd0} : 
									{Cause_wire[31:16], HWInt, Cause_wire[9:0]};
	
	assign EXL_wire = ErrSignal ? 1 : 
					  `eret ? 0 : SR[1];
	assign SR_wire = (`mtc0 && CP0Addr[4:0] == 12) ? DataIn : 
					 //(`mtc0 && CP0Addr[4:0] != 12) ? SR : 
								{SR[31:2], EXL_wire, SR[0]};
	// mtc0指令写SR，如果写的不是SR则保持原值，或只有进出中断时改EXL位
	
	assign DataOut = (`mfc0 && CP0Addr[4:0] == 12) ? SR :
					 (`mfc0 && CP0Addr[4:0] == 13) ? Cause :
					 (`mfc0 && CP0Addr[4:0] == 14) ? EPC :
					 (`mfc0 && CP0Addr[4:0] == 15) ? PRId : 
					 (`eret) ? EPC :32'h1837_5200;
	//mfc0指令读数据
	
	always@(posedge clk)
	begin
		if(reset)
		begin
			SR <= 32'h0000_FC00;
			EPC <= 32'd0;
			Cause <= 32'd0;
			PRId <= 32'h1817_1906;
		end
		else if(ErrSignal)
		begin
			SR <= SR_wire;
			EPC <= EPC_wire;
			Cause <= Cause_wire;
		end
		else if(`eret)
		begin
			SR <= SR_wire;
			Cause <= Cause_wire;
		end
		else if(`mtc0)
		begin
			SR <= SR_wire;
			EPC <= EPC_wire;
			Cause <= Cause_wire;
		end
		else
		begin
			SR <= SR;
			EPC <= EPC;
			Cause <= Cause_wire;
		end
	end
	
endmodule
