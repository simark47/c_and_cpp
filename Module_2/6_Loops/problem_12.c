// https://www.geeksforgeeks.org/dsa/check-if-sum-of-count-of-digits-of-array-elements-is-prime-or-not/?

#include <stdio.h>
int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t > 0)
    {
        long n;
        scanf("%ld", &n);
        long sum = 0;
        while (n > 0)
        {
            long long i;
            scanf("%lld", &i);
            long count = 1;
            while (i > 9)
            {
                count++;
                i /= 10;
            }

            sum += count;
            n--;
        }
        if (sum < 2)
        {
            printf("No\n");
            t--;
            continue;
        }
        int isprime = 1;
        for (int k = 2; k <= sqrt(sum); k++)
        {
            if (sum % k == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
        t--;
    }
    return 0;
}