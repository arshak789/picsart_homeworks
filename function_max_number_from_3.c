#include <stdio.h>

void numbers(int, int, int);

int main()
{
    int a, b, c;
    printf("print number\n");
    scanf("%d %d %d", &a, &b, &c);
    numbers(a, b, c);
    return 0;
}

void numbers(int x, int y, int z)
{
    if (x > y && x > z )
    {
        printf("max number is : %d\n", x);
    } else if (y > x && y > z)
    {
        printf("max number is : %d\n", y);
    } else if (z > x && z > y)
    {
        printf("max number is : %d\n", z);
    } else
    {
        printf("equal numbers!!\n");
    }
}