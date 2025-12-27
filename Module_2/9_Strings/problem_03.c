// https://www.hackerrank.com/challenges/mars-exploration/problem?isFullScreen=true
#include <stdio.h>
#include<string.h>
int marsExploration(char *s)
{
    int messages = strlen(s) / 3;
    int newlen = (3 * messages) + 1;
    char exactmsg[newlen];
    int count = 0;
    for (int i = 0; i < messages; i++)
    {
        if (s[3 * i] != 'S')
        {
            count++;
        }
        if (s[3 * i + 1] != 'O')
        {
            count++;
        }
        if (s[3 * i + 2] != 'S')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    // problem_03.c - sample C program
    printf("%d", marsExploration("SOSSPSSQSSOR"));
    return 0;
}
