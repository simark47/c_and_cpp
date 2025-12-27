// https://www.codechef.com/problems/FRGTNLNG

#include <stdio.h>
#include <string.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
    int n, k;
    scanf("%d %d", &n, &k);
    char forgotten[n][6];
    for(int i=0;i<n;i++){
        scanf("%s", forgotten[i]);
    }
    
    int ans[n];
    for(int i=0;i<n;i++){
        
    ans[i]=0;
    }
    while(k--){
        int l;
        scanf("%d",&l);
        while(l--){
        char i[6];
        scanf("%s", i);
        for(int j=0;j<n;j++){
         if(!strcmp(forgotten[j],i)){
            ans[j]=1;
        }
    }}}
    
    for(int i=0;i<n;i++){
        
    if(ans[i]==1){
        printf("YES ");
        
    }else{
         printf("NO ");
    }
    }
    printf("\n");
    }
    return 0;
}