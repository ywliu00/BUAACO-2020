.data
instr: .space 25
.text
li $v0, 5
syscall
move $s0, $v0 # Read input str length to s0
la $t0, instr       # Start of str(True)
move $t1, $zero
Read:
	li $v0, 12
	syscall
	sb $v0, 0($t0)
	addi $t0, $t0, 1
	addi $t1, $t1, 1
	bne $t1, $s0, Read
#li $v0, 8
#la $a0, instr
#li $a1, 22
#syscall #Read input str

la $t0, instr       # Start of str(True)
addi $t1, $s0, -1  # End of str(offset)
add $t1, $t1, $t0 #End of str(True)
li $s1, 1  # Yes / No
checkStr:
	lb $t2, 0($t0)
	lb $t3, 0($t1) #load two char
	seq $s1, $t2, $t3
	addi $t0, $t0, 1
	subi $t1, $t1, 1 #next addr
	beqz $s1, output
	bge $t0, $t1, output
	j checkStr
output:
	li $v0, 1
	move $a0, $s1
	syscall
li $v0, 10
syscall