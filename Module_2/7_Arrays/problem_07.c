// https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true
#include <stdio.h>
int divisibleSumPairs(int n, int k, int ar_count, int *arr)
{

    int count = 0;

    for (int i = 0; i < ar_count; i++)
    {
        for (int j = i + 1; j < ar_count; j++)
        {
            if ((arr[i] + arr[j]) % k == 0)
            {
                count++;
            }
        }
    }
    return count;
}

// --------------
int main()
{
    int ar[] = {1, 3, 2, 6, 1, 2};
    int ar_count = sizeof(ar) / sizeof(ar[0]);
    int count=divisibleSumPairs(6, 3, ar_count, ar);
    printf("%d", count);
    return 0;
}
