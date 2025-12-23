
#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
    int maxi, prod;
    if (m > n)
    {

        maxi = m;
    }
    else
    {
        maxi = n;
    }
    prod = m * n;

    int i = maxi;
    int lcm = maxi;
    while (i <= prod)
    {
        if (i % n == 0 && i % m == 0)
        {
            lcm = i;
            break;
        }

        i++;
    }
    printf("%d", lcm);
    return 0;
}


// Improved Efficiency: By exiting the loop as soon as the LCM is found, the code avoids unnecessary iterations, making it slightly more efficient.
