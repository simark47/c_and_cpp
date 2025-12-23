#include <stdio.h>

int main()
{
    int a[] = {0, 1, 2, 3, 4, 5, 2, 6, 9, 8, 7, 10};
    int len = sizeof(a) / sizeof(a[0]);
    int sum = 6;

    for (int i = 0; i < len ; i++)
    {

        for (int j = 0; j < len; j++)
        {
            if (a[j] + a[i] == sum)
            {
                printf("%d + %d \n", a[i], a[j]);
            }
        }
    }

    return 0;
}
// 3 causes doubling, 0,6 and 6,0 cause duplication