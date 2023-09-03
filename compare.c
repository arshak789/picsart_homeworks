#include <stdio.h>
#include <stdbool.h>

int main()
{
	int var1 = 0;
	int var2 = 0;
	bool compare_result;
	printf("Enter first integer: ");
	scanf("%d", &var1);
	printf("Enter second integer: ");
	scanf("%d", &var2);
	compare_result = (var1 == var2);
	if(compare_result){

		printf("numbers are equal\n");
	}else{
		printf("numbers are not equal\n");
	}

	return 0;
}
