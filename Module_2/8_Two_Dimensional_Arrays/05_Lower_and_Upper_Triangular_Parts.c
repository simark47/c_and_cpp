#include <stdio.h>

int main()
{
    int row = 3;
    int column = 3;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("LOWER \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i >= j)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("UPPER \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            if (j >= i)
            {
                printf("%d ", a[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
