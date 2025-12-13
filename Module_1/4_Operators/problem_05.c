//https://www.hackerrank.com/challenges/handshake/problem?
// n-1 + n-2 + n-3 +n-4 if n==5 which is sum of n-1 natural numbers

#include <stdio.h>
int main(void) {
    // your code goes here
    int n;
    scanf("%d", &n);
    printf("%ld", ((long)n*(n-1))/2);
    return 0;
}

// return n*(n-1)/2 in all languages