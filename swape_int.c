#include <stdio.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	int tmp = 0;
	printf("ENTER VAR1 :");
	scanf("%d", &var1);
	printf("ENTER VAR2 :");
	scanf("%d", &var2);
	tmp = var1;
	var1 = var2;
	var2 = tmp;

	printf("SWAPED VAR1 = %d \n ", var1);
	printf("SWAPED VAR2 = %d \n ", var2);
	return 0;
}

