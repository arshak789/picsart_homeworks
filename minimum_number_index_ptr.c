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
    int min = *ptr;
    int index = 0;
    for (int i = 0; i < size; ++i)
    {
        if (min > *(ptr + i))
        {
            min = *(ptr + i);
            index = i;
        }
        
    }
    printf("Minimum number is %d in index[%d]", min, index);
    return 0;
}