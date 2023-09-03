#include <stdio.h>

int main()
{
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	while (number > 0) {
		int digit = number % 10;
		printf("'%d' ", digit);
		number /= 10;
	}

	printf("\n");

	return 0;
}
