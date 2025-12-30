#include <stdio.h>

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    return b;
}

int main() {
    int x = 10;
    int y = 20;

    int result = max(x, y);

    printf("The maximum value is: %d\n", result);

    return 0;
}
