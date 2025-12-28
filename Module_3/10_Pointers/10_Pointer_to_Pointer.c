#include <stdio.h>

int main()
{

    int a = 5;

    int *b = &a; // Pointer to int (b) stores the address of 'a'

    int **c = &b; // Pointer to pointer to int (c) stores the address of 'b'

    // Printing the values using different levels of indirection

    printf("%d %d %d \n", a, *b, **c); // Output: 5 5 5

    // Printing the addresses stored in pointers

    printf("%lld %lld %d", c, *c, **c); // Output: Address of b, Address of a, 5

    return 0;
}
