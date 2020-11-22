.data
number: .space 400
.text
addu $s0, $0, $0
ori $s1, $0, 45
ori $s2, $0, 0
ori $s3, $0, 4
ori $s4, $0, 1
ori $t0, $0, 0
ori $t1, $0, 1
Loop_Start:
	beq $s0, $s1, Loop_End
	addu $t2, $t1, $t0
	sw $t2, 0($s2)
	addu $s2, $s2, $s3
	addu $s0, $s0, $s4
	subu $t0, $t1, $zero
	addu $t1, $t2, $0
	jal Loop_Start
Loop_End:
lw $t7, -20($s2)