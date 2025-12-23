#include <stdio.h>

int main() {

    int n;

 

    // Input the number

    printf("Enter a number: ");

    scanf("%d", &n);

 

    if (n == 0) {

        printf("0\n");

        
    }

 

    while (n > 0) {

        printf("%d\n", n);

        n = n / 10;

    }

 

    return 0;

}

