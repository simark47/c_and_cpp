#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        int fact = 1;
        while (ld > 0)
        {
            fact *= ld;
            ld--;
        }
        sum += fact;

        n /= 10;
    }
    if (sum == temp)
    {
        printf("%d is strong", temp);
    }
    else
    {
        printf("%d is not strong", temp);
    }

    return 0;
}
