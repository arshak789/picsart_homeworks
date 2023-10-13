#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of n:\n");
    scanf("%d", &n);
    int matrix[n][n];
    
    printf("Enter %dx%d matrix numbers:\n", n, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Display numbers:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int tmp = 0;
    for (int i = 0; i < n; ++i) {
        tmp = matrix[i][i];
        matrix[i][i] = matrix[i][n - 1 - i];
        matrix[i][n - 1 - i] = tmp;
    }

    printf("Swaped diagonals:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
