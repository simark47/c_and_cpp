#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int marks[N];
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }


    printf("\n%d ", sum);
    return 0;
}
