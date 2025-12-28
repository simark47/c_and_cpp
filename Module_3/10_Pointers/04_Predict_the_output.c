#include <stdio.h>

int main()
{

    int x = 5, y = 6;

    int *z = &x;

    printf("%d %d %d %ld %d\n", x, y, *z, z, *(&x));

    *z = 0;

    printf("%d %d %d %d %d", x, y, *z, z, *(&x));
}