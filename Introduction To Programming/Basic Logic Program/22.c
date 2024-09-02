#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, CI;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);

    CI = amount - principal;

    printf("\nAmount after compound interest: %.2f\n", amount);
    printf("Compound Interest: %.2f\n", CI);

}
