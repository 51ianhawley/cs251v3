/*   
   1) What is the input buffer?
      The input buffer is the area in memory where characters typed by the
      user are stored.
        +  The input buffer is empty at first.
        +  The characters typed in by the user get stored into the input 
           buffer only after the user presses the ENTER key (this will also add
           a newline character '\n' as an extra character in the buffer after
           the actual input)
   2) Each call to the getchar() function returns the next unread character 
      in the input buffer and effectively removes that character from the 
      buffer.
      If the input buffer is empty, getchar() will wait until some character 
      appears in the input buffer.
   3) Study the following C code sample and the comments explaining how it
      behaves and how the input buffer gets modified along the way:
               
                                      // the input buffer is empty at first:
                                      //
                                      //         +----+----+----+----+----+
                                      //         |    |    |    |    |    | ...
                                      //         +----+----+----+----+----+
	char c1, c2, c3;
        printf("Type something: ");   // this line appears on the console
	c1 = getchar();               // the program stops until the user types
                                      // some characters followed by ENTER
                                      // Assume the user types in:
                                      //       hi<ENTER>
                                      // the input buffer now contains:
                                                 +----+----+----+----+----+
                                                 |'h' |'i' |'\n'|    |    | ...
                                                 +----+----+----+----+----+
                                      // now, getchar() which was still waiting
                                      // finally returns and c1 gets the 
                                      // value 'h' and the buffer now contains:
                                                      +----+----+----+----+
                                                      |'i' |'\n'|    |    | ...
                                                      +----+----+----+----+
	c2 = getchar();
                                      // right away (no wait here), c2 gets 
                                      // the value 'i' and 
                                      // the buffer now contains:
                                                           +----+----+----+
                                                           |'\n'|    |    | ...
                                                           +----+----+----+
	c3 = getchar();
                                 
                                      // right away (no wait here), c3 gets 
                                      // the value '\n' and 
                                      // the buffer now contains:
                                                                +----+----+
                                                                |    |    | ...
                                                                +----+----+
	c4 = getchar();               // again, the program stops because
                                      // getchar() waits until the user types 
                                      // in some characters followed by ENTER
        Now, make sure you undertand how the C program below behaves.
	Test it with user inputs of different lengths, such as:
              1)   hi<ENTER>
              2)   h<ENTER>
              3)   <ENTER>
 */

int main(void)
{
  char c;

  printf("Type something: ");
  /*   
   1) What is the input buffer?
      The input buffer is the area in memory where characters typed by the
      user are stored.
        +  The input buffer is empty at first.
        +  The characters typed in by the user get stored into the input 
           buffer only after the user presses the ENTER key (this will also add
           a newline character '\n' as an extra character in the buffer after
           the actual input)
   2) Each call to the getchar() function returns the next unread character 
      in the input buffer and effectively removes that character from the 
      buffer.
      If the input buffer is empty, getchar() will wait until some character 
      appears in the input buffer.
   3) Study the following C code sample and the comments explaining how it
      behaves and how the input buffer gets modified along the way:
               
                                      // the input buffer is empty at first:
                                      //
                                      //         +----+----+----+----+----+
                                      //         |    |    |    |    |    | ...
                                      //         +----+----+----+----+----+
	char c1, c2, c3;
        printf("Type something: ");   // this line appears on the console
	c1 = getchar();               // the program stops until the user types
                                      // some characters followed by ENTER
                                      // Assume the user types in:
                                      //       hi<ENTER>
                                      // the input buffer now contains:
                                                 +----+----+----+----+----+
                                                 |'h' |'i' |'\n'|    |    | ...
                                                 +----+----+----+----+----+
                                      // now, getchar() which was still waiting
                                      // finally returns and c1 gets the 
                                      // value 'h' and the buffer now contains:
                                                      +----+----+----+----+
                                                      |'i' |'\n'|    |    | ...
                                                      +----+----+----+----+
	c2 = getchar();
                                      // right away (no wait here), c2 gets 
                                      // the value 'i' and 
                                      // the buffer now contains:
                                                           +----+----+----+
                                                           |'\n'|    |    | ...
                                                           +----+----+----+
	c3 = getchar();
                                 
                                      // right away (no wait here), c3 gets 
                                      // the value '\n' and 
                                      // the buffer now contains:
                                                                +----+----+
                                                                |    |    | ...
                                                                +----+----+
	c4 = getchar();               // again, the program stops because
                                      // getchar() waits until the user types 
                                      // in some characters followed by ENTER
        Now, make sure you undertand how the C program below behaves.
	Test it with user inputs of different lengths, such as:
              1)   hi<ENTER>
              2)   h<ENTER>
              3)   <ENTER>
 */

int main(void)
{
  char c;

  printf("Type something: ");
  c = getchar();
  while ( c != '\n' )
  {
     printf("You typed: '%c'\n", c);
     c = getchar();
  }

  return(0);
}
  return(0);
}