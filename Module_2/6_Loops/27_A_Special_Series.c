#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int term = 0;

    long long int sum = 0;

    for (int i = 1; i <= n; i++)
    {

        term = term * 10 + 1; // Generating each term of the series

        //  printf("%d ",term);

        sum += term; // Adding the current term to the sum
    }

    printf("%lld\n", sum);

    return 0;
}