#include <stdio.h>

int main(void){
    int numOfBooks = 0; //int variable to hold the number of books
    int update = 0; //int update will hold user input to add a positive or negative number
    while(1){
        printf("Total number of books: %d\n", numOfBooks); //print numOfBooks to user
        printf("Enter the number of books to add or remove (negative number) or enter 0 to quit: "); //displays prompt to user on how the program works. 
        scanf("%d", &update); //take user input of adding or removing books
        if(update == 0){ //if update is 0 
            break; //then exit
        }
        else{
            numOfBooks += update; //add the positive or negative number to numOfBooks in the inventory
        }
    }
}