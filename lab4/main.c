/*********************************************************************
 * Lab 4
 * Description: Main (or driver) program for Lab 4
 * Author:      David Furcy
 *********************************************************************/

#include <stdio.h>
#include "lab4.h"
 
int main(void)
{
  char input[2 * NUM_DIGITS + 2]; // string entered by the user
  int inputLength;                // number of characters entered by the user
  char n1[NUM_DIGITS + 1];        // first hex number
  char n2[NUM_DIGITS + 1];        // second hex number  

  printf("Enter two hex numbers separated by a question mark: ");
  inputLength = getInputString(input);
  parseNumbers(input, n1, n2);

  int compResult = compare(n1, n2);
  if (compResult < 0)
    printf("%s < %s\n", n1, n2);
  else if (compResult == 0)
    printf("%s == %s\n", n1, n2);
  else
    printf("%s > %s\n", n1, n2);
  return 0;
}// main
