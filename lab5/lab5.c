/*********************************************************************
 * Lab 5
 * Author:       Ian Hawley
 * Description:  Converts string of hex digits to its decimal value.
 *********************************************************************/

#include "stdio.h"   // needed for printf and scanf

/* return the i^{th} bit of n for i in [0..7]
   where bit(0,n) is the least significant bit of n
     and bit(7,n) is the most significant bit of n
 */
char bit(int i, char n)
{
  return (n & (1 << i)) >> i;
}// bit

/* given that n is either a digit or an uppercase letter,
   return 1 if n is a digit
      and 0 otherwise
*/
int isDigit(char n)
{
  return !bit(6, n);
}// isDigit

/* given that n is a decimal digit,
   return the bit pattern that represents the digit's decimal value
   for example:  '0' --> 00000000
                 '9' --> 00001001
*/
char digitToBinary(char n)
{
  return n & (8 | 4 | 2 | 1);
}// digitToBinary

/* given that n is an uppercase letter in ['A'..'F'],
   return the bit pattern that represents the letter's decimal value in the
   base-16 representation scheme (e.g., the value of the letter 'A' is 10)

   for example:  'A' --> 00001010
                 'F' --> 00001111
*/
char letterToBinary(char n)
{
  return 8 |
  bit(2, n) << 2 |
  ( bit(0, n) & bit(1, n) ) << 2 |
  ( ( bit(0, n) ^ bit(1, n) ) << 1 ) |
  !bit(0, n);

}// letterToBinary

/* given a string of characters encoding a valid number in base 16,
   return the corresponding decimal value
 */
int hexToDecimal(char s[])
{
  /* To be completed below, as specified: do NOT modify the rest of the code */

  int result = 0;
  for(int i = 0; s[i] != '\0'; i++) {
    result = result << 4 |
    ( isDigit(s[i]) ?
    digitToBinary(s[i]) :
    letterToBinary(s[i]) );
  }

  return result;
}// hexToDecimal
/**********************************************************************
  Do not modify the code below this line
 **********************************************************************/

#ifndef GRADING

/* this is the main function that you will use when compiling your program
   with:
                gcc -o lab5 lab5.c
 */
int main(void)
{
  char input[9];               // string = n-digit hex number with n in [1..8]
  int value;                   // decimal value of input string
  
                               // prompt user
  printf("Enter a base-16 number with up to 8 digits: ");  

  scanf("%[^\n]%*c", input);   // accept user's input string

  value = hexToDecimal(input); // perform the base-16 to base-10 conversion
  
                               // display the conversion
  printf("\"%s\" --> %d = 0x%08X\n", input, value, value);
  
  return 0;  
}// main

#else

/* this is the main function (not provided) that I will use when testing your 
   submission for grading purposes
 */
#include "test.c"

#endif
