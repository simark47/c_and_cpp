// https://www.hackerrank.com/challenges/mini-max-sum/problem?isFullScreen=true
#include <stdio.h>
#include <limits.h>
void miniMaxSum(int arr_count, int *arr)
{
    int mini = INT_MAX;
    int maxi = INT_MIN;
    long sum = 0;
    for (int i = 0; i < arr_count; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
        sum += arr[i];
    }
    printf("%ld %ld", sum - maxi, sum - mini);
}

// --------------
int main()
{
    int ar[] = {4, 3, 9, 0, 4, 1};
    int ar_count = sizeof(ar) / sizeof(ar[0]);
    miniMaxSum(ar_count, ar);
    return 0;
}
