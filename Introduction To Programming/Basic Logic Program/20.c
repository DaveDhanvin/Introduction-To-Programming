#include <stdio.h>

int main() 
{
    float monthlySalary, remainingSalary, insurancePremium, loanInstallment;
    
    printf("Enter your monthly salary: ");
    scanf("%f", &monthlySalary);
   
    insurancePremium = monthlySalary * 0.10;

    loanInstallment = monthlySalary * 0.10;

    remainingSalary = monthlySalary - insurancePremium - loanInstallment;

    printf("\nYour monthly salary: %.2f\n", monthlySalary);
    printf("Deduct 10%% insurance premium: %.2f\n", insurancePremium);
    printf("Deduct 10%% loan installment: %.2f\n", loanInstallment);
    printf("Remaining Salary: %.2f\n", remainingSalary);

    return 0;
}
