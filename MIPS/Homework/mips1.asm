.data
example100: .word 101
.text
li $t0, 100    #loop mark
move $t1, $zero    #sum
la $t2, example100 #address
read_and_add:
	#li $v0, 5
	#syscall
	#move $t3, $v0
	#sw $t3, 0($t2)  #save to memory
	lw $t3, 0($t2)
	addi $t2, $t2, 4  #next address
	add $t1, $t1, $t3 #sum up
	addi $t0, $t0, -1 #loop mark -1
	bnez $t0, read_and_add #jump back to loop
	nop
sw $t1, 0($t2)
