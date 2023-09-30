#include <stdio.h>

int main()
{
	const int row_size = 3;
	const int col_size = 3;
	int matrix[row_size][col_size];
	printf("Enter numbers for matrix.\n");
	for (int i = 0; i < row_size; ++i) {
		for (int j = 0; j < col_size; ++j) {
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("Entered numbers for matrix.\n");
	for (int i = 0; i < row_size; ++i) {
		for (int j = 0; j < col_size; ++j) {
			printf("%d", matrix[i][j]);
		}
		printf("\n");
	}
	int sum = 0;
	int count = 0;
	printf("Arithmetic average of matrix numbers is : ");
	for (int i = 0; i < row_size; ++i) {
		for (int j = 0; j < col_size; ++j) {
			sum += matrix[i][j];
			++count;
		}
	}
	int result = sum / count;
	printf("%d\n", result);
	return 0;
}
