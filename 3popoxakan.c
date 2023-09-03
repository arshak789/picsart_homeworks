#include <stdio.h>

int main()
{
	int a,b,c;
	printf("enter the first number:");
	scanf("%d", &a);
	printf("enter the second number:");
	scanf("%d", &b);
	printf("enter the third number:");
	scanf("%d", &c);
	if(a > b && a > c){
		printf("first number is the greatest\n");
	}else if(b > a && b > c){
		printf("second number is the greatest\n");
	}else if(c > a && c > b){
		printf("third number is the greatest\n");
	}else{
		printf("all numbers are equal\n");
	}
	return 0;
}
