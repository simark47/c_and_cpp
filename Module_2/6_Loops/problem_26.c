// https://www.codechef.com/problems/EXOCODE6
#include <stdio.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    int j=1;
    while(j<=t){
        int n;
        scanf("%d", &n);
        int a=0;
        int sum=0;
        int count=0;
        while(sum<n){
            count++;
           a=1+(count-1)*9;
           sum+=a;
            
        }
        printf("Case #%d: %d\n",j,  count);
        j++;
    }
    return 0;
}