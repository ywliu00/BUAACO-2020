lui $10, 3000
ori $10, $10, 1972
lui $11, 20000
ori $11, $11, 1312
multu $10, $11
mfhi $13
mflo $14
sb $13, 7($0)
sh $14, 10($0)
lui $20, 0x1234
ori $20, $20, 0x5678
sw $20, 0($0)
lui $21, 0xFFFF
ori $21, 0xFFFF
lui $22, 0xFFFF
ori $22, 0xFFFF
lb $21, 1($0)
lh $22, 2($0)
