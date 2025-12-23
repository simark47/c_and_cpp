#include <stdio.h>

int main()
{

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(a) / sizeof(a[0]);
    int first = 0;
    int last = len - 1;
    for (int i = 0; i < len / 2; i++) // or first<=last
    {
        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        first++;
        last--;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nWay 2\n");
    first = 0;
    last = len - 1;
    while (first <= last) // or first<=last
    {
        int temp = a[first];
        a[first] = a[last];
        a[last] = temp;
        first++;
        last--;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nWay3\n");
    for (int i = 0; i < len / 2; i++)
    {
        int temp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = temp;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}