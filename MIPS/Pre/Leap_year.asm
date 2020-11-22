.text
li $v0, 5
syscall
move $t0, $v0 #read n

li $t1, 4 
li $t2, 100
li $t3, 400 #make 4, 100, 400

div $t0, $t1
mfhi $t4
bgtz $t4, not_leap_year #n%4!=0, not leap

div $t0, $t2
mfhi $t4
blez $t4, not_leap_year #n%100==0, not leap

leap_year:
li $a0, 1
li $v0, 1
syscall
j end_of_program

not_leap_year:
div $t0, $t3
mfhi $t4
blez $t4, leap_year #n%400==0, leap

li $a0, 0
li $v0, 1
syscall
j end_of_program

end_of_program:
li $v0, 10
syscall