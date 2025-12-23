#include <stdio.h>

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 2, 6, 9, 8, 4, 2};
    int len = sizeof(a) / sizeof(a[0]);
    int sum = 6;

    for (int i = 0; i < len - 1; i++)
    {

        for (int j = i + 1; j < len; j++) // to avoid duplication and doubling
        {
            if (a[j] + a[i] == sum)
            {
                printf("%d + %d \n", a[i], a[j]);
            }
        }
    }

    return 0;
}