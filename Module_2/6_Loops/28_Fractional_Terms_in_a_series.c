// we are given a series: 1, 1/2, 1/3, 1/4, 1/5,...........

// write program to print the sum of the series till nth term
#include <stdio.h>

int main() {

    int n;

    scanf("%d", &n);

 double sum, x=1.0;
 for (int i=1;i<=n;i++){
    sum+=x/i;
 }
 

    printf("%lf",sum);

    return 0;

}