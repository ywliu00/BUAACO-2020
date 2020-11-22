.data
symbol: .space 28
array: .space 28
str_spa: .asciiz " "
str_ent: .asciiz "\n"
.text
li $v0, 5
syscall
add $s0, $v0, $zero # Read number n
add $a0, $zero, $zero # parameter for subfunc, 0
jal FullArray
li $v0, 10
syscall
#################### End of main func #####################3
FullArray:
	move $t0, $a0
	bge $t0, $s0, If_1   # t0: index, $s0: n
	move $t1, $zero      # t1: 循环变量 i ,set to 0
	Loop_2:
		la $t2, symbol
		sll $t5, $t1, 2
		add $t2, $t2, $t5 #symbol[i] new addr
		bge $t1, $s0, Return # for(i=0;i<n;i++)
		If_2:
			lw $t3, 0($t2) # 提取 symbol[i], t3每次临时读取，可不保存
			bnez $t3, End_if_2 #if(symbol[i])!=0 jump to endif
			la $t4, array    #t4在每次调用时临时生成，可以不保存
			sll $t5, $t0, 2  #t5是临时变量，可以不保存
			add $t4, $t4, $t5 # array[index]的真实地址
			addi $t5, $t1, 1
			sw $t5, 0($t4) #array[index] = i + 1
			li $t5, 1
			sw $t5, 0($t2) #symbol[i] = 1
			########### 准备进入递归 ############
			sw $ra, 0($sp) # 原返回位置压栈
			subi $sp, $sp, 4 # 栈顶下移
			sw $t2, 0($sp) # addr of symbol[i] in stack
			subi $sp, $sp, 4 # 栈顶下移
			sw $t1, 0($sp) # i in stack
			subi $sp, $sp, 4 # 栈顶下移
			sw $t0, 0($sp) # t0 in stack
			subi $sp, $sp, 4 # 栈顶下移
			
			addi $a0, $t0, 1 # index+1
			jal FullArray # FullArray(index+1)
			
			addi $sp, $sp, 4 # 栈顶上移
			lw $t0, 0($sp) # t0 pop stack
			addi $sp, $sp, 4 # 栈顶上移
			lw $t1, 0($sp) # i pop stack
			addi $sp, $sp, 4 # 栈顶上移
			lw $t2, 0($sp) # addr of symbol[i] pop stack
			addi $sp, $sp, 4 # 栈顶上移
			lw $ra, 0($sp) # 原返回位置出栈
			############# 递归结束 ##############
			sw $zero, 0($t2) #symbol[i] = 0
		End_if_2:
		addi $t1, $t1, 1 #i++
		j Loop_2
	Return:
	jr $ra
If_1:
	move $t1, $zero
	la $t2, array
	Loop_1:
		lw $a0, 0($t2)
		li $v0, 1
		syscall
		la $a0, str_spa
		li $v0, 4
		syscall #printf("%d ",array[i])
		addi $t1, $t1, 1
		addi $t2, $t2, 4
		blt $t1, $s0, Loop_1
	la $a0, str_ent
	li $v0, 4
	syscall #printf("\n")
	j Return