/***********************************************************************
 * Lab 1
 * Author:      Ian Hawley
 * Description: your precise yet concise program description goes here
 * Known bugs:  your precise yet concise bug  description(s) go(es) here
 ***********************************************************************/

#include <stdio.h>           //  needed for scanf and printf

#define TWO 2
#define NUM_BITS 8

int main(void)
{
  short unsigned int n1, n2; // the two numbers to be compared
  short unsigned int count;  // the number of bits that n1 and n2 share

  printf("Enter an integer between 0 and 255: n1 = ");
  scanf(" %hu", &n1);

  printf("Enter an integer between 0 and 255: n2 = ");
  scanf(" %hu", &n2);

  /* Write your code below. Do NOT modify anything between the top comment
     block and this comment block. */
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  count = count + 1 - ( ( n1 % 2 ) + (n2 % 2) )% 2;
  n1 = n1 / 2;
  n2 = n2 / 2;
  /*For full credit, your code below MUST meet ALL of the requirements listed
     in the lab handout.
   */



  /* For full credit, do NOT modify the code below this point */

  printf("n1 and n2 have %d bit(s) in common\n", count);

  return 0;
}// main

