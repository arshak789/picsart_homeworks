#include <stdio.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	printf("Print first integer\n");
	scanf("%d", &var1);
	printf("Print second integer\n");
	scanf("%d", &var2);
	if(var1 > var2){
		printf("first integer is the greates\n");
	}else{
		printf("second integer is the greatest\n");
	}
	return 0;
}
