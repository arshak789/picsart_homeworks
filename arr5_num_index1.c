#include <stdio.h>

int main()
{
	const int size = 5;
	int arr[size];
	for(int i = 0; i < size; ++i) {
	printf("Enter numbers : ");
	scanf("%d", &arr[i]);
	}
	int num;
	printf("Print number you search :");
	scanf("%d", &num);
	for(int i = 0; i < size; ++i) {
		if(arr[i] == num) {
			printf("Index of found number is : %d\n", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
