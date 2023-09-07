#include <stdio.h>

int main() {
    uint32_t num = 1;
    uint8_t *bytePtr = (uint8_t *)&num;
    if (*bytePtr == 1) {
        printf("Your system is Little Endian.\n");
    } else {
        printf("Your system is Big Endian.\n");
    }

    return 0;
}
