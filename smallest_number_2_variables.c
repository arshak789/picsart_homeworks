#include <stdio.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	printf("Enter the first number :");
	scanf("%d", &var1);

	printf("Enter the second nnumber :");
	scanf("%d", &var2);
	if(var1 < var2){
		printf("First integer is smaller.\n");
	}else if(var1 > var2){
		printf("Second integer is smaller.\n");
	}else{
		printf("First integer and second integer are equal.\n");
	}
	return 0;
}
