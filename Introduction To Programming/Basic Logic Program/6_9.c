#include<stdio.h>
int main()
{
   double b,h,a,c;
   printf("enter the value sides a,b,c and hight h:\n");
   scanf("%lf%lf%lf%lf",&c,&a,&h,&b);
   printf( "area of Triangl = %lf%lf\n",0.5*( b * h));
   printf("circumference of Triangle =%lf%lf%lf\n ",a + b + c);
}