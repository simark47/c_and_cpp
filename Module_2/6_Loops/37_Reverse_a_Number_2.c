#include <stdio.h>

int main()
{

    int n = 4560892;
    int p = 1;
    int ans = 0;
    while (n > 0)
    {
        int r = n % 10;
        ans = ans * 10 + r;
        p /= 10;
        n /= 10;
    }

    printf("%d", ans);

    return 0;
}