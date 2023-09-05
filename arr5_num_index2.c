#include <stdio.h>

int main() {
	const int size = 5;
	int arr[size];
	int num, found = 0;

	printf("Enter five numbers։\n");
	for (int i = 0; i < size; ++i) {
		printf("Print number %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Enter number for num: ");
	scanf("%d", &num);
	for (int i = 0; i < size; ++i) {
		if (arr[i] == num) {
			printf("Number you search found in: %d\n", i);
			found = 1;
			break;
		}
	}
	if (!found) {
		printf("-1\n");
	}

	return 0;
}
