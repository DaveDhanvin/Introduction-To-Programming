//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include <stdio.h>

int main() {
    int number;
    long long power1, power2, power3;

    printf("Enter an integer: ");
    scanf("%d", &number);

    power1 = number;
    power2 = number * number;
    power3 = number * number * number;

    printf("First power: %d^1 = %lld\n", number, power1);
    printf("Second power: %d^2 = %lld\n", number, power2);
    printf("Third power: %d^3 = %lld\n", number, power3);

    return 0;
}
