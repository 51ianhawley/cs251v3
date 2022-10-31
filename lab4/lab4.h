/*********************************************************************
 * Lab 4
 * Description: header file for Lab 4
 * Author:      David Furcy
 *********************************************************************/

#ifndef LAB4
#define LAB4

static const int NUM_DIGITS = 8; // maximum number of hex digits in each number

int getInputString(char input[]);
void parseNumbers(char input[], char n1[], char n2[]);
int compare(char n1[], char n2[]);

#endif
