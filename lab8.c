#include <stdio.h>
int A = 1; //initialize int A, B in global scope
//const int A = 1;
int B = 10; //Part 5 when const int A = 1; is uncommented it will make the variable read only causing a read only error to occur up compile time
float whatPercentage(){ //function to calculate percent
    return ((float)A/B)*100; //must use float so that it does not produce 0's
};
int main(void){
    printf("Percentage of A / B: %.2f%%\n", whatPercentage()); //print first instances of A and B percentage
    
    A = 20; //update A
    B = 100; //update B
    //Part 4, the values of A and B change due to the fact that A and B are mutable global variables
    //and because whatPercentage is accessing the global scope of A and B which get updated by the lines above.
    printf("Percentage of A / B: %.2f%%\n", whatPercentage()); //prints the percent with update A and B variables. 
    
    return 0;

}