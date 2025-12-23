// https://www.codechef.com/problems/CCOOK
#include <stdio.h>
int main(void) {
    // your code goes here
    int n;
    scanf("%d", &n);
    while(n--){
        int k=5;
        int sum=0;
        while(k--){
            int i;
            scanf("%d", &i);
            sum+=i;
        }
        switch(sum){
            case 0:{
                printf("Beginner\n");
                break;
            }case 1:{
                printf("Junior Developer\n");
                break;
            }
            case 2:{
                printf("Middle Developer\n");
                break;
            }case 3:{
                printf("Senior Developer\n");
                break;
            }
        case 4:{
                printf("Hacker\n");
                break;
            }case 5:{
                printf("Jeff Dean\n");
                break;
            }
        }
    }
    return 0;
}