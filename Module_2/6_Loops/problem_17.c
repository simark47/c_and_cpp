// https://www.codechef.com/problems/CMED01
#include <stdio.h>
int main(void) {
    // your code goes here
    int n;
    scanf("%d", &n);
    int sum_even=0;
    int odd_sum=0;
    
     for (int i =1;i<=n;i++){
      int j;
      scanf("%d", &j);
        if(i%2==0){
            sum_even+=j;
        }else{
        odd_sum+=j;
        }
    }
    int min=(sum_even>odd_sum)? odd_sum:sum_even;
    printf("%d", 2*min);
    return 0;
}