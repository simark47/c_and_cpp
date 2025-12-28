#include <stdio.h>

int main()

{

    int *pointers[3];

    int x[3] = {1, 2, 3};

    int y[3] = {4, 5, 6};

    int z[3] = {7, 8, 9};

    pointers[0] = x;

    pointers[1] = y;

    pointers[2] = z;

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d ", *(*(pointers + i) + j));
        }

        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("%d ", pointers[i][j]);
        }

        printf("\n");
    }

    return 0;
}