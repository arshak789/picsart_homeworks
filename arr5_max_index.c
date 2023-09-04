#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[5];
	printf("Please enter five numbers.\n");
	for(int i = 0; i < size; ++i) {
		printf("Enter number : ");
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	int index;
	for(int i = 0; i < size; ++i) {
		if(max < arr[i]) {
			max = arr[i];
			index = i;
		}
	}
	printf("Index of max number : %d\n", index);
	return 0;
}
