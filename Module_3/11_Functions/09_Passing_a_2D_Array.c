#include <stdio.h>
void func(int m, int n, int arr[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}
void func2(int m, int n, int *p)
{

    for (int i = 0; i < m * n; i++)
    {
        printf("%d ", p[i]);
    }
}
int main()
{

    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    func(3, 2, arr);
    printf("\n");
    func2(3, 2, &arr[0][0]);
    return 0;
}
