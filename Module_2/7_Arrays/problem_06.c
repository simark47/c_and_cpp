// https://www.hackerrank.com/challenges/birthday-cake-candles/problem?isFullScreen=true
#include <stdio.h>
#include <limits.h>
int birthdayCakeCandles(int candles_count, int *candles)
{
    int tallest = INT_MIN;
    for (int i = 0; i < candles_count; i++)
    {
        if (candles[i] > tallest)
        {
            tallest = candles[i];
        }
    }
    int tal_count = 0;
    for (int i = 0; i < candles_count; i++)
    {
        if (candles[i] == tallest)
        {
            tal_count++;
        }
    }

    return tal_count;
}
int main()
{
    int ar[] = {3, 2, 1, 3};
    int ar_count = sizeof(ar) / sizeof(ar[0]);
    int count = birthdayCakeCandles(ar_count, ar);
    printf("%d", count);
    return 0;
}
