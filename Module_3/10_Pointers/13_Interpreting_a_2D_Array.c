#include <stdio.h>

int main()

{

    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d ", &a[i][j]);
        }

        printf("\n");
    }

    printf("%d %d %d \n", a[0], a[1], a[2]);

    printf("%d %d %d \n", &a[0], &a[1], &a[2]);

    printf("%d %d %d \n", a, a + 1, a + 2);

    printf("%d %d \n", *(a[0] + 5), *(a[2] - 4));

    return 0;
}