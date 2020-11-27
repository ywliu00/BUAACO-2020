#ori $1, $0, 4
ori $29, $0, 0x3038
sw $29, 40($0)
lw $1, 0($1)
sw $1, 0($1)

lw $2, 4($1)
addu $3, $2, $2

lw $2, 4($1)
addu $3, $2, $2

lw $2, 40($0)
beq $2, $0, beq_dest
nop

lw $2, 40($0)
jr $2
nop

beq_dest:
lui $6, 0x1234
beq $2, $0, beq_dest
nop

addu $6, $6, $6
beq $6, $0, beq_dest
nop

addu $6, $0, $0
sw $6, 0($0)