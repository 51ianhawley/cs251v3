#Memory Layout example
	.data
array:
	.byte 	'C', 'S', ' ', '2', '5', '1'
string:
	.ascii 	"CS 251"
b:
	.byte 	127
c:
	.byte	'a'
i:
	.word	255
address:
	.word 0xABCDEF98
var2:
	.word 19
	.text
	

	li $v0, 10

	syscall		
	
