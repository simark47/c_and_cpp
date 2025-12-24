// https://www.codechef.com/problems/SALARY

#include <stdio.h>
#include <limits.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
    int n;
    scanf("%d", &n);
    int a[n];
   
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        
        scanf("%d", &a[i]);
         if(a[i]<min){
            min=a[i];
        }
        
    }
    int count=0;
    for(int i=0;i<n;i++){
        
      count += (a[i] - min);
        
    }
    
    printf("%d\n", count);}
    return 0;
}