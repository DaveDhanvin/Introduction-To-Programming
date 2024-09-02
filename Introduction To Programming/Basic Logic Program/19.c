#include<stdio.h>
#include<math.h>
int main()
{
    float A,P,r,n,t;
    
    printf("\nenter the value of  principal amount,annual interest rate, nicy,time:");
    scanf("%f%f%f%f",&P,&n,&r,&t);

    A= P*pow(1+r/n,n*t);
    printf("\ncompound interest is:%f%f%f%f",A);
    
}