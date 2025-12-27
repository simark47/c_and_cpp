// https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/COPS
// https://www.codechef.com/COOK60/problems/COPS

#include <stdio.h>
int main(void) {
    // your code goes here
    int t;
    scanf("%d", &t);
    while(t--){
    int m , x, y ;
    scanf("%d %d %d", &m, &x, &y);
    int houses[100];
    for(int i=0;i<100;i++){
        houses[i]=1;
    }
    int cops[m];
    for(int i=0;i<m;i++)
        {
        scanf("%d", &cops[i]);
       
        }
    
int count=0;
    for(int i=1;i<=100;i++){
      int safe=1;
      int dist=x*y;
       for(int j=0;j<m;j++){
         int left=cops[j]-dist;
         int right=cops[j]+dist;
         if(i>=left &&i<=right){
           safe=0;
         }
       }
       if(safe){
         count++;
       }
       
    }
    printf("%d\n", count);}
    return 0;
}
// -------------

// #include <stdio.h>
// int main(void) {
//     int m , x, y ;
//     scanf("%d %d %d", &m, &x, &y);
//     int houses[100];
//     for(int i=0;i<100;i++){
//         houses[i]=1;
//     }
//     while (m>0){
//         int h;
//         scanf("%d", &h);
//         int start = h - (x*y) - 1;
//         int end   = h + (x*y) - 1;

//         if(start < 0) start = 0;
//         if(end > 99) end = 99;

//     for(int i = start; i <= end; i++){
//     houses[i] = 0;
//     }

    
//         m-=1;
//     }
//     int count=0;
//     for(int i=0;i<100;i++){
//         if(houses[i]==1){
//             count++;
//         }
//     }
//     printf("%d", count);
//     return 0;
// }