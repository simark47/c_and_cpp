#include <stdio.h>

int main()
{
    int a[] = {1, 2, 3, 4, 2, 5, 2, 6, 9, 2, 8, 7, 2, 2, 2, 10};
    int len = sizeof(a) / sizeof(a[0]);
    int el = 2;
    int count;
    int isvisited[len];
    for (int i = 0; i < len; i++)
    {
        isvisited[i] = 0;
    }
    for (int i = 0; i < len; i++)
    {

        count = 1;

        if (isvisited[i] == 0)
        {
            for (int j = i + 1; j < len; j++)
            {
                if (a[j] == a[i])
                {
                    isvisited[j] = 1;
                    count++;
                }
            }
            printf("%d appears %d times\n", a[i], count);
        }
        else
        {
            continue;
        }
    }

    // way -2
    printf("way2-----\n");
    for (int i = 0; i < len; i++)
    {
        int isVisited = 0;
        int count = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                isVisited = 1;
            }
        }
        if (isVisited)
        {
            continue;
        }
        for (int k = i+1; k < len; k++)
        {
            if (a[k] == a[i])
            {
                count++;
            }
                }
        printf("%d appears %d times\n", a[i], count+1);
    }
    return 0;
}