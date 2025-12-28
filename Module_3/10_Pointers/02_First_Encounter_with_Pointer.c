#include <stdio.h>

int main()
{
    int nu = 10;
    int s = &nu;
    printf("%d\n", s);
    printf("%d\n", &nu);
    // we can access the address but not the value stored at it unless its a pointer

    long long num = 10;
    long long *ptr = &num; // ptr points to the address of num(datatypes should be same)
    printf("%lld\n", ptr);
    printf("%lld\n", *ptr); // de referencing operator

    return 0;
}
// Pointers in are variables that hold memory addresses of other variables. They provide a way to directly access and manipulate the value stored at a specific memory location.

// Pointers are declared using an asterisk (*) before the data type:   int *ptr;

// Pointers can be initialized with the address of a variable using the & operator:
