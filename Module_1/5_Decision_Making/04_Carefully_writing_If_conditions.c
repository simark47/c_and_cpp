#include <stdio.h>

int main()
{

    int x;

    scanf("%d", &x);

    if (x > 70)
    {

        printf("Grade A");
    }

    if (x > 40 && x <= 70)
    { // adding additional condition so that it doesnot run repeatedly

        printf("Grade B");
    }

    if (x >= 0 && x <= 40)
    {

        printf("Grade C");
    }

    return 0;
}