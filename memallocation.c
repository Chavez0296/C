#include <stdio.h>
#include <stdlib.h>
int main(){
    int size, init_v;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the initial value of the first element: ");
    scanf("%d", &init_v);

    int *array = (int *) malloc(size * sizeof(int));
    if (array == NULL){
        printf("Failed Memory Allocation!\n");
        return 1;
    }
    int *arrPtr = array;

    for(int i = 0; i < size; i++){
        *(arrPtr + i) = init_v + i;
    }
    
    printf("Array Initialized: ");
    
    for(int i = 0; i < size; i++){
        printf("%d ", *(arrPtr + i));
    }
    printf("\n");
    free(array);
    return 0;
}