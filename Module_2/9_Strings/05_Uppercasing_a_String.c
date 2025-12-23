#include <stdio.h>
int main()
{

    char str[] = "Hello, World!";

    for (int i = 0; str[i] != '\0'; i++)
    {

        // if (str[i] > 90) 
        // or

        if (str[i] >= 'a' && str[i] <= 'z')
        {

            str[i] = str[i] - 32; // Subtract 32 to convert to uppercase ASCII
        }
    }

    printf("Uppercased string: %s\n", str);

    return 0;
}
// A =65 a =97