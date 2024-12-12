#include <stdio.h>
void h();
void g();
void f();

int x;
int main(){

h();
g();
}
void h(){
    int x = 13;
    f();
}
void g()
{
    int x = 12;
    f();
}
void f(){
    printf("%d\n",x);
}