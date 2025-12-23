#include <stdio.h>

int main()
{
    // You can initialize the array directly at the point of declaration. This method is straightforward and concise.

    int matrix[3][3] = {{1, 2, 3},

                        {4, 5, 6},

                        {7, 8, 9}

    };

    // If you don't provide values for some elements during initialization of a 2D array in C, those elements will be implicitly initialized to 0 if the array is declared at global or static scope. However, if the array is declared locally (inside a function), the elements will contain garbage values.

    int array[3][3] = {{1, 2}, {4}, {7, 8}};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {

            printf("%d ", array[i][j]);
        }

        printf("\n");
    }

    return 0;
}
