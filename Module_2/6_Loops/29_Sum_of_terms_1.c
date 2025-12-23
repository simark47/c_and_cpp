#include <stdio.h>

int main()
{

    int n, y;

    scanf("%d %d", &n, &y);

    double sumi = 0;
    for (int i = 0; i <= n; i++)
    {

        double prod=1;
        for (int j = 1; j <= i; j++)
        {
            prod*=y;   
        }
       

        int fact = 1;
        for (int k = 1; k <= i; k++)
        {
            fact *= k;
        }
        

      
        sumi += prod/ fact;
        
    }
printf("%f\n",  sumi);
    return 0;
}