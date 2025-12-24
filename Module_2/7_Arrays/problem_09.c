// https://www.codechef.com/problems/NUTLOOP

#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int a[n];
	   
	    
	   for(int i=0;i<n;i++){
	      scanf("%d", &a[i]); 
	   }
	   
	
	    int b[n];
	   
	    
	   for(int i=0;i<n;i++){
	      scanf("%d", &b[i]); 
	   }
	  
	  int c[n];
	  for (int i=0;i<n;i++){
	      int e=(a[i]*10)+b[i];
	      int d=(b[i]*10)+a[i];
	      c[i]=e>d?e:d;
	  }
	    for (int i=0;i<n;i++){
	     
	     printf("%d ",  c[i]);
	     
	  }
	  printf("\n");
	} 



return 0;}