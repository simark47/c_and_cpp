#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int mini;
    if (m > n)
    {

        mini = n;
    }
    else
    {
        mini = m;
    }

    int i = 1;
    int gcd = i;
    while (i <= mini)
    {
        if (n % i == 0 && m % i == 0)
        {
            gcd = i;
        }

        i++;
    }
    printf("%d", gcd);
    return 0;
}
