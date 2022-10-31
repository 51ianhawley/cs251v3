/*********************************************************************
 * Lab 6
 * Author:       Ian Hawley
 * Description:  takes in two numbers and checks to validate perfect numbers
 * Known bugs:   Fill in (in case of known bugs) or delete
 *********************************************************************/

#include "stdio.h"   // needed for printf and scanf
#include "stdlib.h"  // needed for dynamic memory allocation
/* send to the console the contents of the array whose first and last elements
   are referenced by the two arguments, respectively.
   All array elements must appear on one line. Each printed element must be
   followed by one space. The printed line must end with one newline character.
   
   Implementation requirements:
   + Do NOT declare any variables.
   + The body of this function must contain exactly one WHILE loop followed by 
     one printf statement.
   + The body of the loop must contain exactly one statement.
 */
void printDivisors(int *first, int *last)
{
  // to be completed
  while (first < last)
  {
    printf("%d ", *first);
    first++;
  }
  printf("\n");

}// printDivisors

/* return the sum of the integers in the input array whose first and last 
   elements are referenced by the two arguments, respectively.
   
   Implementation requirements:
   + Do NOT modify the given code.
   + Do NOT declare any new variables.
   + You may only add one WHILE loop whose body contains exactly one assignment
     statement (and nothing else)
 */
int getSumOfDivisors(int *first, int *last)
{
  int sum = 0;

  /* To be complete:
       write your WHILE loop below 
  */
  while (first < last)
  {
    sum = sum + *first;
    first++;
  }
  

  return sum;
}// getSumOfDivisors
/* To be complete:
     Complete the main function below
 */
int main(void)
{
  int n;             // positive integer chosen by the user
  int d;             // possible divisor of n (between 1 and n inclusive)
  int size;          // size of the array of divisors
  int sumOfDivisors; // sum of all the divisors of n
  
  /* + Do not modify the main code above this line
     + Do NOT declare any new variables (except a below) 
  */
  
  /* To be completed: 
       Declare and dynamically allocate space for a one-int array called a 
  */
  int *a;
  
  a = (int *) malloc(sizeof(int)); // Create the array in memory by allocating a register in memory.
  

  /* To be completed:
       Prompt the user for, and then input, n
  */
  printf("Enter a positive integer: ");
  scanf("%d", &n); 
  

  /* To be completed:
       Initialize variables as needed/possible 
  */
  if(a == NULL) {
     printf("This computer does not have enough memory.");
     return 1;
  }
  size = 1;
  a[0] = 1;
  
  /* To be completed: 
       compute the divisors of n, storing each new one in a 
  */
  for (d = 2; d <= n; d++)
  {
    if( ( n % d) == 0 ) {
      
      a = (int*) realloc(a, (size + 1) * sizeof(int));
      if(a == NULL) {
        printf("This computer does not have enough memory.");
        return 1;
      }
      a[size] = d;
      size++;
      
      
    }
  }
  
  /* To be completed:
       print the list of divisors of n 
  */
  printDivisors(&a[0], &a[size]);
   
  /* To be completed:
       initialize the sumOfDivisors variable
   */
  sumOfDivisors = getSumOfDivisors(&a[0], &a[size]);

  /* To be completed:
       Print the status of n as a (possibly) multiply perfect number
   */
  if( (sumOfDivisors % n) == 0 ) {
    printf("%d is a %d-perfect number.\n", n, sumOfDivisors / n);
  }

  /* To be completed:
       clean up
  */
  free(a);
  return 0;
}// main