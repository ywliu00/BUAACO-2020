.ktext 0x4180
mfc0 $1,$13
addi $9, $0, 0
eret
ori	$2, $2, 2
addi	$2, $2, 2
.text
lui $8, 0x7fff
lui $9, 0x7fff
ori $a0, $0, 0xffff
add $9, $9, $a0
jal	eee
add $9, $9, $9
ori $a3,0xfc01
#beq $9,$8,eee
add $10,$8,$9
ori $a1,2
sw $a1,4($t1)
ori $a1,2
ori $a1,2
eee:
sw $a0,0($t1)
