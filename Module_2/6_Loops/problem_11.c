// https://codeforces.com/problemset/problem/791/A

#include <stdio.h>
int main(void) {
    // your code goes here
    int r, s;
    scanf("%d %d", &r, &s);
    int count=0;
    while(!(r>s)){
        r*=3;
        s*=2;
        count++;
        
    }
    printf("%d", count);
    return 0;
}