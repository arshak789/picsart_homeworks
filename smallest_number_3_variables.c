#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("enter first number\n");
	scanf("%d", &a);
	printf("enter second number\n");
	scanf("%d", &b);
	printf("enter third number\n");
	scanf("%d", &c);
	if(a < b && a < c){
		printf("first number is smallest\n");
	}else if(b < a && b < c){
		printf("second number is smallest\n");
	}else if(c < a && c < b){
		printf("third number is smallest\n");
	}else{	
		printf("all number is equal\n");
	}
	return 0;
}
