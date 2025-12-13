
//https://www.hackerrank.com/challenges/lowest-triangle/problem?
#include <stdio.h>
#include <math.h>
int main(void) {
    // your code goes here
    int b,a;
    scanf("%d%d",&b,&a);
    int h=ceil(2*(double)a/b);
    printf("%d",h);
    // printf(((2*a)+b-1)/b);
    return 0;
}

// return((2*area +trianglebase-1)//trianglebase) or return(math.ceil(2*area/trianglebase)) in python
// return parseInt((2*area +trianglebase-1)/trianglebase) or return Math.ceil((2*area)/trianglebase) in js
// return  (int)Math.ceil((double)(2*area)/trianglebase); or return  (2*area+trianglebase-1)/trianglebase; in java
// return ceil((double)(2*area)/trianglebase);or return (2*area+trianglebase-1)/trianglebase; in c++
// return ceil((double)(2*area)/trianglebase);or return (2*area+trianglebase-1)/trianglebase; in c
