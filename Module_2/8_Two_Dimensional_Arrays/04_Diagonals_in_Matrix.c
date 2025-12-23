#include <stdio.h>

int main()
{
    int row = 3;
    int column = 3;
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("DIAGONAL 1 \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }
    printf("DIAGONAL 2\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if ((i + j) == 2)
            {
                printf("%d ", a[i][j]);
            }
        }
        printf("\n");
    }

    // way2
    printf("DIAGONAL 1 \n");
    for (int i = 0; i < 3; i++)
    {

        printf("%d \n", a[i][i]);
    }
    printf("DIAGONAL 2 \n");
    for (int i = 0; i < 3; i++)
    {

        printf("%d \n", a[i][3 - 1 - i]);
    }
    return 0;
}
