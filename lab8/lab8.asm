	#############################################################################
	# Lab 8
	# Author: Ian Hawley
	# Description: Calculates  
	#############################################################################
	.data     	# Variables and data that is used in the program. Like the head in an html document.

FirstOutput:
	.asciiz "\nEnter an integer value > 1: max = "
ErrorPrompt:
	.asciiz "\n You MUST enter an integer > 1: max = "
Temp:
	.asciiz "\nfoo"
NewLine:
	.asciiz "\n"
Space:
	.asciiz " "
	.text     	#text body everything below this line is code.
ShowFirstOutput:
	li $v0, 4 	# Print the first output.
	la $a0, FirstOutput
	syscall
GetInput:
	li $v0, 5 	# Get Input
	syscall
	move $t0, $v0
CheckMax:
	li $v0, 1	# Check that max is not negative
	bgt $v0, $t0, ShowErrorPrompt
InitN:
	li $t1, 2	# Init N
NLessThanEqualToMax:
	bgt $t1, $t0, End 
InitF:
	li $t2, 2	# Init F
FSquaredLessThanN:
	mul $a0, $t2, $t2
	bgt $a0, $t1, FLessThanN
FModZero:
	rem $a0, $t1, $t2
	li $v0, 0
	bne $a0, $v0, IncrementF
LoadFWithN:
	move $t2, $t1
IncrementF:
	addi $t2, $t2, 1
	j FSquaredLessThanN

FLessThanN:
	bgt $t2, $t1, IncrementN
OutputN:
	li $v0, 1
	move $a0, $t1
	syscall
OutputSpace:
	li $v0, 4
	la $a0, Space
	syscall
IncrementN:
	addi $t1, $t1, 1
	j NLessThanEqualToMax

End:
	li $v0, 4
	la $a0, NewLine
	syscall
Terminate:
	li $v0, 10	# Exit the program.
	syscall

ShowErrorPrompt:
	li $v0, 4	# Show Error Prompt if max is less than 1
	la $a0, ErrorPrompt
	syscall
	j GetInput 


