.data
arr1: .space 400
arr2: .space 324
arr3: .space 400
str_spa: .asciiz " "
str_ent: .asciiz "\n"
.text
################# Read size ###################
li $v0, 5
syscall
move $s0, $v0 #m1
li $v0, 5
syscall
move $s1, $v0 #n1
li $v0, 5
syscall
move $s2, $v0 #m2
li $v0, 5
syscall
move $s3, $v0 #n2
################## Read data ##################
la $s4, arr1
la $s5, arr2 #start addr of two array
mult $s0, $s1
mflo $t0      # Arr1: 
move $t1, $s4 # Size: t0, True addr: t1
Read_Arr1:
	li $v0, 5
	syscall
	sw $v0, 0($t1)
	addi $t1, $t1, 4
	subi $t0, $t0, 1
	bgtz $t0, Read_Arr1
mult $s2, $s3
mflo $t0      # Arr2: 
move $t1, $s5 # Size: t0, True addr: t1
Read_Arr2:
	li $v0, 5
	syscall
	sw $v0, 0($t1)
	addi $t1, $t1, 4
	subi $t0, $t0, 1
	bgtz $t0, Read_Arr2
################## Process ###################
sub $t0, $s0, $s2
addi $t0, $t0, 1 # t0: loop size (row)
sub $t2, $s1, $s3
sll $t2, $t2, 2 #Arr1每次跳一行剩余元素的步长
sll $t3, $s3, 2 #Arr2每次跳一行的步长(真实地址)
la $s7, arr3 #卷积结果存储地址
loop_row:
	sub $t1, $s1, $s3
	addi $t1, $t1, 1  # t1: loop size(column)
	loop_column: # s4:当前处理元素的真实地址
		move $t4, $zero  # 卷积行循环临时变量，从0开始
		move $t5, $zero  #sum，初值为0
		la $s5, arr2  # 卷积数组Arr2初地址
		move $s6, $s4 #s6存储当前卷积区域开始地址
		cal_row:
			move $t8, $zero # 卷积列循环临时变量，从0开始
			cal_column:
				lw $t6, 0($s6)
				lw $t7, 0($s5)
				mult $t6, $t7
				mflo $t6
				add $t5, $t5, $t6 #calculate
				addi $s6, $s6, 4
				addi $s5, $s5, 4 #arr1, arr2 move to next addr
				addi $t8, $t8, 1
				blt $t8, $s3, cal_column
			add $s6, $s6, $t2 #s6跳到下一行开始处
			addi $t4, $t4, 1
			blt $t4, $s2, cal_row
		addi $s4, $s4, 4 #处理下一个元素
		sw $t5, 0($s7)
		addi $s7, $s7, 4 #保存结果并s更新下一个地址
		subi $t1, $t1, 1
		bgtz $t1, loop_column
	sll $t5, $s3, 2
	add $s4, $s4, $t5
	subi $s4, $s4, 4#s4跳到下一行开始处
	subi $t0, $t0, 1
	bgtz $t0, loop_row
####################### Output #######################
sub $t0, $s0, $s2
addi $t0, $t0, 1 # 卷积区域行数
sub $t1, $s1, $s3
addi $t1, $t1, 1 # 卷积区域列数
la $s0, arr3 #卷积区域开始地址
move $t2, $zero
Print_row:
	move $t3, $zero
	Print_col:
		lw $a0, 0($s0)
		li $v0, 1
		syscall
		la $a0, str_spa
		li $v0, 4
		syscall
		addi $s0, $s0, 4
		addi $t3, $t3, 1
		blt $t3, $t1, Print_col
	la $a0, str_ent
	li $v0, 4
	syscall
	addi $t2, $t2, 1
	blt $t2, $t0, Print_row
li $v0, 10
syscall