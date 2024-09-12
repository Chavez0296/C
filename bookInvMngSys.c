#include <stdio.h>

int main(void){
    int numOfBooks = 0;
    int update = 0;
    while(1){
        printf("Total number of books: %d\n", numOfBooks);
        printf("Enter the number of books to add or remove (negative number) or enter 0 to quit: ");
        scanf("%d", &update);
        if(update == 0){
            break;
        }
        else{
            numOfBooks += update;
        }
    }
}