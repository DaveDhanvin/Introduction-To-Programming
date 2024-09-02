//Convert temperature Fahrenheit to Celsius
#include <stdio.h>

int main() {
    double fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

   
    celsius = (fahrenheit - 32) * 5 / 9;

  
    printf("%.2lf Fahrenheit is equal to %.2lf Celsius.\n", fahrenheit, celsius);

    return 0;
}
