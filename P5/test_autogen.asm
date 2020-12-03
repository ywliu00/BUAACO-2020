ori $1, $0, 0x5678
ori $3, $0, 0x4567
lui $2, 0xABCD
lui $4, 0x4321
ori $20, $0, 8  #DMµÿ÷∑
sw $1, 0($0)
sw $1, 4($0)
sw $1, 8($0)
sw $2, 12($0)
sw $2, 16($0)
sw $2, 20($0)

#################### Case 1 ########################
lui $5, 0xABCD #Tnew=1
addu $8, $0, $0
beq $5, $1, BDest1_0_2 #Tuse=0
nop
ori $8, $0, 0x1234
BDest1_0_2:
addu $5, $5, $5

ori $5, $0, 0x5678 #Tnew=2
addu $8, $0, $0
beq $5, $2, BDest2_0_2
nop
ori $8, $0, 0x1234
BDest2_0_2:
addu $5, $5, $5

lw $5, -4($20) #Tnew=3
addu $8, $0, $0
beq $5, $2, BDest3_0_2
nop
ori $8, $0, 0x1234
BDest3_0_2:
addu $5, $5, $5

lui $5, 0xABCD #Tnew=1
addu $8, $0, $0
addu $5, $5, $1 #Tuse=1

ori $5, $0, 0x5678 #Tnew=2
addu $8, $0, $0
addu $5, $5, $1 #Tuse=1

lw $5, -4($20) #Tnew=3
addu $8, $0, $0
addu $5, $5, $1 #Tuse=1

lui $5, 0xABCD #Tnew=1
addu $8, $0, $0
sw $5, 100($0) #Tuse=2

ori $5, $0, 0x5678 #Tnew=2
addu $8, $0, $0
sw $5, 100($0) #Tuse=2

lw $5, -4($20) #Tnew=3
addu $8, $0, $0
sw $5, 100($0) #Tuse=2

#################### Case 2 ########################
lui $5, 0xABCD #Tnew=1
beq $5, $1, BDest1_0_1 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest1_0_1:
addu $5, $5, $5 #Tuse=0

ori $5, $0, 0x5678 #Tnew=2
beq $5, $2, BDest2_0_1 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest2_0_1:
addu $5, $5, $5 #Tuse=0

lw $5, -4($20) #Tnew=3
beq $5, $2, BDest3_0_1 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest3_0_1:
addu $5, $5, $5 #Tuse=0

lui $5, 0xABCD #Tnew=1
addu $5, $5, $1 #Tuse=1

ori $5, $0, 0x5678 #Tnew=2
addu $5, $5, $1 #Tuse=1

lw $5, -4($20) #Tnew=3
addu $5, $5, $1 #Tuse=1

lui $5, 0xABCD #Tnew=1
sw $5, 100($0) #Tuse=2

ori $5, $0, 0x5678 #Tnew=2
sw $5, 100($0) #Tuse=2

lw $5, -4($20) #Tnew=3
sw $5, 100($0) #Tuse=2

#################### Case 3 ########################
lui $5, 0xABCD #Tnew=1
lui $5, 0x4321 #Tnew1=0
beq $5, $3, BDest1_0_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest1_0_0_3:
addu $5, $5, $5 #Tuse=0


ori $5, $0, 0x5678 #Tnew=2
lui $5, 0x4321 #Tnew1=0
beq $5, $3, BDest2_0_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest2_0_0_3:
addu $5, $5, $5 #Tuse=0


lw $5, -4($20) #Tnew=3
lui $5, 0x4321 #Tnew1=0
beq $5, $3, BDest3_0_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest3_0_0_3:
addu $5, $5, $5 #Tuse=0


lui $5, 0xABCD #Tnew=1
ori $5, $0, 0x4567 #Tnew1=1
beq $5, $4, BDest1_1_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest1_1_0_3:
addu $5, $5, $5 #Tuse=0


ori $5, $0, 0x5678 #Tnew=2
ori $5, $0, 0x4567 #Tnew1=1
beq $5, $4, BDest2_1_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest2_1_0_3:
addu $5, $5, $5 #Tuse=0


lw $5, -4($20) #Tnew=3
ori $5, $0, 0x4567 #Tnew1=1
beq $5, $4, BDest3_1_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest3_1_0_3:
addu $5, $5, $5 #Tuse=0


lui $5, 0xABCD #Tnew=1
lw $5, 8($20) #Tnew1=2
beq $5, $3, BDest1_2_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest1_2_0_3:
addu $5, $5, $5 #Tuse=0


ori $5, $0, 0x5678 #Tnew=2
lw $5, 8($20) #Tnew1=2
beq $5, $3, BDest2_2_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest2_2_0_3:
addu $5, $5, $5 #Tuse=0


lw $5, -4($20) #Tnew=3
lw $5, 8($20) #Tnew1=2
beq $5, $3, BDest3_2_0_3 #Tuse=0
nop
ori $8, $0, 0x1234 #Tuse=0
BDest3_2_0_3:
addu $5, $5, $5 #Tuse=0


lui $5, 0xABCD #Tnew=1
lui $5, 0x4321 #Tnew1=0
addu $5, $5, $1 #Tuse=1

ori $5, $0, 0x5678 #Tnew=2
lui $5, 0x4321 #Tnew1=0
addu $5, $5, $1 #Tuse=1

lw $5, -4($20) #Tnew=3
lui $5, 0x4321 #Tnew1=0
addu $5, $5, $1 #Tuse=1

lui $5, 0xABCD #Tnew=1
ori $5, $0, 0x4567 #Tnew1=1
addu $5, $5, $1 #Tuse=1

ori $5, $0, 0x5678 #Tnew=2
ori $5, $0, 0x4567 #Tnew1=1
addu $5, $5, $1 #Tuse=1

lw $5, -4($20) #Tnew=3
ori $5, $0, 0x4567 #Tnew1=1
addu $5, $5, $1 #Tuse=1

lui $5, 0xABCD #Tnew=1
lw $5, 8($20) #Tnew1=2
addu $5, $5, $1 #Tuse=1

ori $5, $0, 0x5678 #Tnew=2
lw $5, 8($20) #Tnew1=2
addu $5, $5, $1 #Tuse=1

lw $5, -4($20) #Tnew=3
lw $5, 8($20) #Tnew1=2
addu $5, $5, $1 #Tuse=1

lui $5, 0xABCD #Tnew=1
lui $5, 0x4321 #Tnew1=0
sw $5, 100($0) #Tuse=2

ori $5, $0, 0x5678 #Tnew=2
lui $5, 0x4321 #Tnew1=0
sw $5, 100($0) #Tuse=2

lw $5, -4($20) #Tnew=3
lui $5, 0x4321 #Tnew1=0
sw $5, 100($0) #Tuse=2

lui $5, 0xABCD #Tnew=1
ori $5, $0, 0x4567 #Tnew1=1
sw $5, 100($0) #Tuse=2

ori $5, $0, 0x5678 #Tnew=2
ori $5, $0, 0x4567 #Tnew1=1
sw $5, 100($0) #Tuse=2

lw $5, -4($20) #Tnew=3
ori $5, $0, 0x4567 #Tnew1=1
sw $5, 100($0) #Tuse=2

lui $5, 0xABCD #Tnew=1
lw $5, 8($20) #Tnew1=2
sw $5, 100($0) #Tuse=2

ori $5, $0, 0x5678 #Tnew=2
lw $5, 8($20) #Tnew1=2
sw $5, 100($0) #Tuse=2

lw $5, -4($20) #Tnew=3
lw $5, 8($20) #Tnew1=2
sw $5, 100($0) #Tuse=2

