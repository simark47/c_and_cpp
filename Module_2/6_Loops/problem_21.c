// https://www.codechef.com/problems/BRKBKS
#include <stdio.h>
int main(void) {
    // your code goes here
    
    int t;
    scanf("%d", &t);
    while(t--){
        int s, W1,W2,W3;
    scanf("%d %d %d %d",&s,  &W1,&W2,&W3);
    if(W1+W2+W3<=s){
        printf("1\n");
    }else if(W1+W2<=s){
        printf("2\n");
    }else if(W1<=s){
        if(W3+W2<=s){
        printf("2\n");}
        else{
        printf("3\n");}
    }
    }
    
    return 0;
}