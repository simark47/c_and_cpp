#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 8, 5};
    int len=sizeof(a)/sizeof(a[0]);
    int b[len];
    for (int i = 0; i < len; i++)
    {
        b[i] = a[i];
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}

// 🔹 sizeof(arr) → total bytes of array
// 🔹 sizeof(arr[0]) → bytes of one element
// 🔹 Result → number of elements