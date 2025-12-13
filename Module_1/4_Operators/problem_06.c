// https://www.hackerrank.com/challenges/find-point/problem?
#include <stdio.h>
int main(void) {
    
    int px,py,qx,qy;
    scanf("%d%d%d%d",&px,&py,&qx,&qy);
    printf("%d %d",2*qx-px,2*qy-py);
    
    
    return 0;   
    
}
// return (2*qx-px, 2*qy-py) in python
// return {2*qx-px, 2*qy-py}; in cpp
// return [2*qx-px, 2*qy-py]; in js
// int* res = malloc(2 * sizeof(int));   
/* 
    res[0] = 2*qx - px;   
    res[1] = 2*qy - py;      
    *result_count=2;    
     return res; 
     in c
*/

// return Arrays.asList(2*qx-px, 2*qy-py); in java
// return new int[]{ 2*qx - px, 2*qy - py };
