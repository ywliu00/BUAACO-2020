.data
number: .space 400
.text
addu $s0, $0, $0
nop
nop
nop
nop
ori $s1, $0, 45
nop
nop
nop
nop
ori $s2, $0, 0
nop
nop
nop
nop
ori $s3, $0, 4
nop
nop
nop
nop
ori $s4, $0, 1
nop
nop
nop
nop
ori $t0, $0, 0
nop
nop
nop
nop
ori $t1, $0, 1
nop
nop
nop
nop
Loop_Start:
	beq $s0, $s1, Loop_End
nop
nop
nop
nop
	addu $t2, $t1, $t0
nop
nop
nop
nop
	sw $t2, 0($s2)
nop
nop
nop
nop
	addu $s2, $s2, $s3
nop
nop
nop
nop
	addu $s0, $s0, $s4
nop
nop
nop
nop
	subu $t0, $t1, $zero
nop
nop
nop
nop
	addu $t1, $t2, $0
nop
nop
nop
nop
	jal Loop_Start
nop
nop
nop
nop
Loop_End:
lw $t7, -20($s2)
nop
nop
nop
nop
