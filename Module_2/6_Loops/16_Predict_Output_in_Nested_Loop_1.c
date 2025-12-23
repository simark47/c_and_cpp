#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
          int k=1;
          while (k<=j){
            printf("%d", k);
            k++;
          }
           printf("\n");
           j++;
        }
        printf("XXXXXXX\n");
        i++;
    }
    return 0;
}
