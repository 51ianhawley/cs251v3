	####################
	#Lab7
	# author: Ian Hawley
	####################
	.data
x: 
	.word 7
	
	.text
	lw $t0, x
	addi $t0, $t0, 1
	sw $t0, x
	li $v0, 10
	syscall