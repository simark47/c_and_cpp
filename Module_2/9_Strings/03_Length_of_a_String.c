#include <stdio.h>

int main()
{

    char str[] = "Hello, World!";

    int length = 0;

    int i = 0;

    while (str[i] != '\0')
    {

        length++;
        i++;
    }

    printf("Length of the string: %d\n", length);
    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}