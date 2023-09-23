#include <stdio.h>

int main() {
    char input[10];
    printf("Enter a string: ");
    scanf("%s", input);
    printf("Numbers in the input string: \n");
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] >= '0' && input[i] <= '9')
        {
            printf("%c\n", input[i]);
        }
    }
    return 0;
}
