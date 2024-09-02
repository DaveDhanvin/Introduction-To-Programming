//#include <stdio.h>

int main() {
    double kilometers, meters;

    printf("Enter distance in kilometers: ");
    scanf("%lf", &kilometers);

    meters = kilometers * 1000.0;

    printf("%.2lf kilometers is equal to %.2lf meters.\n", kilometers, meters);

    return 0;
}
Convert kilometers into meters