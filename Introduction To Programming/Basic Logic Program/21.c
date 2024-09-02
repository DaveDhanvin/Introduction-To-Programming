//Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable
#include<stdio.h>
int main()
{
    int num1;
    int num2;
    int num3;

    printf("enter two number \n");
    scanf("%d%d",&num1,&num2);

    num3=num1;
    num1=num2;
    num2=num3;

    num1 = num1 + num2;  // num1 now holds the sum of both numbers
    num2 = num1 - num2;  // num2 is now num1
    num1 = num1 - num2;  // num1 is now num2

    printf("After swapping:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}