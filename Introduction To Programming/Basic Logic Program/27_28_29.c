/*Convert days into months
Convert years into days and months
Convert minutes into seconds and hours*/
#include <stdio.h>

int main() {
    int days, years, minutes;
    double months, total_days, total_months, seconds, hours
    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    months = days / 30.0;

    total_days = years * 365.0;
    total_months = years * 12.0;

    seconds = minutes * 60.0;
    hours = minutes / 60.0;

    printf("\n%d days is equal to %.2lf months.\n", days, months);
    printf("%d years is equal to %.0lf days and %.0lf months.\n", years, total_days, total_months);
    printf("%d minutes is equal to %.0lf seconds and %.2lf hours.\n", minutes, seconds, hours);

    return 0;
}
