#include <stdio.h>
#include <stdbool.h>

int main()
{
	_Bool is_true = 0;
	char c = '\0';
	short sh = 0;
	int i = 0;
	long in = 0;
	float f = 0;
	long double ld = 0;
	double d = 0;
	long long ll = 0;
	printf("PLEASE ENTER 1 or 0");
	scanf("%d", &is_true);
	printf("THE VALUE OF BOOL IS %d\t", is_true);
	printf("PLEASE ENTER CHAR \n");
	scanf("%c", &c);
	printf("THE VALUE OF CHAR IS %c \t", c);
	printf("PLEASE ENTER SHORT INT \n");
	scanf("%hd \t",&sh);
	printf("SHORT INT NUMBER IS %hd \t", sh);
	printf("PLEASE ENTER INT \n");
	scanf("%d ",&i);
	printf("THE VALUE OF INT IS %d \t",i);
	printf("PLEASE ENTER LONG INT \n");
	scanf("%ld",&in);
	printf("THE VALUE OF LONG INT IS %ld\t", in);
	return 0;
}
