ori $24, $zero, 0x3000  #text base addr
ori $31, $0, 22  #jump to NopEnd
sll $31, $31, 2
addu $31, $31, $24
ori $2, $0, 4
ori $3, $0, 0x100
ori $4, $0, 1
ori $5, $5, 0
Loop:
	beq $3, $zero, EndLoop
	ori $16, $0, 17  #jump to jr_test2
	sll $16, $16, 2
	addu $16, $16, $24
	addu $5, $5, $4
	subu $3, $3, $2
	jal Loop
jr_test1:
	addu $9, $9, $4
	jr $16
jr_test2:
	addu $10, $10, $4
	jr $ra
EndLoop:
	addu $7, $7, $4
	jal jr_test1
addu $8, $8, $4
NopEnd:
nop
