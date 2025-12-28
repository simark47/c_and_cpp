#include <stdio.h>

int main()

{

    char name[10];

    scanf("%s", name);

    printf("%s \n", name);

    printf("%c %c", *name, *(name + 3));
    char names[3][10];

    for (int i = 0; i < 3; i++)
    {

        scanf("%s", names[i]);
    }

    for (int i = 0; i < 3; i++)
    {

        printf("%s", names[i]);

        printf("\n");
    }

    printf("%p %p %c", names[2], names[2] + 2, *(names[1]+3));

    return 0;
}