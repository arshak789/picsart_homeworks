#include <stdio.h>

void numbers(int, int);

int main()
{
    int a, b;
    printf("print number\n");
    scanf("%d %d", &a, &b);
    numbers(a, b);
    return 0;
}

void numbers(a, b)
{
    if (a > b)
    {
        printf("max number is : %d\n", a);
    } else if (a < b) {
        printf("max number is : %d\n", b);
    } else {
        printf("equal numbers\n");
    }
    
}