#include <stdio.h>
struct Person {

    char name[50];

    int age;

};

int main(void){
    struct Person john;

    struct Person *ptrJohn = &john;

   int testVal = 25;

   int *testPtr = &testVal;

   printf("%p, %p=d", testPtr, *testPtr); 
   john.age = 25;
   printf("%d", john.age);
}


