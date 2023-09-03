#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[size];
	printf("Enter the numbers.\n");
	for(int i = 0; i < size; ++i) {
		printf("enter numbers :");
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	int min = arr[0];

	for(int i = 1; i < size; ++i) {
		if(max < arr[i]) {
			max = arr[i];
		} else if(min > arr[i]) {
			min = arr[i];
		}
	}

	int sum = max + min;
	printf("The sum of the minimum and maximum numbers is: %d\n", sum);
	return 0;
}
