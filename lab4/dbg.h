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
int printLab3FinalOutput(int arr1[], int arr2[], int arr3[], int sum) {
    printf("\n   ");   
    for(int i = NUM_BITS - 1; i >= 0; i--) {
        printf("%d", arr1[i]);
    }
    printf("\n"); // new line line after the first number
    printf(" + ");
    for(int i = NUM_BITS - 1; i >= 0; i--) {
        printf("%d", arr2[i]);
    }
    printf("\n   ----------------\n");
    printf(" = ");
    for(int i = NUM_BITS - 1; i >= 0; i--) {
        printf("%d", arr3[i]);
    }
    printf("    = %d", sum);
} // Prototype method for the end of the lab code.