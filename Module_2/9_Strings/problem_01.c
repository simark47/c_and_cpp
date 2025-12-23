// https://www.hackerrank.com/challenges/30-review-loop/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    scanf("%d", &t);
    while(t--){
        char s[10000];
        char even[5001];
        char odd[5001];
        
        scanf("%s", s);
        int e=0,o=0;
        for (int i = 0; i < strlen(s); i++) {
            if (i % 2 == 0) {
                even[e++] = s[i];  // even index
            } else {
                odd[o++] = s[i];   // odd index
            }
        }
        even[e] = '\0';
        odd[o] = '\0';
        printf("%s %s\n", even, odd);
    }    
    return 0;
    
}
