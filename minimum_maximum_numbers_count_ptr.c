#include <stdio.h>

int main() {
    const int size = 5;
    int arr[size];
    int* ptr = arr;

    for (int i = 0; i < size; ++i) {
        printf("Please enter number : ");
        scanf("%d", ptr + i);
    }

    int min = *ptr;
    int max = *ptr;

    for (int i = 0; i < size; ++i) {
        if (min > *(ptr + i)) {
            min = *(ptr + i);
        }
        if (max < *(ptr + i)) {
            max = *(ptr + i);
        }
    }

    int sum = min + max;

    printf("Sum of smallest and largest numbers is : %d\n", sum);

    return 0;
}
