.ktext 0x00004180
#addi $20, $0, 14
mfc0 $1, $14
ori $2, $0, 0x4ffc
subu $2, $1, $2
bgez $2, start1
nop
addiu $1, $1, 4
end1:
mtc0 $1, $14
eret
start1:
ori $1, $0, 0x301c
j end1
nop