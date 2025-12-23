#include <stdio.h>

int main()
{

    int n;

    int count = 0;

    printf("Enter a number: ");

    scanf("%d", &n);

    int i = 1;

    while (i <= n)
    {

        if (n % i == 0)
        {

            count++;
        }

        i++;
    }

    if (count <= 2)
    {

        printf("%d is a prime number.\n", n);
    }
    else
    {

        printf("%d is not a prime number.\n", n);
    }

    return 0;
}