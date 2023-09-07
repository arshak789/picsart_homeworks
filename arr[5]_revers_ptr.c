#include <stdio.h>

int main() {
    const int size = 10;
    int array[size];

    int *ptr = array;
    for (int i = 0; i < size; i++) {
        printf("ENTER THE NUMBER: ");
        scanf("%d", ptr);
        ptr++;
    }
    ptr = array;

    int *start_arr = ptr;
    int *end_arr = ptr + size - 1;
    int temp;

    while (start_arr < end_arr) {
        temp = *start_arr;
        *start_arr = *end_arr;
        *end_arr = temp;

        start_arr++;
        end_arr--;
    }

    printf("OUTPUT ARRAY: [");
    for (int i = 0; i < size; i++) {
        printf("'%d' ", *ptr);
        ptr++;
    }
    printf("]\n");

    return 0;
}
