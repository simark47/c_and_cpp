// https://www.codechef.com/practice/course/matrices/MATRICES/problems/MATSEARCH
#include <stdio.h>

int main()
{

    int rows, columns;

    scanf("%d", &rows);

    scanf("%d", &columns);

    int matrix1[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    int key;
    int l = 0;
    scanf("%d", &key);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if (matrix1[i][0] <= key && key < matrix1[i + 1][0])
            {
                if (key == matrix1[i][j])
                {
                    l = 1;
                    break;
                }
            }
        }
    }
    if (l)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}
