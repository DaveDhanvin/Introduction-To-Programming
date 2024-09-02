// Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
    char n1[50], n2[50], n3[50], n4[50], n5[50];
    float s1,s2,s3,s4,s5,t,a;
    printf(" \n enter 5 employees name");
    scanf(" %s%s%s%s%s",&n1,&n2,&n3,&n4,&n5);
    printf("enter salary");
    scanf(" %f%f%f%f%f",s1,s2,s3,s4,s5);
    printf("\n%s\n%f",n1,s1);
    printf("\n%s\n%f",n2,s2);
    printf("\n%s\n%f",n3,s3);
    printf("\n%s\n%f",n4,s4);
    printf("\n%s\n%f",n5,s5);
    t=(s1+s2+s3+s4+s5);
    a=(s1+s2+s3+s4+s5)/5;
    printf("\n\n total salary%f",t);
    printf("\n\n average salary%f",a);
}