// Let’s say person A will pass if he scores 50% and person B will pass if he scores 40%. We can solve this problem using multiple if-else.

#include <stdio.h>i

int main()
{

    int scoreA, scoreB;

    scanf("%d %d", &scoreA, &scoreB);

    if (scoreA >= 50)
    {

        printf("A passed\n");
    }
    else
    {

        printf("A failed\n");
    }

    if (scoreB >= 50)
    {

        printf("B passed\n");
    }
    else
    {

        printf("B failed\n");
    }

    return 0;
}