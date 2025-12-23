#include <stdio.h>
#include <math.h>
int main()
{

    int n;

    scanf("%d", &n);

    if (n == 0)
    {

        printf("0\n");
    }

    
    int x=1;


    while (n/x>9){
    x *= 10; 
    }
        

    while (x > 0)
    {
       
        

        printf("%d\n", n / x);
         
          x/=10;
    }

    return 0;
}