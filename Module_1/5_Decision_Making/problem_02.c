// https://www.codechef.com/problems/GENE01

#include <stdio.h>

int main() {
	// your code goes here
	char first, second;
	scanf("%c %c", &first, &second);
	if(first=='R' || second=='R'){
	    printf("R");
	}else if(first=='B' || second=='B' ){
	    printf("B");
	}else{
	    printf("G");
	}

}
