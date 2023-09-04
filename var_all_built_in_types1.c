#include <stdio.h>
#include <stdbool.h>

int main() {
    bool is_true = 0;
    char c = '\0';
    short sh = 0;
    int i = 0;
    long in = 0;
    float f = 0;
    long double ld = 0;
    double d = 0;
    long long ll = 0;

    printf("PLEASE ENTER 1 or 0 : ");
    scanf("%d", &is_true);
    printf("THE VALUE OF BOOL IS : %d\n", is_true);

    printf("PLEASE ENTER CHAR : ");
    scanf(" %c", &c);
    printf("THE VALUE OF CHAR IS : %c\n", c);

    printf("PLEASE ENTER SHORT INT: ");
    scanf("%hd", &sh);
    printf("SHORT INT NUMBER IS : %hd\n", sh);

    printf("PLEASE ENTER INT: ");
    scanf("%d", &i);
    printf("THE VALUE OF INT IS : %d\n", i);

    printf("PLEASE ENTER LONG INT: ");
    scanf("%ld", &in);
    printf("THE VALUE OF LONG INT IS : %ld\n", in);

    printf("PLEASE ENTER FLOAT: ");
    scanf("%f", &f);
    printf("THE VALUE OF FLOAT IS : %f\n", f);

    printf("PLEASE ENTER LONG DOUBLE: ");
    scanf("%Lf", &ld);
    printf("THE VALUE OF LONG DOUBLE IS : %Lf\n", ld);

    printf("PLEASE ENTER DOUBLE: ");
    scanf("%lf", &d);
    printf("THE VALUE OF DOUBLE IS : %lf\n", d);

    printf("PLEASE ENTER LONG LONG INT: ");
    scanf("%lld", &ll);
    printf("THE VALUE OF LONG LONG INT IS : %lld\n", ll);

    return 0;
}
