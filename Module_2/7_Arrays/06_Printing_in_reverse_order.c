#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 5, 8, 5};
    int len = sizeof(a) / sizeof(a[0]);

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

// starting index is important