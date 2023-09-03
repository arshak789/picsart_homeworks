#include <stdio.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	printf("enter the first number :");
	scanf("%d", &var1);

	printf("enter the second nnumber :");
	scanf("%d", &var2);
	if(var1 < var2){
		printf("first integer is smaller\n");
	}else if(var1 > var2){
		printf("second integer is smaller\n");
	}else{
		printf("first integer and second integer are equal\n");
	}
	return 0;
}
