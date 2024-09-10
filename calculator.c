#include <stdio.h>
int add(int x, int y, int z);
int subtract(int x, int y, int z);
int divide(int x, int y);
int multiply(int x, int y);

int main(void)
{
    int expression = divide(multiply(add(1,1,1),1),multiply(subtract(1,4,6),1));
    printf("The expression calculated is: %d\n", expression);

    int undefined = divide(3,0);
    printf("%d", undefined);
}

int add(int x, int y, int z){
    return x + y + z;
}

int subtract(int x, int y, int z){
    return z - y - x;
}

int divide(int x, int y){
    if(y == 0){
        printf("%s", "Having a denominator of 0 will reult in a ZeroDivisionError!\n");
        return -1;
    }
    return x / y;
}

int multiply(int x, int y){
    return x * y;
}