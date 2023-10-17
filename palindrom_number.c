#include <stdio.h>

int reverse(int num) {
    int reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return reverse;
}

int palindrome(int num) {
    int original = num;
    int reversed = reverse(num);
    return original == reversed;
}

int count_steps(int num) {
    int steps = 0;
    while (!palindrome(num)) {
        int reversed = reverse(num);
        num += reversed;
        steps++;
    }
    return steps;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int steps = count_steps(num);
    printf("Number of steps : %d\n", steps);
    return 0;
}
