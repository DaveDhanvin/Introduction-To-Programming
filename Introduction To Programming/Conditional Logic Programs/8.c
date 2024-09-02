/*WAP to accept the height of a person in centimeters and categorize the
person according to their height*/
#include <stdio.h>

int main() {
    float height_cm;

    printf("Enter the height in centimeters: ");
    scanf("%f", &height_cm);

    if (height_cm < 0) {
        printf("Invalid height entered.\n");
    } else if (height_cm < 150.0) {
        printf("The person is Short.\n");
    } else if (height_cm >= 150.0 && height_cm < 165.0) {
        printf("The person is Average height.\n");
    } else if (height_cm >= 165.0 && height_cm < 180.0) {
        printf("The person is Tall.\n");
    } else if (height_cm >= 180.0) {
        printf("The person is Very Tall.\n");
    }

    return 0;
}
