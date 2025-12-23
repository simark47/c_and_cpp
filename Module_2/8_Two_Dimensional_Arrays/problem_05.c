// https://www.codechef.com/practice/course/matrices/MATRICES/problems/MATADD
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

int rows2, columns2;


    scanf("%d", &rows2);

    scanf("%d", &columns2);
    int matrix2[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }
    int resultant[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            resultant[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", resultant[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
Matrix Addition

Given two matrices A and B of size n × m, print their sum C = A + B.

Input

First line: two integers n and m

Next n lines: m integers each — matrix A

Next line: two integers n and m

Next n lines: m integers each — matrix B

Output

Print the sum matrix C (n × m)

Constraints

1 ≤ n, m ≤ 100

0 ≤ A[i][j], B[i][j] ≤ 100

Sample Input
2 2
1 2
3 4
2 2
4 3
2 1

Sample Output
5 5
5 5*/