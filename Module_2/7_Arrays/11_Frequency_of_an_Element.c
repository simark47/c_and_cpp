#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 2, 5, 2, 6, 9, 2, 8, 7, 2, 2, 2, 10};
    int len = sizeof(a) / sizeof(a[0]);
    int el = 2;
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == el)
        {
            count++;
        }
    }
    printf("%d appears %d times", el, count);
    return 0;
}
