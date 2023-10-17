#include <stdio.h>

int main()
{
    int num;
    printf("Enter number.\n");
    scanf("%d", &num);
    int max = -1;
    int min = 10;
    while (num != 0)
    {
        int tmp = num % 10;
        if(tmp > max) {
            max = tmp;
        }
        if(tmp < min) {
            min = tmp;
        }
        num /= 10;
    }
    printf("Min value is : %d\n", min);
    printf("Max value is : %d\n", max); 
    return 0;
}