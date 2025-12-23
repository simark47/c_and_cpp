// https://www.hackerrank.com/challenges/printing-pattern-2/problem?isFullScreen=true

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;
            int min = top;
            if (bottom < min)
            {
                min = bottom;
            }
            if (right < min)
            {
                min = right;
            }
            if (left < min)
            {
                min = left;
            }

            printf("%d ", n - min);
        }
        printf("\n");
    }
    return 0;
}