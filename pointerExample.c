#include <stdio.h>
#include <stdlib.h>

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr =  (int *) malloc(sizeof(int) * size);

    int *ptr = arr; //this will assign the ptr to the very first index of the array

    for(int i = 0; i < size; i++){
        printf("Enter element into array: ");
        scanf("%d", &ptr[i]);
    }

    printf("Array Initialized!\n");

    for(int i = 0; i < size; i++){
        printf("%d ", ptr[i]);
    }

    free(arr);
    return 0;
}