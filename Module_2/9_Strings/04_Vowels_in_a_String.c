#include <stdio.h>

int main()
{

    char str[] = "Hello, World!";

    printf("Vowels in the string: ");

    // Iterate over the characters of the string

    for (int i = 0; str[i] != '\0'; i++)
    {

        // Check if the current character is a vowel (uppercase or lowercase)

        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||

            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            // Print the vowel

            printf("%c ", str[i]);
        }
    }

    printf("\n");

    char vowels[] = "aeiouAEIOU"; 

    printf("Vowels in the string: ");

    // Iterate over the characters of the string

    for (int i = 0; str[i] != '\0'; i++)
    {

        // Check if the current character is a vowel by searching in the list

        for (int j = 0; vowels[j] != '\0'; j++)
        {

            if (str[i] == vowels[j])
            {

                // Print the vowel

                printf("%c ", str[i]);

                break; // Exit the inner loop once a vowel is found
            }
        }
    }

    printf("\n");

    return 0;
}