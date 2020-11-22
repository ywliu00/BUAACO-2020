.text
main:
	li $a0, 10086
	jal ABS
	li $v0, 1
	syscall
	
	li $a0, -10010
	jal ABS
	li $v0, 1
	syscall
	
	li $v0, 10
	syscall
ABS:
	move $t0, $a0
	bgez $t0, copy
	sub $t0, $0, $t0
	copy:
	move $a0, $t0
	jr $ra
	
