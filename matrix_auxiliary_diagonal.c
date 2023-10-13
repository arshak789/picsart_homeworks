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
    int sum = 0;
    printf("Numbers of diagonal.");
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - 1 - i];
        printf("%d ", matrix[i][n - 1 - i]);
    }
    printf("\nSum of the diagonal: %d\n", sum);
    
    return 0;
}
