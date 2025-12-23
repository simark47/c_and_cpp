// https://www.codechef.com/problems/TRAPLOOP

#include <stdio.h>
int main(void)
{
    // your code goes here
    // exterior angle of polygon= 360/n
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x;
        scanf("%d", &x);
        printf("%d\n", 360 / (180 - (2 * x)));
    }

    return 0;
}
