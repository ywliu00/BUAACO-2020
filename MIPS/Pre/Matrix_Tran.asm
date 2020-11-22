.data
array: .space 30000
space: .asciiz " "
enter: .asciiz "\n"
.text
li $v0, 5
syscall
move $s0, $v0 #read n

li $v0, 5
syscall
move $s1, $v0 #read m

la $t3, array
la $t4, array
li $t0, 0
for_n_start:
	beq $t0, $s0, for_n_end
	li $t1, 0
	addiu $t0, $t0, 1
	for_m_start:
		beq $t1, $s1, for_m_end
		
		li $v0, 5
		syscall
		move $t2, $v0  #read array num
		addiu $t1, $t1, 1
		beqz $t2, for_m_start #if equals 0, jump to next turn
		
		sw $t0, 0($t3) #save line(hang)
		sw $t1, 4($t3) #save line(lie)
		sw $t2, 8($t3) #save num
		addiu $t3, $t3, 12 #address jump
		
		j for_m_start
	
	for_m_end:
	j for_n_start
for_n_end:
	beq $t3, $t4, end_of_program
	addi $t3, $t3, -12
	
	lw $a0, 0($t3)
	li $v0, 1 #print line(hang) with space
	syscall
	li $v0, 4
	la $a0, space
	syscall 
	
	lw $a0, 4($t3)
	li $v0, 1 #print line(lie) with space
	syscall
	li $v0, 4
	la $a0, space
	syscall 
	
	lw $a0, 8($t3)
	li $v0, 1 #print num with enter
	syscall
	li $v0, 4
	la $a0, enter
	syscall 
	
	j for_n_end
	
end_of_program:
	li $v0, 10
	syscall