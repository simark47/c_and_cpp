#include <stdio.h>

int main()
{
    char str[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    char s2[] = {'s', 'i', 'm', 'a', 'r'}; //\0 needs to be added if you wanna loop
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", s2[i]);
    }
   
    printf("\n");
    return 0;
}
