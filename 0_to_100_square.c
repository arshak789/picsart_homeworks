#include <stdio.h>

int main() {
    for (int i = 0; i <= 100; i++) {
        int square = i * i;
        printf("%d*%d = %d\n", i, i, square);
    }

    return 0;
}