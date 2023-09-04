#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char name[50];

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter your name: ");
    scanf("%s", name);

    int i = 0;
    while (i < num) {
        printf("%s\n", name);
        i++;
    }

    return 0;
}