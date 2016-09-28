#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "sorts.h"

int main(int argc, char* argv[])
{
    int size = 0;
    int* myArray;
    
    printf("Enter size of array: ");
    scanf("%d", &size);
    
    printf("Creating array of size: %d\n", size);
    myArray = malloc(sizeof(int) * size);
    
    int i = 0;
    srand(time(NULL));
    for(i = 0; i<size; i++){
        myArray[i] = rand() % size;
    }
    
    for (i=0; i<size; i++){
        printf("myArray[%d] --> %d\n", i, myArray[i]);
    }
    
    free(myArray);
    return 0;
}
