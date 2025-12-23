// https://www.codechef.com/problems/EXOCODE7/
#include <stdio.h>
int main(void) {
    // your code goes here
    int n;
    scanf("%d", &n);
    double res=0;
    if(n<=50){
        res=0.50*n;
    }else if(n>50 && n<=150){
         res=0.50*(50)+0.75*(n-50);
    }else if(n>150 && n<=250){
         res=0.50*(50)+0.75*(100)+1.20*(n-150);
    }else if(n>250){
      res=0.50*(50)+0.75*(100)+1.20*(100)+1.50*(n-250);
    }
    res*=1.2;
    printf("%.2f", res);
    return 0;
}