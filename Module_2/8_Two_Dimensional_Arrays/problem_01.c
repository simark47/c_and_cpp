//https://www.codechef.com/problems/GE04 
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--){
	    int m,n;
	    
	    scanf("%d %d", &m, &n);
	    int a[m][n];
	    for(int i=0;i<m;i++){
	        for(int j=0;j<n;j++){
	            scanf("%d", &a[i][j]);
	        }
	    }
	    int k,l;
	    
	    scanf("%d %d", &k, &l);
	    int b[k][l];
	    for(int i=0;i<k;i++){
	        for(int j=0;j<l;j++){
	            scanf("%d",&b[i][j]);
	        }
	    }
	    
	    if(n==k){
	        int c[m][l];
	        for(int i=0;i<m;i++){
	            for(int j=0;j<l;j++){
	              
	                
	                c[i][j]=0;
	            
	                
	            }
	        }
	        
	        for(int i=0;i<m;i++){
	            for(int j=0;j<l;j++){
	                for(int s=0;s<n;s++){
	                
	                c[i][j]+=a[i][s]*b[s][j];
	            }
	                
	            }
	        }
	        
	         for(int i=0;i<m;i++){
	            for(int j=0;j<l;j++){
	                
	                
	               printf("%d ", c[i][j]);
	            
	                
	            }
	        }
	        
	    }else{
	        printf("IMPOSSIBLE");
	    }
	    
	    
	    
	    printf("\n");
	    
	}
	

}

