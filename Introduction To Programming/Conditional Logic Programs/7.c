//Accept marks from user and check pass or fail
#include <stdio.h>

int main() {
    float marks;

    printf("Enter the marks: ");
    scanf("%f", &marks);

    if (marks >= 40.0) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }

    return 0;
}
