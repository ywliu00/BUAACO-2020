addi $t0, $0, 1
addi $t1, $t1, 100
lui $t2, 0x1234
ori $t2, $t2, 0x5678
sb $t2, 0($t1)
addu $t1, $t0, $t1
addu $t1, $t0, $t1
addu $t1, $t0, $t1
addu $t1, $t0, $t1
addu $t1, $t0, $t1
addu $t1, $t0, $t1
sb $t2, 0($t1)