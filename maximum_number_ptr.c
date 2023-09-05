#include <stdio.h>

int main()
{
    const int size = 5;
    int arr[size];
    int* ptr = arr;
    for(int i = 0; i < size; ++i) {
        printf("Please enter number : ");
        scanf("%d", ptr + i);
    }
    int max = *ptr;
    for (int i = 0; i < size; ++i)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
        }
        
    }
    printf("Maximum number is : %d", max);
    return 0;
}