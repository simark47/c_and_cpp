#include <stdio.h>

int main()
{

    int z = 9;

    int *y = &z;

    *y = 10;

    printf("%d\n", z);
    int x = 9;

    int *a = &x;

    int *b = &x;

    int *c = &x;

    printf("%d %d %d %d \n", x, *a, *b, *c);

    *c = 11;

    printf("%d %d %d %d \n", x, *a, *b, *c);
}
