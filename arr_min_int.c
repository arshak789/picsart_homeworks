#include<stdio.h>

int main()
{
	const int size = 5;
	int arr[5];
	printf("Please enter five numbers.\n");
	for(int i = 0; i < size; ++i) {
		printf("enter number :");
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	for(int i = 1; i < size; ++i) {
		if(min > arr[i]) {
			min = arr[i];
		}
	}
	printf("Minimum value in this array : %d\n", min);
	return 0;

}
