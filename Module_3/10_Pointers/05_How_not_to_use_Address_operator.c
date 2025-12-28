#include <stdio.h>

int main()
{
    // int *x = &12;

    // In C, you can't directly assign the address of a constant value like 12 to a pointer variable. Instead, you need to assign the address of a variable holding that value.
    int *x = 1005; // this is not valid;

    // Assigning addresses directly in C, especially integer values, is generally not recommended because it can lead to various issues and undefined behavior.
    return 0;
}
