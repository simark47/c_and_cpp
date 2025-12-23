#include <stdio.h>

int main()
{

    int n;

    printf("Enter the value of n: ");

    scanf("%d", &n);
printf("odds: ");
    int i = 1;

    while (i <= n)
    {

        printf("%d ", i);

        i += 2;
    }
    printf("\n");
    printf("even: ");

    i = 2;

    while (i <= n)
    {

        printf("%d ", i);

        i += 2;
    }

    printf("\n");

    return 0;
}