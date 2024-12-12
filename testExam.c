#include <stdio.h>

int main(void){
    
    int n = 0;
    printf("Give me that number: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int *maxInt = arr; 
    int *minInt = arr;

    for(int i = 1; i < n; i++){
        if(*maxInt < arr[i]){
            maxInt = &arr[i];
        }
        if(*minInt > arr[i]){
            minInt = &arr[i];
        }
    
    }
    printf("Max: %d\n", *maxInt);
    printf("Min: %d", *minInt);
    
   
}
