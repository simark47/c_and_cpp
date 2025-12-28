#include <stdio.h>

// Function to print the elements of an array

void printArray(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]); //*(arr+i) or * arr and arr++
    }

    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printArray(arr, size); // Pass the array to the function
    printArray(&arr[0], size);
    return 0;
}