.text
ori $11, $0, 1
mtc0 $11, $12
# ¿ªÖÐ¶Ï
#ori $11, $0, 1 #IM
#sll $11, $11, 3
#ori $12, $0, 0 #Mode
#sll $12, $12, 1
#ori $13, $0, 0 #Enable
#addu $14, $11, $12
#addu $14, $14, $13 #CTRL
#ori $15, $0, 100 #PRESET
#ori $10, $0, 0x7F00 #Start address
#ori $16, $0, 150
ori $4, 0x3031
mthi $4
sw $4, 4($0)
ori $4, 0x3038
sw $4, 0($0)
mtlo $4
nop
mfhi $5
lw $5, 4($0)
ori $3, $0, 0x3045
#addi $4, $4, 1
#jalr $5, $3
#divu $3, $11
mtlo $11
mflo $1
#lh $5, -1001($5)
#lw $4, 1($0)
#sw $15, 4($10)
#sw $16, 0x7f14($0)
#sw $14, 0($10)
#sw $14, 0x7f10($0)
#lw $14, 1($0)
#ori $5, $0, 1
addi $6, $0, 20
lui $4, 0x7fff
ori $4, $4, 0xfff0
#addi $5, $4, 40
#lb $5, 101($4)
#lb $4, 0x2fff($0)
lbu $4, 0x2000($0)
addi $4, $4, 1
lh $4, 0x1002($0)
mflo $3
#mthi $11
div $15, $5
#lhu $4, 0x0100($0)
#lw $4, 0x2004($0)
#add $5, $4, $6
#div $15, $5

#addi $6, $0, 0xabcd
#addi $6, $0, 0xdcba
#addi $6, $0, 0x4399
jal Dest1
mfhi $6
ori $6, $0, 1
addiu $6, $6, 0x1234
addiu $6, $6, 1
ori $6, $0, 0
Dest1:
lui $7, 0xABCD
addiu $7, $0, 0x1234
mfhi $6
mflo $6
