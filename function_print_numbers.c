#include <stdio.h>

int numbers(int);

int main()
{
    int a;
    printf("print number\n");
    scanf("%d", &a);
    numbers(a);
    return 0;
}

int numbers(int a)
{
    if (a % 2 == 0)
    {
        for (int i = 0; i < 101; ++i)
        {
            printf("%d\n", i);
        }
        
    } else {
        for (int i = 100; i >= 0; --i)
        {
            printf("%d\n", i);
        }
    }
    
}