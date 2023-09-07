#include <stdio.h>

int main()
{
    const int size = 5;
    int arr[size];
    int* ptr = arr;
    printf("You must enter 5 numbers.\n");
    for(int i = 0; i < size; ++i) {
        printf("Please enter number %d : ", i + 1);
        scanf("%d", ptr + i);
    }
    printf(" Reverse arr is : ");
    for(int i = size - 1; i >= 0; --i) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}