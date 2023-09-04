#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[5];
	printf("You must enter five numbers!\n");
	for(int i = 0; i < size; ++i) {
	printf("Enter number : ");
	scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for(int i = 1; i < size; ++i) {
		if(max < arr[i]) {
			max = arr[i];
		}	
	}

	printf("Greatest number of this array : %d\n", max);
	return 0;
}
