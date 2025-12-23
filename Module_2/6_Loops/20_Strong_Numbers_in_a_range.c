#include <stdio.h>

int main()
{
    int r;
    scanf("%d", &r);

    int s = 1;

    while (s <= r)
    {

        int n = s;
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
            printf("%d ", temp);
        }

        s++;
    }
    return 0;
}
