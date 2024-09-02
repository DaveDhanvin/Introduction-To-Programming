#include<stdio.h>
int main()
{
    double a;
    printf("enter the value of a:\n");
    scanf("%lf",&a);
    printf("Area of Cube=\n%lf",6*(a*a));
    printf("\n");
    printf("Area of Square=\n%lf",a*2);
    printf("circumference of square =\n%lf", 4 * a);
}