// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/DECINC?
#include <stdio.h>
int main(void) {
    // your code goes here
    int N;
    scanf("%d", &N);
    if(N%4==0){
        printf("%d", ++N);
        
    }else{
               printf("%d",--N);
    }
    return 0;
}