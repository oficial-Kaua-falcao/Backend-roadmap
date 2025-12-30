#include <stdio.h>

int main() {
    int limit;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        printf("Count: %d\n", i);
    }

    return 0;
}
