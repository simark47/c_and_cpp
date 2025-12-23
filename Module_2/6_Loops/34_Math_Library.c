#include <stdio.h>

#include <math.h>

int main()
{

    double x = 4.3;

    printf("Ceil of %.1f is %.1f\n", x, ceil(x)); // Ceil of 4.3 is 5.0

    double y = 4.3;

    printf("Floor of %.1f is %.1f\n", y, floor(y));
    int z = 25;

    printf("sqrt of %d is %.0f\n", z, sqrt(z));

    int a = 5;

    printf("square of %d is %.0f", a, pow(a, 2));

    return 0;
}