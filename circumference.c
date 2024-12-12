#include <stdio.h>
const double PI = 3.141592653589793;

double circumference(double radius){
    return 2 * PI * radius;
}

double area(double radius){
    return PI * radius * radius;
}

int main(){
    double r;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    printf("Circumference of the circle: %.2lf\n", circumference(r));
    printf("Area of the circle %.2lf\n", area(r));
    return 0;
}
