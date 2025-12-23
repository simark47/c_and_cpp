// https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem?isFullScreen=true

#include <stdio.h>


int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum=0;
    while(n>0){
        int ld=n%10;
        sum+=ld;
        n/=10;
    }
    printf("%d", sum);

    return 0;
}