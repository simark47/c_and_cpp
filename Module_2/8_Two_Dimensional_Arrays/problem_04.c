// https://www.codechef.com/problems/INSM06
#include <stdio.h>

int main() {
    int n;
    int m;
     scanf("%d", &n);
    scanf("%d", &m);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", & a[i][j]);
        }

    }
    while (m--) {
        int angle;
        scanf("%d", & angle);
        int k = (angle / 90) % 4;
        int b[n][n];

        if (k==0){
            for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 b[i][j]=a[i][j];
            }
            
        }
            
        }
        if (k==1){
                for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 b[i][j]=a[n-1-j][i];
            }
            
        }
        }
        if (k==2){
            
                for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 b[i][j]=a[n-i-1][n-1-j];
            }
            
        }
        }
        if (k==3){
              
                for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 b[i][j]=a[j][n-1-i];
            }
            
        }
        }
    
        
        
        // print b
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
        // new line of each tc
        printf("\n");
    }
    return 0;
}