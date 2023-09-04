#include <stdio.h>

int main() {
    char c = 'a';
    int a = 5;
    short b = 25;
    float f = 45.34;
    long double ld = 21212121212121212;
    double d = 23.0;
    long l = 123456;
    long long ll = 1234567890;
    signed int si = -4;
    unsigned int ui = 7;

    printf("CHAR : '%c' \n", c);
    printf("INT : %d \n", a);
    printf("SHORT : INT %d \n", b);
    printf("FLOAT : %f \n", f);
    printf("LONG DOUBLE : %Lf\n", ld);
    printf("DOUBLE : %lf \n", d);
    printf("LONG INT : %ld \n", l);
    printf("LONG LONG INT : %lld \n", ll);
    printf("SIGNED INT : %d \n", si);
    printf("UNSIGNED INT : %u \n", ui);

    return 0;
}




















