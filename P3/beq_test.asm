ori $s2, $0, 4
ori $1, $0, 1
ori $2, $0, 2
ori $3, $0, 3
Switch:
beq $t1, $0, Case_3
beq $t1, $1, Case_1
beq $t1, $2, Case_2
beq $t1, $3, EndCase
Case_1:
	addu $s0, $1, $0
	sw $s0, 0($s1)
	addu $s1, $s1, $s2
	addu $t1, $t1, $1
	beq $t0, $zero, Switch
Case_2:
	addu $s0, $2, $0
	sw $s0, 0($s1)
	addu $s1, $s1, $s2
	addu $t1, $t1, $1
	beq $t0, $zero, Switch
Case_3:
	addu $s0, $0, $3
	sw $s0, 0($s1)
	addu $s1, $s1, $s2
	addu $t1, $t1, $1
	beq $t0, $zero, Switch
EndCase:
lui $s0, 0x9876
sw $s0, 0($s1)