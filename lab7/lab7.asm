addi $t1, $zero, 1
addi $t2, $zero, 1
addi $t3, $zero, 2
add $t4, $t1, $t2
add $t4, $t4, $t3
add $t5, $t2, $t3
add $t5, $t5, $t4
add $t6, $t4, $t3
add $t6, $t6, $t5
add $t7, $t4, $t5
add $t7, $t7, $t6
addi $v0, $v0, 10
syscall
