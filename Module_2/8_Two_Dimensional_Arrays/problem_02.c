// https://www.codechef.com/problems/MAT_DIAG
#include <stdio.h>

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;

        scanf("%d", &n);
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        int diag1 = 0;
        int diag2 = 0;

        for (int i = 0; i < n; i++)
        {

            diag1 += a[i][i];
        }
        for (int i = 0; i < n; i++)
        {

            diag2 += a[i][n - i - 1];
        }

        printf("%d", abs(diag2 - diag1));
    }
}
