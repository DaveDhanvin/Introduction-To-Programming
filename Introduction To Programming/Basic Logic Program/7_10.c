#include<stdio.h>
int main()
{ 
    double w,h,l;
    printf("enter the value of w,h,l:\n");
    scanf("%lf%lf%lf",&w,&h,&l);
    printf("\n area of Rectangle =%lf%lf",w*l);
    printf("\n area of a rectangular prism=%lf%lf%lf",2*(w*l+h*l+h*w));
}