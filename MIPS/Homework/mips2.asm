.data
SRC: .space  400
DEST: .space  400
.text
li $t0, 100    #loop mark
la $t1, SRC    #address1
la $t2, DEST   #address2
load_and_move:
	lw $t3, 0($t1)
	sw $t3, 0($t2)
	addi $t1, $t1, 4  #next address1
	addi $t2, $t2, 4  #next address2
	addi $t0, $t0, -1 #loop mark -1
	bnez $t0, load_and_move #jump back to loop
	nop

