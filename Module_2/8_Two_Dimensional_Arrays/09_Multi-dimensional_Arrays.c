#include <stdio.h>

int main()
{
    int my_array[2][3][4] = {

        {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, // First layer (depth 0)

        {{13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}} // Second layer (depth 1)

    };

    for (int depth = 0; depth < 2; depth++)
    {

        for (int row = 0; row < 3; row++)
        {

            for (int col = 0; col < 4; col++)
            {

                printf("%d ", my_array[depth][row][col]);
            }
            printf("\n");
        } printf("\n");
    }

    return 0;
}
