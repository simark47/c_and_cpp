#include <stdio.h>

int main()
{
    char str;
    scanf(" %c", &str); // space to be skipped ( c) will give c
    printf("%c\n", str);

    char word[100];
    scanf("%s", word); // scanf("%s", str) stops reading when it encounters whitespace.
    printf("%s\n", word);

    char st[] = "Hello, World!";
    printf("String: %s\n", st);
    // To read an entire line with whitespace using scanf(), you would need to use the fgets() function.
    
    char s3[] = "simar";

    for (int i = 0; s3[i] != '\0'; i++)
    {
        printf("%c ", s3[i]);
    }
    // leave the last character for '\0'strings are terminated by a null character ('\0').
    return 0;
}
