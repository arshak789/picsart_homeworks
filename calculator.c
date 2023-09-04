#include <stdio.h>

int main()
{
	char a;
	int num1 = 0;
	int num2 = 0;
	int res = 0;
	printf("enter numnber : ");
	scanf("%d", &num1);
	printf("enter operator( +, -, /, *): ");
	scanf(" %c", &a);
	printf("enter numnber : ");
	scanf("%d", &num2);
	switch(a) {
	   case '+':
		   res = num1 + num2;
           case	'-':
		   res = num1 - num2;
           case '/':
		   res = num1 / num2;
	   case '*':
		   res = num1 * num2;
	}	
	printf("RESULT: %d %c %d = %d\n", num1, a, num2, res);
	return 0;
}
