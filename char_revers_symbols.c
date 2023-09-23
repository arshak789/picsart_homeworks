#include <stdio.h>

int main() {
    const int size = 10;
    char input[size];
    printf("Print text: ");
    scanf("%s", input);
    printf("Reversed text: \n");
    for (int i = size - 1; i >= 0; --i) {
        printf("%c\n", input[i]);
    }

    return 0;
}
