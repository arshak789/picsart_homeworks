#include <stdio.h>

int main() {
    int arr[5];
    printf("Enter 5 values for the array:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The values in the array in reverse order are:\n");

    for (int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    return 0;
}