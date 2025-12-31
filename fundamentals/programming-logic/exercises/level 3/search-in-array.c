#include <stdio.h>

int main() {
    int size, target, found = 0;

    printf("Array size: ");
    scanf("%d", &size);

    int array[size];

    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Value to search: ");
    scanf("%d", &target);

    for (int i = 0; i < size; i++) {
        if (array[i] == target) {
            printf("Value found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Value not found.\n");
    }

    return 0;
}
