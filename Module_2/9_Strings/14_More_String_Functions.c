#include <stdio.h>

#include <string.h>

int main()
{

    char str1[] = "hello";

    char str2[] = "world";

    int result = strcmp(str1, str2);

    if (result == 0)
    {

        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {

        printf("String 1 is less than String 2.\n");
    }
    else
    {

        printf("String 1 is greater than String 2.\n");
    }


        char str[] = "This is a sample string";

        char substr[] = "sample"; 

        char *ptr = strstr(str, substr);//rest of string after first occurence
        printf("%s\n", ptr);

        if (ptr != NULL)
        {

            printf("Substring found at position: %ld\n", ptr - str);
        }
        else
        {

            printf("Substring not found\n");
        }

        

    return 0;
}

// strcmp()
//  It is used to compare two strings lexicographically.  like dictionary
//  comp gives difference in ascii codes of first unmatched char

// strstr():

// It is used to find the first occurrence of a substring within a string.