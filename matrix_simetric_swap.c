#include <stdio.h>

int main() {
    const int row_size = 3;
    const int column_size = 3;
    int arr[row_size];
    int matrix[row_size][column_size];
    printf("Enter numbers:\n");
    for (int i = 0; i < row_size; ++i) {
        for (int j = 0; j < column_size; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered numbers before symetric change:\n");
    for (int i = 0; i < row_size; ++i) {
        for (int j = 0; j < column_size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int tmp = 0; 
    for (int i = 0; i < row_size ; ++i) {
        for (int j = i + 1; j < column_size; ++j) {
                tmp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = tmp;
        }
    }
    printf("Matrix has been changed to symmetric.\n");
    for (int i = 0; i < row_size; ++i) {
        for (int j = 0; j < column_size; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}