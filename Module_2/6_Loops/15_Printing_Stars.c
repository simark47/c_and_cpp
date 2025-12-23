#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("*");
            j += 1;
        }
        printf("\n");
        i++;
    }
    return 0;
}
