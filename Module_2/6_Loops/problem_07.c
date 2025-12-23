// https://www.hackerrank.com/challenges/30-binary-numbers/problem?isFullScreen=true

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int temp = n;
    int count = 0;
    int max_count = count;
    int bina;
    int pow = 1;
    int res = 0;
    while (n > 0)
    {
        int rem = n % 2;
        res = rem * pow + res;
        pow *= 10;

        n /= 2;
    }

    printf("%d\n", res);

    n = temp;

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
            if (count > max_count)
            {
                max_count = count;
            }
        }
        else
        {
            count = 0;
        }

        n /= 2;
    }

    printf("%d", max_count);
}
