#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[size];
	printf("Please enter five numnbers.\n");
	for(int i = 0; i < size; ++i) {
		printf("Enter the number :");
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int index = 0;
	for(int i = 1; i < size; ++i) {
		if(min > arr[i]) {
			min = arr[i];
			index = i;		}
	}
  	printf("The minimum value is: %d, found at index: %d\n", min, index);
	return 0;
}
