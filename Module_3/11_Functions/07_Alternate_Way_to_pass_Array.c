#include <stdio.h>

// Function to print the elements of an array

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    printf("Array before modification: ");

    printArray(arr, size); // Pass the array to the function

    return 0;
}