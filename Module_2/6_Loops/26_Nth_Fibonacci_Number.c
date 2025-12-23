// F(n)=F(n−1)+F(n−2)
#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    if (n <= 0)
    {

        printf("0\n");
    }
    else
    {

        int prev = 0, curr = 1;

        for (int i = 2; i <= n; i++)
        {

            int temp = prev + curr;

            prev = curr;

            curr = temp;
        
        }
        printf("%d\n", curr);
    }

    return 0;
}