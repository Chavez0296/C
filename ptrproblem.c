#include <stdio.h>

int main(void)
{

   int testVal = 25;

   int *testPtr = &testVal;

   printf("%p, %p", testPtr, *testPtr); 
   
}