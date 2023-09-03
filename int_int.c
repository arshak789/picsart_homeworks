#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("ENTER 3 NUMBERS:\n");

	printf("FIRST INT : ");
	scanf("%d", &a);

	printf("SECOND INT : ");
	scanf("%d", &b);

	printf("THIRD INT : ");
	scanf("%d", &c);
	printf("THE ENTERED NUMBERS IS ---> %d, %d, %d\n", a, b, c);
	return 0;
}
