#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[size];
	printf("enter numbers.\n");
	for(int i = 0; i < size; ++i) {
		printf("print number : ");
		scanf("%d", &arr[i]);
	}
	for(int i = size - 1; i >= 0; --i) {
		printf("REVERS ARR : %d\n", arr[i]);
	}
	return 0;
}
