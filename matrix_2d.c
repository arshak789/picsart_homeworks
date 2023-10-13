#include <stdio.h>

int main() {
    int n;
    printf("enter size of n : ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("enter %dx%d matrix numbers.\n", n, n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("display numbers:\n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
