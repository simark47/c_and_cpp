#include <stdio.h>

int main() {
    int c=0 ; int i=0;
    while(c<5){
        printf("inside loop");
        if(i%2==0){
            c++;
        }else{
            c--;
        }
        i++;
    }
    return 0;
}
