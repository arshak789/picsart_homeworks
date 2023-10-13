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

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    printf("display numbers: %d\n", sum);

    return 0;
}
