// https://www.codechef.com/problems/CHOPRT

#include <stdio.h>
int main(void) {
    // your code goes here
    int T;
    scanf("%d", &T);
    int a, b;
    while(T>0){
            scanf("%d %d", &a, &b);
            
            if(a>b){
                 printf(">\n");
            }else if(a==b){
                
                printf("=\n");
            }
            else{
                  printf("<\n");
            }
        
        T--;
    }
    return 0;
}