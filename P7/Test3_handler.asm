.ktext 0x00004180
#lw $1, 0x7f00($0)
#srl $1, $1, 1
#sll $1, $1, 1
#addiu $1, $1, 1
#sw $1, 0x7f00($0)
#addiu $6, $6, 1
mfc0 $1, $13
andi $26, $1, 0x400
bgtz $26, If0
nop
IfRet0:
andi $26, $1, 0x800
bgtz $26, If1
nop
IfRet1:
andi $26, $1, 0x1000
bgtz $26, If2
nop
#以上是外部中断处理内容
#接下来处理内部异常
mfc0 $1, $14
addiu $1, $1, 8
mtc0 $1, $14
#直接跳过
IfRet2:
eret 

If0:
addiu $20, $20, 1
j IfRet2
nop
If1:
addiu $21, $21, 1
j IfRet2
nop
If2:
addiu $22, $22, 1
j IfRet2
nop
