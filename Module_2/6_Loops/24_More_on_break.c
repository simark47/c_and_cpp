#include <stdio.h>

int main()
{
    int i = 1;
    int n = 3;
    while (i <= n)
    {

        printf(" Inside i=%d\n", i);
        int j = 1;
        while (j <= n)
        {

            printf("j=%d \n", j);
            if (j == i)
            {
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}
