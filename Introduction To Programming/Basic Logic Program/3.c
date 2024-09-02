#include<stdio.h>
int main()
{
 double r;
 double pi=3.14;
 printf("enter the radius:\n");
 scanf("%lf",&r);
 printf("Area of Circle\n%lf%lf%lf",pi*r*r);  
 printf("Circumference of Circle\n%lf%lf",2*pi*r);
}