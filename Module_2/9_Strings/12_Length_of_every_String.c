#include <stdio.h>

int main() {

    int n;

    printf("Enter the number of strings: ");

    scanf("%d", &n);

    char strings[n][100];

    for(int i=0;i<n;i++){

        scanf("%s",strings[i]);

    }

     for(int i=0;i<n;i++){

        int len = 0;

         for(int j=0;strings[i][j]!='\0';j++){

            len++;

         }

         printf("%d \n",len);

    }

 

    return 0;

}
