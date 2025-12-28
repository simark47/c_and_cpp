#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {

        printf('%d', *arr);

        // arr++; // not valid
    }
    return 0;
}
// Constant pointer to a constant data: In this case, both the pointer itself and the data it points to are constant.

// const int* ptr;

// This declares ptr as a pointer to a constant integer. It means that you cannot modify the integer value through ptr, but you can change the address ptr points to.

// Constant pointer: In this case, only the pointer itself is constant, but you can modify the data it points to.

// int* const ptr;

// This declares ptr as a constant pointer to an integer. It means that you cannot change the address ptr points to, but you can modify the integer value through ptr.