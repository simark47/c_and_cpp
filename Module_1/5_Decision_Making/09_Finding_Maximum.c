// Another problem is counting the number of elements which is equal to the maximum element.

#include <stdio.h>

int main()
{

    int x, y, z, maximum;

    scanf("%d %d %d", &x, &y, &z);

    if (x >= y && x >= z)
    {

        maximum = x;
    }
    else if (y >= x && y >= z)
    {

        maximum = y;
    }
    else
    {

        maximum = z;
    }
    printf("%d", maximum);
    int count = 0;

    if (maximum == x)

        count++;

    if (maximum == y)

        count++;

    if (maximum == z)

        count++;

    printf("% d", count);

    return 0;
}