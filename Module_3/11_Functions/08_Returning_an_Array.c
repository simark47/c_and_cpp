#include <stdio.h>
int *getFirstFiveEven()
{
    static int arr[5];
    int i;
    int x = 2;
    for (int i = 0; i < 5; i++)
    {
        arr[i] = x;
        x += 2;
    }
    return arr;
}
int main()
{
    int *p;
    p = getFirstFiveEven();
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }
    return 0;
}
