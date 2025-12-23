// https://www.hackerrank.com/challenges/day-of-the-programmer/problem?isFullScreen=true

#include <stdio.h>
#include <stdlib.h>
char *dayOfProgrammer(int year)
{
    char *s = malloc(11 * sizeof(char));
    if (year < 1918)
    {

        if (year % 4 == 0)
        {
            sprintf(s, "12.09.%d", year);
        }
        else
        {
            sprintf(s, "13.09.%d", year);
        }
    }
    else if (year == 1918)
    {
        sprintf(s, "26.09.1918");
    }
    else if (year > 1918)
    {
        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    sprintf(s, "12.09.%d", year);
                }
                else
                {
                    sprintf(s, "13.09.%d", year);
                }
            }
            else
            {
                sprintf(s, "12.09.%d", year);
            }
        }
        else
        {
            sprintf(s, "13.09.%d", year);
        }
    }

    return s;
}

char *dayOfProgrammer(int year);

int main()
{
    int year;
    scanf("%d", &year);

    char *result = dayOfProgrammer(year);
    printf("%s\n", result);

    return 0;
}