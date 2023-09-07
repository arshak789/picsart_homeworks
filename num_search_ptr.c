#include <stdio.h>

int main()
{
    const int size = 10;
    int arr[size];
    int* ptr = arr;
    for(int i = 0; i < size; ++i) {
        printf("Print number : ");
        scanf("%d", ptr + i);
    }
    int num, found = 0;
    printf("Enter number for search : ");
    scanf("%d", &num);
    for (int i = 0; i < size; ++i) {
        if(*(ptr + i) == num) {
            printf("Number you search found in index[%d]\n", i);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("-1\n");
    }
    
    return 0;
}