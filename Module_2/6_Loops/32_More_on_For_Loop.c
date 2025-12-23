#include <stdio.h>

int main() {

    int i=0;

    for (; i <= 5; i++) {

        printf("%d\n",i);

    }
    printf("-----------\n");
    

     i=0;

    for (; i <= 5;) {

        printf("%d\n",i);

        i++;

    }
    printf("-----------\n");
    i=0;

    for (; ;) {

        printf("%d\n",i);

        i++;

        if(i>5){

            break;

        }}

 printf("-----------\n");

  
    int k,j;

    for (k=0, j=1; k<5 && j<5 ;  k++, j+2) {

        printf("%d %d\n", k, j);

    }

    return 0;

}
