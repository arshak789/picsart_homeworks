#include <stdio.h>

int main() {
    const int size = 10;
    char c[size];
    printf("Print line\n");
    
    for (int i = 0; i < size; ++i) {
        scanf(" %c", &c[i]);
    }
    printf("\n");
    for (int i = 0; i < size; ++i) {
        if (c[i] >= 'a' && c[i] <= 'z') {
            c[i] = c[i] - 32;
        }
        printf("%c\n", c[i]);
    }

    return 0;
}
