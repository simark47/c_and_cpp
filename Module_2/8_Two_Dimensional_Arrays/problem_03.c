// https://www.codechef.com/problems/ESPR17A
#include <stdio.h>

int main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);

    int a[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (rows == columns)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = i; j < columns; j++)
            {
                int temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        int b[columns][rows];

        for (int i = 0; i < columns; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                b[i][j] = a[j][i];
            }
        }
        for (int i = 0; i < columns; i++)
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}