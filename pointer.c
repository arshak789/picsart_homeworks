#include <stdio.h>

int main()
{
	const int size = 4;
	int arr[size];
	for(int i = 0; i < size; ++i) {
		printf("enter number %d : ", i + 1);
		scanf("%d", &arr[i]);
	}
	int* n = arr;
	for(int i = 0; i < size; ++i) {
		printf("%d\n", *(n + i));
	}

	return 0;
}
