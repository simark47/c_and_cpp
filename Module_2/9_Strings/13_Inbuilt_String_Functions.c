#include <stdio.h>

#include <string.h>

int main()
{
    char str[] = "Hello, World!";

    int length = strlen(str);

    printf("Length of the string: %zu\n", length);

    // ---------------------------------------------------
    char s1[20] = "Hello, ";

    char s2[] = "World!";

    // Append source to destination

    strcat(s1, s2);

    // Print the concatenated string

    printf("Concatenated string: %s\n", s1);

    // ---------------------------------------------------
    char dest[20]; // Destination string

    char source[] = "Hello, World!"; // Source string

    // Copy source to destination

    strcpy(dest, source);
    printf("Copied string: %s\n", dest);
    return 0;
}