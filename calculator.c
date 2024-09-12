#include <stdio.h>
int add(int x, int y, int z); // Function declarations for the calculator to add, subtract, multiply and divide
int subtract(int x, int y, int z);
int divide(int x, int y);
int multiply(int x, int y);

int main(void)
{
    int expression = divide(multiply(add(1,1,1),1),multiply(subtract(1,4,6),1)); //creating an int variable to hold the returned value of calculations that are done with the functions 
    printf("The expression calculated is: %d\n", expression);    //prints the value of the expression

    int undefined = divide(3,0); //showing how the divide function works with the dividing by 0 test case
    printf("%d", undefined);    //prints the value of dividing by 0
}

int add(int x, int y, int z){
    return x + y + z; //returns the additions of 3 int variables passed by value (copy)
}

int subtract(int x, int y, int z){
    return z - y - x; //subtracts from z - y - x order 
}

int divide(int x, int y){
    if(y == 0){
        printf("%s", "Having a denominator of 0 will reult in a ZeroDivisionError!\n");
        return -1; //if the demoninator is 0 then it prints the above result, but must return a number hence returning -1
    }
    return x / y; //returns the division of x/y
}

int multiply(int x, int y){
    return x * y; //multiplies x * y values 
}