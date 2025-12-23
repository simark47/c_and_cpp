// https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1?utm_source=geeksforgeeks&utm_medium=potd+solutions+7nov&utm_campaign=potd+solutions
#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum_lower = 0;
    int sum_upper = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i >= j)
            {
                sum_lower += a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (j >= i)
            {
                sum_upper += a[i][j];
            }
        }
    }

    printf("%d \n", sum_upper);
    printf("%d \n", sum_lower);
    return 0;
}
