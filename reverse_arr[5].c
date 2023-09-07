#include <stdio.h>

int main() {
    const int size = 5;
    int my_array[size];

    for (int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER: ");
        scanf("%d", &my_array[i]);
    }

    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = my_array[i];
        my_array[i] = my_array[4 - i];
        my_array[4 - i] = temp;
    }

    printf("OUTPUT ARRAY: [");
    for (int i = 0; i < size; i++) {
        printf("%d, ", my_array[i]);
    }
    printf("]\n");

    return 0;
}