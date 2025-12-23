#include <stdio.h>

int main()
{
    int a[] = {1, 3, 4, 2, 5, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int sum = 15;

    for (int i = 0; i < len - 2; i++)
    {

        for (int j = i + 1; j < len - 1; j++) // to avoid duplication and doubling
        {
            for (int k = j + 1; k < len; k++)
            {
                if (a[j] + a[i] + a[k] == sum)
                {
                    printf("%d + %d + %d\n", a[i], a[j], a[k]);
                }
            }
        }
    }

    return 0;
}