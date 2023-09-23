#include <stdio.h>

int main()
{
    // Հայտարարեք char տիպի զանգված և սկզբնավորեք այն “Hello World” արտահայտությամբ:
    char hello[] = "Hello World";
    // a. Գտեք զանգվածի երկարությունը և տպեք էկրանին։
    printf("Size of array is : %ld\n", sizeof(hello) / sizeof(char));
    // b. Գտեք զանգվածում “o” տառի առաջին հայտնվելու ինդեքսը և տպեք այն էկրանին:
    for (int i = 0; i < sizeof(hello) / sizeof(char); ++i)
    {
        if (hello[i] == 'o' || hello[i] == 'O')
        {
            printf("Index of first 'o' is : %d\n", i);
            break;
        }
    }
    // c. Զանգվածում բոլոր “l” փոխարինեք “z” տառով:
    for (int j = 0; j < sizeof(hello) / sizeof(char); ++j)
    {
        if (hello[j] == 'l')
        {
            hello[j] = 'z';
        }
    }
    printf("Word is now look like this --> %s\n", hello);
    // d. Զանգվածի բոլոր սիմվոլները դարձրեք մեծատառ և տպեք այն էկրանին:
    for (int i = 0; i < sizeof(hello) / sizeof(char); ++i)
    {
        if (hello[i] >= 'a' && hello[i] <= 'z')
        {
            hello[i] = hello[i] - 32;
        }
    }
    printf("Uppercase : %s\n", hello);
    // e. Հաշվեք և էկրանին տպեք զանգվածի տողի բացատների քանակը:
    int sum = 0;
    for (int i = 0; i < sizeof(hello) / sizeof(char); ++i)
    {
        if (hello[i] == ' ')
        {
            ++sum;
        }
    }
    printf("Count of spaces is : %d\n", sum);
    // f. Գտեք զանգվածում “o” տառի վերջին հայտնվելու ինդեքսը և տպեք այն էկրանին:
    int lastIndex = 0;
    for (int i = 0; hello[i] != '\0'; ++i)
    {
        if (hello[i] == 'o' || hello[i] == 'O')
        {
            lastIndex = i;
        }
    }
    printf("Last index of 'o' is : %d\n", lastIndex);
    //g. Հաշվեք և էկրանին տպեք զանգվածի տողի մեծատառերի քանակը:
    int count = 0;
    for (int i = 0; hello[i] != '\0'; ++i)
    {
        if (hello[i] >= 'A' && hello[i] <= 'Z')
        {
            ++count;
        }
    }
    printf("Count of uppercases in word is : %d\n", count);
    return 0;
}