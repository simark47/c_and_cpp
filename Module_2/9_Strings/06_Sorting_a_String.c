#include <stdio.h>

#include <string.h>

int main() {

    char str[100];

    printf("Enter a string: ");

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 1; i < len; i++) {

     

        int j = i;

        // insertion sort
        while (j > 0 && str[j] < str[j-1]) {
            char temp=str[j];
            str[j]=str[j-1];
            str[j-1]=temp;
           

            j = j - 1;

        }


    }

    printf("Sorted string: %s\n", str);

    return 0;

}