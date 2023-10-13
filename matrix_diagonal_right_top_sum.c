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
    int sum;
    printf("Numbers :\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if(i < j) {
                printf("%d ", matrix[i][j]);
                sum += matrix[i][j];
            }
        }
    }
    printf("Sum of numbers is %d\n", sum);
    return 0;
}
