#include<stdio.h>
int main()

{
    float monthlySalary;
    float premiumRate;
    
    printf("Enter your monthly salary:\n ");
    scanf("%f",&monthlySalary);

    float AnnualSalarysalary=monthlySalary*12;

    printf("Enter premiumRate: \n");
    scanf("%f",&premiumRate);

    printf("Your annual salary based on your monthly salary = %f\n",AnnualSalarysalary);
    printf("Your insurance premium based on your salary is =%f%f\n",( AnnualSalarysalary*premiumRate)/100 );

}