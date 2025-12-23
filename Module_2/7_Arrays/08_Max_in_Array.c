#include <stdio.h>
#include <limits.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int max = INT_MIN;

    for (int i = 0; i < len; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }

    printf("%d \n", max);
    int min = INT_MAX;
    for (int i = 0; i < len; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }

    printf("%d ", min);

    return 0;
}
