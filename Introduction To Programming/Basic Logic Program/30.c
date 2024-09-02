#include <stdio.h>

int main() {
    int years, days;
    double totalDays, totalYears;

    
    printf("Enter number of years: ");
    scanf("%d", &years);

    totalDays = years * 365.0;

    printf("%d years is equal to %.0lf days.\n", years, totalDays);

    printf("\nEnter number of days: ");
    scanf("%d", &days);

    totalYears = days / 365.0;

    printf("%d days is equal to %.2lf years.\n", days, totalYears);

    return 0;
}
