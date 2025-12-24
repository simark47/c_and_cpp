// https://www.codechef.com/problems/CHN09

#include <stdio.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
        char s[101];
        scanf("%s", s);
        int a=0;
        int b=0;
        for(int i=0;s[i]!='\0';i++){
            if(s[i]=='a'){a++;
            
        }
        if(s[i]=='b'){
            b++;
        }
    }
    int mini=(a>b)?b:a;
    printf("%d\n", mini);
        
        
    }
    return 0;
}