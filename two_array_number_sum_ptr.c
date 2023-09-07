#include <stdio.h>

int main()
{
    const int size = 5;
    int arr1[size];
    int arr2[size];
    int* ptr1 = arr1;
    int* ptr2 = arr2;
    printf("You must enter 5 numbers for arr1[]\n");
    for(int i = 0; i < size; ++i) {
        printf("Please enter number %d : ", i + 1);
        scanf("%d", ptr1 + i);
    }
    printf("You must enter 5 numbers for arr2[]\n");
    for(int i = 0; i < size; ++i) {
        printf("Please enter number %d : ", i + 1);
        scanf("%d", ptr2 + i);
    }
    int sum;
    printf(" Reverse arr is : ");
    for(int i = 0; i < size; ++i) {
        sum += *(ptr1 + i);
        sum += *(ptr2 + i);

    }
    printf("%d\n", sum);
    return 0;
}