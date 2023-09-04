#include <stdio.h>


int main()
{
	int var1 = 0;
	int var2 = 0;
	int var3 = 0;
	printf("Enter first number :");
	scanf("%d", &var1);
	
	printf("Enter second number :");
	scanf("%d", &var2);
	
	printf("Enter third number :");
	scanf("%d", &var3);

	int sum = var1 + var2 + var3;
	printf("Sum = %d \n", sum);
	return 0;
}
