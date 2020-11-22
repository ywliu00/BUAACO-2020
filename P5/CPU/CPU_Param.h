`default_nettype none

parameter ALU_add = 3'b000,
          ALU_sub = 3'b001,
			 ALU_or = 3'b010,
			 ALU_lshift = 3'b011

parameter inst_err = 60'd0,
          inst_addu = 60'd1 << 0,
          inst_subu = 60'd1 << 1,
          inst_ori = 60'd1 << 2,
          inst_lw = 60'd1 << 3,
          inst_sw = 60'd1 << 4,
          inst_beq = 60'd1 << 5,
          inst_lui = 60'd1 << 6,
          inst_j = 60'd1 << 7,
          inst_jal = 60'd1 << 8,
          inst_jr = 60'd1 << 9,
          inst_sll = 60'd1 << 10;

`define addu (InstrType[0])
`define subu (InstrType[1])
`define ori (InstrType[2])
`define lw (InstrType[3])
`define sw (InstrType[4])
`define beq (InstrType[5])
`define lui (InstrType[6])
`define j (InstrType[7])
`define jal (InstrType[8])
`define jr (InstrType[9])
`define sll (InstrType[10])