#include <stdio.h>

int main()
{
	int a,b,c;
	printf("Enter the first number:");
	scanf("%d", &a);
	printf("Enter the second number:");
	scanf("%d", &b);
	printf("Enter the third number:");
	scanf("%d", &c);
	if(a > b && a > c){
		printf("First number is the greatest.\n");
	}else if(b > a && b > c){
		printf("Second number is the greatest.\n");
	}else if(c > a && c > b){
		printf("Third number is the greatest.\n");
	}else{
		printf("All numbers are equal.\n");
	}
	return 0;
}
