#include <stdio.h>

int main(void) {
   int* numItemsPointer;
   int numItems;

   scanf("%d", &numItems);

   if(numItemsPointer < 0){
     numItemsPointer = NULL; //assign value to null

     printf ("Items is negative\n"); //print message
   }
   else {
    numItemsPointer = &numItems; //holds address

    numItems = numItems * 10; //multiple by 10

    printf("Items: %d\n", *numItemsPointer); //print value
   }

   if (numItemsPointer == NULL) {
      printf("Items is negative\n");
   }
   else {
      printf("Items: %d\n", *numItemsPointer);
   }

   return 0;
}