// https://www.codechef.com/problems/ADASCOOL
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, M;
        scanf("%d %d", &N, &M);

        if (N % 2 == 0 || M % 2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
