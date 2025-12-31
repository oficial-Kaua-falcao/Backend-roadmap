#include <stdio.h>

int main() {
    int size;

    printf("Array size: ");
    scanf("%d", &size);

    int array[size];
    int visited[size];

    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i);
        scanf("%d", &array[i]);
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("Value %d appears %d times\n", array[i], count);
    }

    return 0;
}
