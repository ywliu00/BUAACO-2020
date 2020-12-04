.text
ori $t0, $0, 2048

li $t1, 4 
li $t2, 100
li $t3, 400 #make 4, 100, 400

div $t0, $t1
mfhi $t4
bgtz $t4, not_leap_year #n%4!=0, not leap
nop

div $t0, $t2
mfhi $t4
blez $t4, not_leap_year #n%100==0, not leap
nop

leap_year:
li $a0, 1
li $v0, 1
j end_of_program
nop

not_leap_year:
div $t0, $t3
mfhi $t4
blez $t4, leap_year #n%400==0, leap
nop

li $a0, 0
li $v0, 1
j end_of_program
nop

end_of_program:
li $v0, 10
