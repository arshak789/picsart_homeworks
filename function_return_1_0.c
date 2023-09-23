#include <stdio.h>

int number(int);

int main()
{
    int a = 0;
    printf("print number : ");
    scanf("%d", &a);
    printf("\n");
    int result = number(a);
    if (result == 1) {
        printf("The number is even : %d\n", result);
    } else {
        printf("The number is odd : %d\n", result);
    }
    return 0;
}

int number(int a)
{
    if (a % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}