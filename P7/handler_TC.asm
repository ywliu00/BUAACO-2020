.ktext 0x00004180
lw $1, 0x7f00($0)
srl $1, $1, 1
sll $1, $1, 1
addiu $1, $1, 1
sw $1, 0x7f00($0)
addiu $6, $6, 1
eret 