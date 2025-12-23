// https://www.hackerrank.com/challenges/plus-minus/problem?isFullScreen=true
#include <stdio.h>
void plusMinus(int arr_count, int *arr)
{
    int countz = 0;
    int countn = 0;
    int countp = 0;
    for (int i = 0; i < arr_count; i++)
    {

        if (arr[i] == 0)
        {
            countz++;
        }
        if (arr[i] > 0)
        {
            countp++;
        }
        if (arr[i] < 0)
        {
            countn++;
        }
    }
    printf("%f\n", (float)countp / arr_count);
    printf("%f\n", (float)countn / arr_count);
    printf("%f\n", (float)countz / arr_count);
}

int main()
{
    
    int ar[] = {-4, 3, -9, 0, 4, 1};
    int ar_count = sizeof(ar) / sizeof(ar[0]);
    plusMinus(ar_count, ar);

    return 0;
}
