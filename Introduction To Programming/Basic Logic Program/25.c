#include <stdio.h>

int main() {
    int numExpenses = 5;
    double expenses[numExpenses];
    double total = 0.0, average;

    
    printf("Enter %d expenses:\n", numExpenses);
    for (int i = 0; i < numExpenses; i++) {
        printf("Expense %d: ", i + 1);
        scanf("%lf", &expenses[i]);
        total += expenses[i];
    }

    average = total / numExpenses;
    printf("Average of expenses: %.2lf\n", average);

    return 0;
}
