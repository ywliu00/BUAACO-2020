.text
ori $11, $0, 1 #IM
sll $11, $11, 3
ori $12, $0, 0 #Mode
sll $12, $12, 1
ori $13, $0, 1 #Enable
addu $14, $11, $12
addu $14, $14, $13 #CTRL

ori $15, $0, 100 #PRESET
ori $10, $0, 0x7F00 #Start address
ori $16, $0, 150
sw $15, 4($10)
sw $16, 0x7f14($0)
sw $14, 0($10)
sw $14, 0x7f10($0)
LoopStart:
addiu $5, $5, 1
jal LoopStart
nop
nop
