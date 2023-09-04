#include <stdio.h>

int main() {
    int a = 0;

    printf("Please enter the number for check: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("The number is even\n");
        int b = 0;
        while (b <= 100) {
            printf("%d\n", b);
            b++;
        }
    } else {
        printf("The number is odd\n");
        int b = 100;
        while (b >= 0) {
            printf("%d\n", b);
            b--;
        }
    }

    return 0;
}

