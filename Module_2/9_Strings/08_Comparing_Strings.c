#include <stdio.h>

int main() {

    char str1[100], str2[100];

    int i = 0;

    printf("Enter the first string: ");

    scanf("%s", str1);

    printf("Enter the second string: ");

    scanf("%s", str2);

    // Compare each character until one of the strings terminates or characters are different

    while (str1[i] != '\0' || str2[i] != '\0') {

        if (str1[i] != str2[i]) {

            break;

        }

        i++;

    }

    // If both strings are equal, isEqual remains 1

    if (str1[i]=='\0' && str2[i]=='\0')

        printf("The strings are equal.\n");

    else

        printf("The strings are not equal.\n");

    return 0;

}