#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number is zero.\n");
    } else {
        if (number > 0) {
            printf("The number is positive ");
        } else {
            printf("The number is negative ");
        }

        if (number % 2 == 0) {
            printf("and even.\n");
        } else {
            printf("and odd.\n");
        }
    }

    return 0;
}
