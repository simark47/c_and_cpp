// https://www.hackerrank.com/challenges/simple-array-sum/problem?isFullScreen=true
#include <stdio.h>
#include <stdlib.h>
int simpleArraySum(int ar_count, int *ar)
{
    int sum = 0;
    for (int i = 0; i < ar_count; i++)
    {
        sum += ar[i];
    }
    return sum;
}

int main()
{
    int ar_count = 5;
    int ar[] = {5, 6, 7, 8, 9};
    int result = simpleArraySum(ar_count, ar);

    printf("%d\n", result);
    return 0;
}
