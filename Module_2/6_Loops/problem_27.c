// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MAGICHF?
#include <stdio.h>

int main() {
	// your code goes here
	int T;
    scanf("%d", &T);

    while (T --) {

	  int N, X , S;
    scanf("%d %d %d", &N, &X, &S);
      int  a,b ,position;
      position =X;
    while(S>0){
        
      
         scanf("%d %d", &a, &b);
           if(position==a){
            position=b;
        } else if (position == b) {
            position = a;
        }
         
      
        
        S--;
    }
  printf("%d\n",position);

}}

