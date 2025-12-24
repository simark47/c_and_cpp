// https://www.codechef.com/problems/CNOTE

#include <stdio.h>

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, y, k, n;
        scanf("%d %d %d %d", &x, &y, &k, &n);
        int neededpage = x - y;
        int poss = 0;
        while (n--)
        {
            int page;
            int cost;
            scanf("%d %d", &page, &cost);
            if (page >= neededpage && cost <= k)
            {
                poss = 1;
            }
        }
        if (poss)
        {
            printf("LuckyChef");
        }
        else
        {
            printf("UnluckyChef");
        }

        printf("\n");
    }

    return 0;
}