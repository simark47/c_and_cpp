#include <stdio.h>

int main()
{

    int a = 7;

    int b = a + 3;
    int c = a;

    printf("%d\n", a > b);
    printf("%d\n", a >= c);
    printf("%d\n", a < b);
    printf("%d\n", b >= c);
    printf("%d\n", a == b);
    printf("%d\n", a != b);
    return 0;
}