#include <stdio.h>

int main()
{
    int a[2][3] = {{1, 1, 1},
                   {2, 2, 2}};

    int b[3][2] = {{1, 1},
                   {2, 2},
                   {3, 3}};
    int resultant[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            resultant[i][j] = 0;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                resultant[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", resultant[i][j]);
        }
        printf("\n");
    }
    return 0;
}
