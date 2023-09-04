#include <stdio.h>

int main() {
    const int size = 5;
    int arr1[size];
    int arr2[size];

    printf("Enter %d values for the first array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d values for the second array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr2[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum = sum + arr1[i];
    }
    for (int i = 0; i < size; ++i) {
        sum = sum + arr2[i];
    }

    printf("The sum of elements in both arrays is: %d\n", sum);
    return 0;
}