#include <stdio.h>

int main()
{

    int n = 4560892;
    int p = 1;
    int temp = n;
    while (n > 10)
    {
        p *= 10;
        n /= 10;
    }
    int rev = 0;
    while (temp > 0)
    {
        int r = temp % 10;
        rev = rev + r * p;
        p /= 10;
        temp /= 10;
    }

    printf("%d", rev);

    return 0;
}