// https://www.codechef.com/problems/HS08TEST

#include <stdio.h>
int main(void) {
    // your code goes here
int x;
float y;
scanf("%d %f", &x, &y);

if(x%5==0 && x+0.50<=y){
    printf("%.2f", y-x-0.50);}
else{
       printf("%.2f", y);
    
}
    return 0;
}
