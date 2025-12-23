// https://www.codechef.com/problems/NUMCOMP
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a, b, n;

        scanf("%d %d %d", &a, &b, &n);
        if (n == 0)
        {
            printf("2\n");
        }

        if (n % 2 == 0)
        {
            if (abs(a) > abs(b))
            {
                printf("1\n");
            }
            else if (abs(a) < abs(b))
            {
                printf("2\n");
            }
            else if (abs(a) == abs(b))
            {
                printf("0\n");
            }
        }

        if (n % 2 == 1)
        {
            if (a > b)
            {
                printf("1\n");
            }
            else if (a < b)
            {
                printf("2\n");
            }
            else if (a == b)
            {
                printf("0\n");
            }
        }
    }
    return 0;
}