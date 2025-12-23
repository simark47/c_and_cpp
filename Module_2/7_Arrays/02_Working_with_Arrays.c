#include <stdio.h>

int main()
{
    int marks[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}
