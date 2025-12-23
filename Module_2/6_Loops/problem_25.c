// https://www.codechef.com/problems/LADDU
#include <stdio.h>
#include <string.h>
int main()
{
    // your code goes here
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        char nationality[12];
        scanf("%d %s", &N, nationality);
        int points = 0;
        int rank;

        int severity;
        while (N--)
        {
            char activity[30];

            scanf("%s", activity);
            if (strcmp(activity, "CONTEST_WON") == 0)
            {
                int bonus = 0;
                scanf("%d", &rank);
                if (rank < 20)
                {
                    bonus = 20 - rank;
                }
                points += 300 + bonus;
            }

            if (strcmp(activity, "BUG_FOUND") == 0)
            {
                scanf("%d", &severity);
                points += severity;
            }
            if (strcmp(activity, "TOP_CONTRIBUTOR") == 0)
            {

                points += 300;
            }
            if (strcmp(activity, "CONTEST_HOSTED") == 0)
            {

                points += 50;
            }
        }
        if (strcmp(nationality, "INDIAN") == 0)
        {
            printf("%d\n", points / 200);
        }
        else
        {
            printf("%d\n", points / 400);
        }
    }
}
