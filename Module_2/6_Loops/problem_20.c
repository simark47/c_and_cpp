
#include <stdio.h>
#include <math.h>
int main(void)
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int N, R1, P1, S1, R2, P2, S2;
        scanf("%d", &N);
        scanf("%d %d %d", &R1, &P1, &S1);
        scanf("%d %d %d", &R2, &P2, &S2);
        int count1 = (R2 > P1) ? P1 : R2;
        int count2 = (P2 > S1) ? S1 : P2;
        int count3 = (S2 > R1) ? R1 : S2;
        int count = count1 + count2 + count3;
        if (count > ceil(N / 2.0))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
/*
Rock, Paper, Scissors: Can Jon Win?

Jon and his friend play N rounds of Rock, Paper, Scissors.

Jon plays R1 Rock, P1 Paper, S1 Scissors.

His friend plays R2 Rock, P2 Paper, S2 Scissors.

Jon wins if he wins more than ⌈N/2⌉ rounds. Draws do not count.

Rock beats Scissors, Paper beats Rock, Scissors beat Paper.

Input

First line: T, number of test cases.

Each test case:

Line 1: N

Line 2: R1 P1 S1

Line 3: R2 P2 S2

Output

Print "Yes" if Jon can win, else "No".*/