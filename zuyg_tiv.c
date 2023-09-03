#include <stdio.h>

int main()
{
	int num = 0;
	printf("Please enter the number :");
	scanf("%d", &num);
	if(num % 2 == 0) {
		printf("Number %d is even!\n", num);
	}else{
		printf("Number %d is odd!\n", num);
	}
	return 0;
}

