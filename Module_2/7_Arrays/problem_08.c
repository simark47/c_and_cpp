// https://www.codechef.com/problems/KTTABLE

#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int n;
	    scanf("%d", &n);
	    int time[n];
	    int timereq[n];
	    
	   for(int i=0;i<n;i++){
	      scanf("%d", &time[i]); 
	   }
	   for(int i=0;i<n;i++){
	      scanf("%d", &timereq[i]); 
	   }
	   int count=0;
	   if(time[0]>=timereq[0]){
	       count++;
	   }
	   for(int i=1;i<n;i++){
	        if((time[i]-time[i-1])>=timereq[i]){
	            count++;
	   }
	   
	  
	} printf("%d\n", count);

}

return 0;}