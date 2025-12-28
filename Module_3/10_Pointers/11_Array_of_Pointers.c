#include <stdio.h>

int main()
{

    int *pointers[3]; // Array of 3 pointers to int

    int x = 1, y = 2, z = 3;

    // Assigning addresses of variables to pointers in the array

    pointers[0] = &x;

    pointers[1] = &y;

    pointers[2] = &z;

    // Printing values pointed to by each pointer in the array

    for (int i = 0; i < 3; i++)
    {

        printf("%d ", *pointers[i]); // Output: 1 2 3
    }

    printf("\n");

    // Printing addresses stored in the array of pointers
    // name of array is the pointer to first element of array
     printf("%d\n", sizeof(int*));

    for (int i = 0; i < 3; i++)
    {

        printf("%lld ", (pointers + i)); // Output: Addresses of pointers in the array
    }

    printf("\n");

    // Printing addresses stored in the array of pointers using dereference operator

    for (int i = 0; i < 3; i++)
    {

        printf("%lld ", *(pointers + i)); // Output: Addresses stored in the pointers
    }

    printf("\n");

    // Printing values pointed to by each pointer in the array using double indirection

    for (int i = 0; i < 3; i++)
    {

        printf("%d ", **(pointers + i)); // Output: 1 2 3
    }

    printf("\n");

    return 0;
}