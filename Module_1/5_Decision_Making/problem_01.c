// https://www.hackerrank.com/challenges/compare-the-triplets/problem?isFullScreen=true

#include <stdio.h>
int main(void)
{
    // your code goes here

    int a0, a1, a2, b0, b1, b2;
    scanf("%d %d %d", &a0, &a1, &a2);
    scanf("%d %d %d", &b0, &b1, &b2);
    int count_a = 0;
    int count_b = 0;
    if (a0 > b0)
    {
        count_a++;
    }
    else if (a0 < b0)
    {
        count_b++;
    }
    if (a1 > b1)
    {
        count_a++;
    }
    else if (a1 < b1)
    {
        count_b++;
    }

    if (a2 > b2)
    {
        count_a++;
    }
    else if (a2 < b2)
    {
        count_b++;
    }

    printf("%d %d", count_a, count_b);
}



/*int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
  
 a_count=0;
 b_count=0;
   if(a[0]>b[0]){
       a_count++;
   }else if(a[0]<b[0]){
       b_count++;
   }
   if(a[1]>b[1]){
       a_count++;
   }else if(a[1]<b[1]){
       b_count++;
   }
   
   if(a[2]>b[2]){
       a_count++;
   }else if(a[2]<b[2]){
       b_count++;
   }
  int* res = malloc(2 * sizeof(int));  
   res[0]=a_count;
   res[1]=b_count;
  * result_count=2;
  
  return res;
}

*/