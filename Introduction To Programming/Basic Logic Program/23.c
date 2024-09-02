//WAP to calculate swap 2 numbers with using of multiplication and division.
#include <stdio.h>

void swap(int *a, int *b) {
    if (*a != 0 && *b != 0) {
        *a = *a * *b;  //  Multiply a and b
        *b = *a / *b;  //  Divide  b to get the original value of a
        *a = *a / *b;  //  Divide a by the new value of b to get the original value of b
    }
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
