// https://atcoder.jp/contests/abc226/tasks/abc226_a?

#include <stdio.h>
int main(void) {
    // your code goes here
    float X;
    scanf("%f", &X);
    int rounded;
    if(X >= 0)
        rounded = (int)(X + 0.5);  
      
    printf("%d", rounded);
    return 0;
}