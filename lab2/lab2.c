/***********************************************************************
 * Lab 2
 * Author:      Ian Hawley
 * Description: calculates total bit clearing operations between two numbers
 * Known bugs:  your precise yet concise bug description(s) go(es) here
 ***********************************************************************/

#include <stdio.h>             // needed for scanf and printf

#define NUM_BITS 16            // size of integer-representation scheme
#define TWO 2                  // constant 2

int main(void)
{
  short unsigned int min, max; // the two numbers to be entered by the user
  unsigned int count;          // the number of bit-clearing operations
  unsigned short int bit, n;   // loop indices
  unsigned short int num;      // current number in the counting process
  unsigned short int numPlus1; // next number in the counting process

  printf("Enter an integer between 0 and 65535:        min = ");
  scanf(" %hu", &min);

  printf("Enter an integer between 0 and 65535: min <= max = ");
  scanf(" %hu", &max);
  count = 0;
  for(n = min;  n < max; n++) {
    num = n;
    numPlus1 = n + 1;
    for(bit = 0; bit <= NUM_BITS; bit++) {
      if (num % 2 == 1) {
        if(numPlus1 % 2 == 0) {
          count += 1;
        }
        num = num / 2;
        numPlus1 = numPlus1 / 2;
      }
    }
  }
  /* For full credit, do NOT modify the code below this point */

  printf("total number of bit-clearing operations: %d\n", count);

  return 0;
}// main
