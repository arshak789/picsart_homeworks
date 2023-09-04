#include <stdio.h>

int main() {
    int a = 0;

    printf("Please enter the number for check: ");
    scanf("%d", &a);

    if (a % 2 != 0) {
        printf("The number is odd!\n");
    } else {
        printf("The number is even!\n");
    }
    return 0;
}

