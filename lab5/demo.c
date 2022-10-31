#include <stdio.h> 
int main(void)
{
  char input1[5];   // first buffer  * these buffers are stored contiguously *
  char input2[5];   // second buffer * in memory (in this or reverse order   *
  char input3[5];   // third buffer  * depending on the compiler/platform)   *
  printf("input1: ");      
  gets(input1);                /* gets() reads an entire string (plus '\0')  */
                               /* into the buffer given as argument.         */
  printf("input2: ");          /* A buffer overflows occurs when the string  */
  gets(input2);                /* that is read in is longer than the buffer. */
                               /* Then the extra characters overflow into    */
  printf("input3: ");          /* the memory locations following the buffer. */
  gets(input3);
  printf("You typed in:\n");
  printf("input1 = %s\n", input1 );
  printf("input2 = %s\n", input2 );
  printf("input3 = %s\n", input3 );  /* what if the user input is longer than
                                        4 characters? remember the extra '\0' */
  return 0;
}