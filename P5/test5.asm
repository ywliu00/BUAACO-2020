ori $1, $0, 0x5678
lui $2, 0xABCD
ori $20, $0, 8  #DM地址
sw $1, 0($0)
sw $1, 4($0)
sw $1, 8($0)
sw $1, 12($0)
ori $5, $0, 0x5678
nop
nop
beq $5, $1, Bdest1
nop
ori $5, $0, 0x1234
Bdest1:
addu $5, $5, $5 #内部转发测试

lw $5, -4($20) #Tnew=3
addu $8, $0, $0
beq $5, $1, Bdest2 #Tuse=0
nop
ori $8, $0, 0x1234
Bdest2:
addu $5, $5, $5 #测试是否暂停

lw $5, -4($20) #Tnew=2
addu $8, $0, $0
beq $5, $1, Bdest2 #Tuse=0
nop
ori $8, $0, 0x1234
Bdest2:
addu $5, $5, $5 #测试是否转发