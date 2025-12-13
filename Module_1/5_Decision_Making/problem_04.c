// https://www.hackerearth.com/problem/algorithm/odd-group-c9b8c5c6



#include <stdio.h>
int main(void) {
    // your code goes here
    long k;
    scanf("%ld",&k);
    long long kc=k*k*k;
    printf("%lld", kc);
 
    return 0;
}




/*
python

k=int(input())
print(k**3)

or  

k=int(input())
numbers_passed=((k-1)*k)//2
next_num=(numbers_passed*2)+1
sumt=0
while k>0:
    sumt+=next_num
    next_num+=2
    k-=1
print(sumt)
*/