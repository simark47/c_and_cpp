#include <stdio.h>

int main()
{

    int x;

    int *a = &x;

    char y;

    char *b = &y;

    long long z;

    long long *c = &z;

    printf("%d %d %lld \n", a, b, c);

    printf("%d %d %lld \n", a + 1, b + 1, c + 1);
    printf("%d %d %lld \n", a - 1, b - 1, c - 1);
}

// For a+1, it will increment the address by the size of an int, which is typically 4 bytes on most systems.
// For b+1, it will increment the address by the size of a char, which is 1 byte.
// For c+1, it will increment the address by the size of a long long, which is typically 8 bytes on most systems.