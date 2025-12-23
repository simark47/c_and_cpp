#include <stdio.h>

int main()
{

    int n, y;

    scanf("%d %d", &n, &y);

    double sum = 0;
    double top = 1;
    double bottom = 1;

    for (int i = 0; i <= n; i++)
    {

        sum += top / bottom;
        top *= y;
        bottom *= (i + 1);

        
    }
    printf("%f", sum);
}
