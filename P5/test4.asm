ori $7, $0, 1
addu $8, $8, $7
ori $15, 0
sw $15, 0($0)
ori $15, $0, 1
sw $15, 4($0)
ori $15, $0, 2
sw $15, 8($0)
ori $16, $0, 3
sw $15, 12($0)
ori $16, $0, 4
sw $15, 16($0)
ori $16, $0, 5
sw $15, 20($0)
ori $16, $0, 6
sw $15, 24($0)
ori $16, $0, 7
sw $16, 28($0)
ori $1, $0, 4
ori $2, $0, 8
ori $3, $0, 12
nop
nop
nop
addu $1, $2, $3
lw $1, 0($1)

ori $1, $0, 4
nop
nop
addu $1, $2, $3
lw $1, 0($2)
beq $1, $15, end1
nop
ori $13, $0, 0x1234

addu $1, $2, $3
jal end1
addu $10, $31, $8
end1:
nop

ori $1, $0, 4
nop
nop
addu $1, $2, $3
lw $1, 0($1)
addu $10, $1, $0
