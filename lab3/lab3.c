/***********************************************************************
 * Lab 3
 * Author:      Ian Hawley
 * Description: calculates sum of two numbers by adding in binary
 * Known bugs:  write your precise yet concise bug description(s) here
 ***********************************************************************/
#include <stdio.h>
#define NUM_BITS 16

int main(void)
{
  short unsigned int n1, n2;       // user inputs
  int b1[NUM_BITS], b2[NUM_BITS];  // binary representation of inputs
  short unsigned sum;              // sum of n1 and n2
  int b[NUM_BITS];                 // binary representation of sum
  int carry = 0;                   // carry-in to each column in the addition
  int power = 1;                   // some power of two

  printf("Enter an integer between 0 and 65535: n1 = ");
  scanf(" %hu", &n1);

  printf("Enter an integer between 0 and 65535: n2 = ");
  scanf(" %hu", &n2);
  // a single FOR loop that performs ALL binary and decimal computations
  for(int i = 0; i < NUM_BITS; i++)
  {
    b1[i] = n1 % 2;
    b2[i] = n2 % 2;
    n1 /= 2;
    n2 /= 2;
    b[i] = (b1[i] + b2[i] + carry) % 2;
    carry = (b1[i] + b2[i] + carry) / 2;
    sum = sum + b[i] * power;
    power *= 2;
  }//  computation loop
  printf("\n   ");   
  for(int i = NUM_BITS - 1; i >= 0; i--) {
    printf("%d", b1[i]);
  }
  printf("\n");
  printf("+  ");
  for(int i = NUM_BITS - 1; i >= 0; i--) {
    printf("%d", b2[i]);
  }
  printf("\n   ----------------\n");
  printf("=  ");
  for(int i = NUM_BITS - 1; i >= 0; i--) {
    printf("%d", b[i]);
  }
  printf(" = %d\n", sum);
  /* your code goes above this line; do NOT modify the code below */

  return 0;
}// main