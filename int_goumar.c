#include <stdio.h>


int main()
{
	int var1 = 0;
	int var2 = 0;
	int var3 = 0;
	printf("enter first number :");
	scanf("%d", &var1);
	
	printf("enter second number :");
	scanf("%d", &var2);
	
	printf("enter third number :");
	scanf("%d", &var3);

	int sum = var1 + var2 + var3;
	printf("the sum = %d \n", sum);
	return 0;
}
