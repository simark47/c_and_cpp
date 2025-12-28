#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50};

    // Printing the base address

    printf("%lld \n", arr);
    printf("%lld \n", &arr[0]);

    for (int i = 0; i < 5; i++)
    {

        printf("%d ", *(arr + i));
    }
    return 0;
}
// The base address of an array refers to the memory address of its first element. This address can be obtained by taking the address of the array's first element. It is also stored in array name
// name of the array is the pointer to first element of array
// When i is 0, *(arr + 0) dereferences the memory address of the first element of arr, which is 1.
// When i is 1, *(arr + 1) dereferences the memory address of the second element of arr, which is 2.