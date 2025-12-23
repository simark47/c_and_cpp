// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/CHN15A
#include <stdio.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d %d", &n, &k);
        int count=0;
        while(n--){
            int i;
            scanf("%d", &i);
            if((i+k)%7==0){
                count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}