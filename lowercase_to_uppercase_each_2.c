#include <stdio.h>

int main()
{
    char ch[] = "hello_world";
    for (int i = 0; ch[i] != '\0'; ++i)
    {
        if(i % 2 == 0 ) {
            if(ch[i] >= 'a' && ch[i] <= 'z') {
                ch[i] = ch[i] - 32;
            }
        }
    }
    printf("%s\n", ch);
    return 0;
}