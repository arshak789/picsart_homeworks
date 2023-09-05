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
    int index = 0;
    for (int i = 0; i < size; ++i)
    {
        if (max < *(ptr + i))
        {
            max = *(ptr + i);
            index = i;
        }
        
    }
    printf("Maximum number is %d in index[%d]", max, index);
    return 0;
}