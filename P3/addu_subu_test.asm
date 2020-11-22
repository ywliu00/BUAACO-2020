lui $1, 0x1
ori $1, $1, 0x5f90
lui $2, 0xffff
ori $2, $2, 0xffff #li $2, -1
lui $3, 0x7fff
ori $3, $3, 0xffff #li $3, 2147483647
lui $4, 0x118
ori $4, $4, 0x6220 #li $4, 18375200
ori $5, $0, 3
addu $10, $1, $4
addu $11, $1, $2
addu $12, $2, $1
addu $13, $2, $2
subu $20, $1, $1
subu $21, $2, $2
subu $22, $1, $5
subu $23, $5, $4
subu $24, $4, $2
