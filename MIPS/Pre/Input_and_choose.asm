.data
array:	.space 100
outstr1: .asciiz "Please input size of list.\n"
outstr2: .asciiz "Please input list one by one.\n"
outstr3: .asciiz "Please input number you choose, start from 1.\n"
outstr4: .asciiz "Your chosen number is:\n"
teststr: .asciiz "Your input num is:\n"
.text
	la $a0, outstr1
	li $v0, 4
	syscall #print outstr1
	
	li $v0, 5
	syscall #read size and store in $s0
	move $s0, $v0
	###########################
	la $a0, teststr
	li $v0, 4
	syscall #print outstr1
	
	li $v0, 1
	move $a0, $s0
	syscall
	################################
	li $t0, 0 #mark var, from 0
	la $t2, array #mark first address of array
	for_1_begin:
		slt $t1, $t0, $s0
		beq $t1, $zero, for_1_end #end of for
		
		la $a0, outstr2
		li $v0, 4
		syscall #print outstr2
		
		li $v0, 5
		syscall
		move $t3, $v0 #read list, and store in $t3(temp)
		
		sw $t3, 0($t2) #save word to memory
		addiu $t2, $t2, 4 #move $t2 to next address
		
		addiu $t0, $t0, 1 #i++
		
		j for_1_begin
		
	for_1_end:
	la $a0, outstr3
	li $v0, 4
	syscall #print outstr3
	
	li $v0, 5
	syscall
	move $t3, $v0 #read choose pos, $t3 as temp
	
	
	li $t4, 4 #make 4
	mult $t4, $t3 #calculate address
	mflo $t3 #retrieve address
	la $t2, array
	addi $t2, $t2, -4
	add $t2, $t2, $t3
	
	la $a0, outstr4
	li $v0, 4
	syscall #print outstr4
	
	li $v0, 1
	lw $a0, 0($t2)
	syscall
	
	li $v0, 10
	syscall
	