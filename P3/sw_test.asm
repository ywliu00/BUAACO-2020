lui $t1, 0x3333
ori $t1, $t1, 0x3333
ori $t0, 4
addu $s0, $zero, $t0
addu $s0, $s0, $s0
sw $t1, 0($s0)
lui $t1, 0x2222
ori $t1, $t1, 0x2222
sw $t1, -4($s0)
lui $t1, 0x1111
ori $t1, $t1, 0x1111
sw $t1, -8($s0)
lui $t1, 0x4444
ori $t1, $t1, 0x4444
sw $t1, 4($s0)
lui $t1, 0x5555
ori $t1, $t1, 0x5555
sw $t1, 8($s0)
######## lw test
addu $s0, $zero, $zero
addu $s1, $s0, $t0
addu $s2, $s1, $t0
addu $s3, $s2, $t0
addu $s4, $s3, $t0
lw $t0, -8($s2)
lw $t1, -4($s2)
lw $t2, ($s2)
lw $t3, 4($s2)
lw $t4, 8($s2)







