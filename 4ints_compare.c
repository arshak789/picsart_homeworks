#include <stdio.h>

int main() {
    int a, b, c, d, min;

    // Enter the numbers
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    printf("c = ");
    scanf("%d", &c);
    printf("d = ");
    scanf("%d", &d);

    // Count of all numbers
    int sum = a + b + c + d;

    if (sum == 0) {
        // Check smallest number
        min = a;
        if (b < min) min = b;
        if (c < min) min = c;
        if (d < min) min = d;

        printf("Smallest number is %d\n", min);
    } else {
        printf("Count of all numbers is not equal to 0\n");
    }

    return 0;
}

