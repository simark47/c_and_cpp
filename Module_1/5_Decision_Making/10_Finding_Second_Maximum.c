

#include <stdio.h>

int main()
{

    int x, y, z, sec_maximum;

    scanf("%d %d %d", &x, &y, &z);
    if (x > y)
    {
        if (y > z)
        {
            sec_maximum = y;
        }
        else
        {
            if (z > x)
            {
                sec_maximum = x;
            }
            else
            {
                sec_maximum = z;
            }
        }
    }
    else
    {
        if (z > y)

        {
            sec_maximum = y;
        }
        else
        {

            if (z > x)
            {
                sec_maximum = z;
            }
            else
            {
                sec_maximum = x;
            }
        }
    }

    printf("%d", sec_maximum);

    return 0;
}