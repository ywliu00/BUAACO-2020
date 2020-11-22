.data
arr1: .space 256
arr2: .space 256
res: .space 256
str_space: .asciiz " "
str_enter: .asciiz "\n"
.text
li $v0, 5
syscall
move $t0, $v0  #Read in size n
############ Read Arr1 ###################
la $t1, arr1
mult $t0, $t0
mflo $t2  #Set loop variable to n^2
read_arr1:
	li $v0, 5
	syscall
	sw $v0, 0($t1)   #save number to memory
	addi $t1, $t1, 4 #move to next addr
	subi $t2, $t2, 1 #loop var -1
	bnez $t2, read_arr1
############ Read Arr2 ###################
la $t1, arr2
mult $t0, $t0
mflo $t2  #Set loop variable to n^2
read_arr2:
	li $v0, 5
	syscall
	sw $v0, 0($t1)   #save number to memory
	addi $t1, $t1, 4 #move to next addr
	subi $t2, $t2, 1 #loop var -1
	bnez $t2, read_arr2
############ Process ###################
move $t1, $t0 # t0: total rows, t1:total columns
sll $t4, $t1, 2 #t4: how many bytes in one row, = t1 << 2
move $s0, $zero # row counter
la $t2, res #result arr
la $s5, arr1
la $s6, arr2
calculate_loop:
	move $s1, $zero # column counter
	one_row:
		mult $s0, $t4 # row counter * num per row
		mflo $s2 # arr1 row start addr(offset)
		add $s2, $s5, $s2 #arr1 true addr
		sll $s3, $s1, 2 #arr2 column start addr(offset)
		add $s3, $s3, $s6 #arr2 true addr
		move $s4, $zero #sum set to 0
		move $t5, $t1 #loop var
		cal_num:
			lw $t6, 0($s2)
			lw $t7, 0($s3)
			mult $t6, $t7
			mflo $t6
			add $s4, $s4, $t6 #s4+=result
			addi $s2, $s2, 4
			add $s3, $s3, $t4 #new addr
			addi $t5, $t5, -1 #t5--
			bnez $t5, cal_num #if(t5>0) jump to cal_num
		sw $s4, 0($t2)
		addi $t2, $t2, 4 #next num to calculate addr
		addi $s1, $s1, 1 #column++
		bne $s1, $t1, one_row
	addi $s0, $s0, 1 #row++
	bne $s0, $t0, calculate_loop
######################Output#########################
move $s0, $zero
la $t2, res
Out_row:
	move $s1, $zero
	Out_col:
		lw $a0, 0($t2)
		li $v0, 1
		syscall  #print a num
		li $v0, 4
		la $a0, str_space
		syscall #print space
		addi $s1, $s1, 1
		addi $t2, $t2, 4
		bne $s1, $t1, Out_col
	li $v0, 4
	la $a0, str_enter
	syscall #print space
	addi $s0, $s0, 1
	bne $s0, $t0, Out_row
li $v0, 10
syscall