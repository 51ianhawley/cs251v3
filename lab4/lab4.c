/*********************************************************************
 * Lab 4
 * Author:       Ian Hawley
 * Description:  Compares tow hex numbers 
 * Known bugs:   I was unable to get the print working.
 * I started this lab to late. 
 * Lesson Learned.
 *********************************************************************/

#include <stdio.h>
#include "lab4.h"
/* Wait for the user to enter a string of characters terminated by a newline
   character and store (up to) the first (2 * NUM_DIGITS + 1) characters
   entered (NOT including the newline character) in the input array as a
   null-terminated string. You can assume that the argument is large enough to
   store (2 * NUM_DIGITS + 2) characters.
   Return the length of the input string, while the latter is stored in
   the argument upon return.
   Example:  input: a (big-enough but empty) array
             the user types in: 9B?01A8<ENTER or RETURN>
             the function returns the integer 7 and the 8-character array
                 (i.e., the 7-character, null-terminated string):
                    ['9','B','?','0','1','A','8','\0']
                 is stored in the argument
 */
int getInputString(char input[])
{
  char c;
  int length = 0;
  while ( c != '\n' )
  {
     
    c = getchar();
    input[length] = c;
    length++;
  }
  input[length] = '\0';
  return length;
  
  
}// getInputString

/* Given:
   + an input string of the form <n1>?<n2>\0 in which each one of <n1> and <n2>
     is an hex string whose length is between 1 and NUM_DIGITS, and
   + two empty arrays each one of length exactly equal to NUM_DIGITS + 1,
   store in n1 and n2 the NUM_DIGITS-long hex representation of the
   non-negative integers <n1> and <n2>, respectively.

   You MUST assume that the first argument always has the correct format (i.e.,
   your code may NOT do any error-checking on this input).

   Example:  input:  9B?01A8\0
                     (with NUM_DIGITS equal to 8 in this example)
             output: n1 = 0000009B\0
                     n2 = 000001A8\0
 */
void parseNumbers(char input[], char n1[], char n2[])
{
  int i = 0;
  int j = 0;
  while(input[i] != '?'){
    n1[i] = input[i]; 
    i++;
  }
  n1[i + 1]= '\0';
  j = 0;
  j = i + 1;
  while (input[j]!= '\0')
  {
    n2[j] = input[j];
    j++;
  }
  n2[j] = '\0';
  // Need to add the leading zeros.
}// parseNumbers

/* Given two non-negative hex numbers n1 and n2 of length NUM_DIGITS, return:
       1  if n1 >  n2
       0  if n1 == n2
      -1  if n1 <  n2
   Example:  input: n1 = 0000009B\0
                    n2 = 000001A7\0
                    (with NUM_DIGITS equal to 8 in this example)
 */
int compare(char n1[], char n2[])
{
  for(int i = NUM_DIGITS - 1; i >= 0; i--) {
    if(n1[i] > n2[i]) {
      return 1;
    }
    if(n1[i] == n2[i]) {
      return 0;
    }
    if(n1[i] < n2[i]) {
      return -1;
    }
  }
  

  return -2;
}// compar