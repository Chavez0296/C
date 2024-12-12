#include <stdio.h>
void swap(int *ptr1, int *ptr2); //declaring function
int main(void){
  int x = 4; //declaring variables holding int values
  int y = 9;
  int *ptr1 = &x; //ptr initialization and assigning references to ptrs
  int *ptr2 = &y;
  printf("X = %d, Y = %d\n", *ptr1, *ptr2);
  printf("X = %d, Y = %d\n", x, y); //print values before swap
  swap(ptr1, ptr2); //call swap function
  printf("X = %d, Y = %d\n", x, y); //print after swap 
  
}
void swap(int *ptr1, int *ptr2){ //passing ptrs that reference ints v
  int temp = *ptr1; // temp to store one of the ptrs
  *ptr1 = *ptr2; // swap ptr2 to ptr1
  *ptr2 = temp;  // now give ptr2 the ptr1 value which was stored in temp
}
