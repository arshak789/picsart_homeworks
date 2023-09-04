#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t value = 0x12345678;
	printf("Original Value: 0x%08X\n", value);
	unsigned char *bytes = (unsigned char *)&value;
	if (bytes[0] == 0x12) {
		printf("The system is Big Endian.\n");
	} else if (bytes[3] == 0x12) {
		printf("The system is Little Endian.\n");
	} else {
		printf("Something went wrong.\n");
	}
	return 0;
}
