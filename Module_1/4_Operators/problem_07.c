//https://www.hackerrank.com/challenges/game-with-cells/problem?

#include <stdio.h>
     
int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int drops =((n + 1) / 2) * ((m + 1) / 2);
    printf("%d\n", drops);

    return 0;
}



// return ((n+1)//2)*((m+1)//2) or return math.ceil(n/2)*math.ceil(m/2) in python
// return (parseInt((n+1)/2)*parseInt((m+1)/2)) or Math.ceil(n/2)*Math.ceil(m/2) in js
// return ((n+1)/2)*((m+1)/2); or  return(int)( Math.ceil(n/2.0) * Math.ceil(m/2.0)); in java
// return((n+1)/2) *((m+1)/2); or return(ceil(n/2.0) * ceil(m/2.0)); in c++
// return((n+1)/2) *((m+1)/2); or return((int)(ceil(n/2.0)*ceil(m/2.0))); in c

