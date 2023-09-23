#include <stdio.h>

int prime(int);

int main() {
    int number;
    printf("enter number: ");
    scanf("%d", &number);
    int result = prime(number);
    if (result == 1) {
        printf("%d is prime number. %d\n", number, result);
    } else {
        printf("%d is composite number. %d\n", number, result);
    }

    return 0;
}

int prime(int n) {
    if (n <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
    return 1;
}