#include <stdio.h>

int main()
{

    char s[100] = "87344545"; // Input string

    long long x = 0; // Integer variable to store the converted number

    int i = 0, len = 0;

    // Calculate the length of the string

    while (s[i] != '\0')
    {

        len++;

        i++;
    }

    len--; // Adjust the length to exclude the null terminator

    long long powerOfTen = 1; // Initialize powerOfTen to 1

    // Iterate through each character of the string

    while (len >= 0)
    {

        // Convert the character to its numerical value and accumulate to x

        x += (s[len] - '0') * powerOfTen;

        len--;

        powerOfTen *= 10; // Multiply powerOfTen by 10 to shift left
    }

    // Print the converted number

    printf("The converted number is: %lld\n", x);

    return 0;
}
// we convert each character of the string s to its numerical value by subtracting the ASCII value of '0'. We multiply this numerical value by powerOfTen and add it to x to accumulate the converted number.