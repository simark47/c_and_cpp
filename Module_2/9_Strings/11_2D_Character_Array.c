#include <stdio.h>

int main()
{


    char matrix[3][50] = {{'m', 'i', 'k', 'e'}, "jon", "taylor"};

    

    printf("Elements of the 2D array:\n");

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 10; j++)
        {

            printf("%c", matrix[i][j]);
        }

        printf("\n");
    }


    

    char matrix2[3][50]; 

    printf("Enter three strings (up to 49 characters each):\n");

    for (int i = 0; i < 3; i++)
    {

        scanf("%s", matrix2[i]);
    }


    printf("\nStrings stored in the 2D array:\n");

    for (int i = 0; i < 3; i++)
    {

        printf("%s\n", matrix2[i]);
    }

    return 0;
}