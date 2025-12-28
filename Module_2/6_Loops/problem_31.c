// https://www.codechef.com/COOK102A/problems/ADAKNG
#include <stdio.h>
int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int r, c, k;
        int count = 0;
        scanf("%d %d %d", &r, &c, &k);
        for (int i = 1; i <= 8; i++)
        { // rows
            for (int j = 1; j <= 8; j++)
            { // columns
                if (abs(i - r) <= k && abs(j - c) <= k)
                {
                    
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
    return 0;
}