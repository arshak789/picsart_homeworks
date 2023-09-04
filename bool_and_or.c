#include <stdio.h>
#include <stdbool.h>

int main() {
    bool var1 = true;
    bool var2 = false;

    // Logical OR (||) operations
    printf("result of var1 || var2 is %d\n", var1 || var2);
    printf("result of var2 || var1 is %d\n", var2 || var1);
    printf("result of var1 || var1 is %d\n", var1 || var1);
    printf("result of var2 || var2 is %d\n", var2 || var2);

    // Logical AND (&&) operations
    printf("result of var1 && var2 is %d\n", var1 && var2);
    printf("result of var2 && var1 is %d\n", var2 && var1);
    printf("result of var1 && var1 is %d\n", var1 && var1);
    printf("result of var2 && var2 is %d\n", var2 && var2); 

    return 0;
}