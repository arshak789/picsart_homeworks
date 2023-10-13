#include <stdio.h>
#include <time.h>

int fibonacci_iterative(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        int prev = 0, current = 1, temp;
        for (int i = 2; i <= n; ++i) {
            temp = current;
            current = prev + current;
            prev = temp;
        }
        return current;
    }
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("n cannot be negative.\n");
    } else {
        clock_t start = clock();
        
        int result = fibonacci_iterative(n);
        clock_t end = clock();
        double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Fibonacci %dth number is %d\n", n, result);
        printf("Time taken: %f seconds\n", cpu_time_used);
    }

    return 0;
}
