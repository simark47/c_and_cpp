// https://www.codechef.com/problems/CIELRCPT

#include <stdio.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int sum=0;
        
       sum += n / 2048;
        n = n % 2048;

        while(n>0){
            int rem=n%2;
            sum+=rem;
            n/=2;
        }
        
        printf("%d\n", sum);
    }
    return 0;
}