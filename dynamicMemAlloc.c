#include <stdio.h>
#include <stdlib.h>
int size = 0;
int arraySum(int *intPtr);
void arrayTraverse(int *intPtr);
int main(void){
    
    while(size <= 0){
        printf("Enter the size of the array: "); //prevent negative size values or a size of 0
        scanf("%d", &size);
    }
    int *intPtr = (int*) malloc(sizeof(int) * size); //mem alloc for int ptr array;
    for(int i = 0; i < size; i++){
        printf("Enter a numeric value: "); 
        scanf("%d", &intPtr[i]); //enter values in array using i to traverse indexes
    }
    printf("Sum: %d\n", arraySum(intPtr)); 
    arrayTraverse(intPtr);
    free(intPtr);
}

int arraySum(int *intPtr){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += *intPtr; //add values to sum
        intPtr++; //go to next index in memory
    }
    return sum;
}
void arrayTraverse(int *intPtr){
    for(int i = 0; i < size; i++){ 
        printf("Element at position %d: %d \n", i, *intPtr); //print value of current index in memory
        intPtr++; //increment memory address
    }
}