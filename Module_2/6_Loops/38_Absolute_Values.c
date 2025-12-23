#include <stdio.h>

#include <math.h>
#include <stdlib.h>
// abs():- It is part of the stdlib header file.

int main()
{

    int x = 23;
    int y = 43;

    printf("%d\n", abs(x - y));
    float c = -35.45;

    printf("%.2f", fabs(c));

    return 0;
}