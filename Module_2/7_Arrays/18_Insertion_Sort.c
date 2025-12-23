#include <stdio.h>

int main()
{
    // 18_Insertion_Sort.c - sample C program
    int a[] = {5, 0, 2, 1, 6, 4, 3};
    int N = sizeof(a) / sizeof(a[0]);
    for (int i = 1; i < N; i++)
    {
        int j = i;
        while (j > 0 && a[j] < a[j - 1])
        {
            int temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
// compare the element with its previous one until it reaches its correct position and prev element is smaller

// assume first element is already sorted
// outer loops runs for all elements of array
// inner swaps the current element with its prev if its bigger
// inner goes inward by j--
