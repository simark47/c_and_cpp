// https://www.hackerrank.com/challenges/staircase/problem?isFullScreen=true

#include <stdio.h>

void staircase(int n) {
    int k=1;
    while(k<=n){
    
    int i=1;
    while(i<=n-k){
        printf(" ");
        i+=1;
    }
    int j=1;
    while(j<=k){
        printf("#");
        j+=1;
    }
    k++;
    printf("\n");
    }
}



int main()
{
    int n;
    scanf("%d", &n);

    staircase(n);

    return 0;
}
