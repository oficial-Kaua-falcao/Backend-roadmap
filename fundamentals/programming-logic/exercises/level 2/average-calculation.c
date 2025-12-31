#include <stdio.h>

int main() {
    int count;
    float sum = 0.0f;
    float value;

    printf("How many numbers? ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Invalid amount.\n");
        return 1;
    }

    for (int i = 0; i < count; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &value);
        sum += value;
    }

    printf("Average: %.2f\n", sum / count);

    return 0;
}
