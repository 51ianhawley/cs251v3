#define NUM_BITS 16  
#include <stdio.h>
/// @brief 
/// @param Print out an array of integers. 
/// @return 
int printIntArr(int arr[]) {
    // Yeah I hard tab. Deal with it.
    printf("Value of int array.\n");
    printf("[");
    for(int i = 0; i < NUM_BITS; i++) {

        printf("%d", arr[i]);
    }

    printf("]");
}
int printCharArr(char arr[]) {
    printf("Value of char array.\n");
    printf("[");
    for(int i = 0; i < NUM_BITS; i++) {

        printf("%c", arr[i]);
    }

    printf("]");
}
// int printLab3FinalOutput(int arr1[], int arr2[], int arr3[], int sum) {
//     printf("\n   ");   
//     for(int i = NUM_BITS - 1; i >= 0; i--) {
//         printf("%d", arr1[i]);
//     }
//     printf("\n"); // new line line after the first number
//     printf(" + ");
//     for(int i = NUM_BITS - 1; i >= 0; i--) {
//         printf("%d", arr2[i]);
//     }
//     printf("\n   ----------------\n");
//     printf(" = ");
//     for(int i = NUM_BITS - 1; i >= 0; i--) {
//         printf("%d", arr3[i]);
//     }
//     printf("    = %d", sum);
// } // Prototype method for the end of the lab code.
// int lab5Tests() {
//     printf("Checking for the 7th bit of 0xFF: %d expect true\n", bit(7, (char)0xFF));
//   printf("Checking for the 7th bit of 0x00: %d expect false\n", bit(7, (char)0x00));
//   printf("Checking for the 0th bit of 0xFF: %d expect true\n", bit(0, (char)0xFF));
//   printf("Checking for the 0th bit of 0x00: %d expect false\n", bit(0, (char)0x00));
//   printf("Checking for 'A' is digit: %d expect false\n", isDigit('A'));
//   printf("Checking for 'F' is digit: %d expect false\n", isDigit('F'));
//   printf("Checking for '0' is digit: %d expect true\n", isDigit('0'));
//   printf("Checking for '9' is digit: %d expect true\n", isDigit('9'));
//   printf("Doing digitToBinary for '0': %d expect 0\n", digitToBinary('0'));
//   printf("Doing digitToBinary for '9': %d expect 9\n", digitToBinary('9'));
//   printf("Doing digitToBinary for '8': %d expect 8\n", digitToBinary('8'));
//   printf("Doing digitToBinary for '7': %d expect 7\n", digitToBinary('7'));
//   printf("Doing digitToBinary for '6': %d expect 6\n", digitToBinary('6'));
//   printf("Doing digitToBinary for '5': %d expect 5\n", digitToBinary('5'));
//   printf("Doing digitToBinary for '4': %d expect 4\n", digitToBinary('4'));
//   printf("Doing digitToBinary for '3': %d expect 3\n", digitToBinary('3'));
//   printf("Doing digitToBinary for '2': %d expect 2\n", digitToBinary('2'));
//   printf("Doing digitToBinary for '1': %d expect 1\n", digitToBinary('1'));
//   printf("Doing letterToBinary for 'A': %d expect 10\n", letterToBinary('A'));
//   printf("Doing letterToBinary for 'B': %d expect 11\n", letterToBinary('B'));
//   printf("Doing letterToBinary for 'C': %d expect 12\n", letterToBinary('C'));
//   printf("Doing letterToBinary for 'D': %d expect 13\n", letterToBinary('D'));
//   printf("Doing letterToBinary for 'E': %d expect 14\n", letterToBinary('E'));
//   printf("Doing letterToBinary for 'F': %d expect 15\n", letterToBinary('F'));
//   printf("Doing hexToDecimal for '9': %d expect 9 = 0x00000009\n", hexToDecimal("9"));
//   printf("Doing hexToDecimal for 'C': %d expect 12 = 0x0000000C\n", hexToDecimal("C"));
//   printf("Doing hexToDecimal for '1A': %d expect 26 = 0x0000001A\n", hexToDecimal("1A"));
//   printf("Doing hexToDecimal for '11A': %d expect ? = 0x00000011A\n", hexToDecimal("11A"));
//   printf("Doing hexToDecimal for '1234ABCD': %d expect 305441741 = 0x1234ABCD\n", hexToDecimal("1234ABCD"));
//   printf("Doing hexToDecimal for '7FFFFFFF': %d expect 2147483647 = 0x7FFFFFFF \n", hexToDecimal("7FFFFFFF"));
//   printf("Doing hexToDecimal for 'C0FFEE': %d expect 12648430 = 0xC0FFEE \n", hexToDecimal("C0FFEE"));
// }