#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("a is even\n");
        if (a > 10)
        {
            printf("a >10");
        }
        else
        {
            printf("a <=10");
        }
    }
    else
    {
        printf("a is odd\n");
        if (a > 10)
        {
            printf("a >10");
        }
        else
        {
            printf("a <=10");
        }
    }
}