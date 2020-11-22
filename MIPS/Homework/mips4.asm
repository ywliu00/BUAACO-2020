.globl main
.data
fibnum: .space 400

.text
FIB:
	add $t0, $a0, -2 #load N-2
	add $t1, $a1, $zero #load &array
	li $t3, 1
	li $t4, 1
	sw $t3, 0($t1)
	addi $t1, $t1, 4
	sw $t3, 0($t1)
	addi $t1, $t1, 4 #save first 2 fib num

	loop:
		blez $t0, end
		add $t5, $t3, $t4 #calculate next num
		move $t3, $t4
		move $t4, $t5 #keep list
		sw $t4, 0($t1) #save num
		addi $t1, $t1, 4 #next addr
		addi $t0, $t0, -1 #rest to cal -1
		bgtz $t0, loop
	end:
	jr $ra
main:
	li $a0, 100
	la $a1, fibnum
	jal FIB
	li $v0, 10
	syscall