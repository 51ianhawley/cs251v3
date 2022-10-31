#include "stdlib.h"
#include "stdio.h"

int main(void) {
    int *a;
    int *b;
    int size;
    *a = (int*) malloc(sizeof(int));
    if(a == NULL) {
        printf("This computer does not have enough memory.");
        return 1;
    }
    a[0] = 1;
    a[1] = 1;
    size = 2;
    printf("");
    
    

}