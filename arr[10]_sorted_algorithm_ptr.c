#include <stdio.h>

int main() {
    const int n = 10;
    int arr[n];

    int initial_values[] = {5, 2, 9, 1, 5, 6, 8, 3, 4, 7};
    for (int i = 0; i < n; ++i) {
        arr[i] = initial_values[i];
    }

    printf("Original array: [ ");
    for (int i = 0; i < n; i++) {
        printf("'%d' ", arr[i]);
    }
    printf(" ]\n");

    int temp;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: [ ");
    for (int i = 0; i < n; i++) {
        printf("'%d' ", arr[i]);
    }
    printf("]\n");
    return 0;
}
