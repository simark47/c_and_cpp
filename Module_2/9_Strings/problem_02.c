// https://www.hackerrank.com/challenges/strong-password/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>

int minimumNumber(int n, char *password)
{
    int hasDigit = 0, hasLower = 0, hasUpper = 0, hasSpecial = 0;
    char *specialChars = "!@#$%^&*()-+";

    for (int i = 0; i < n; i++)
    {
        if (password[i] >= '0' && password[i] <= '9')
        {
            hasDigit = 1;
        }
        else if (password[i] >= 'a' && password[i] <= 'z')
        {
            hasLower = 1;
        }
        else if (password[i] >= 'A' && password[i] <= 'Z')
        {
            hasUpper = 1;
        }
        else
        {
            // Check for special characters
            for (int j = 0; specialChars[j] != '\0'; j++)
            {
                if (password[i] == specialChars[j])
                {
                    hasSpecial = 1;
                    break;
                }
            }
        }
    }

    int missingTypes = 0;
    if (!hasDigit)
        missingTypes++;
    if (!hasLower)
        missingTypes++;
    if (!hasUpper)
        missingTypes++;
    if (!hasSpecial)
        missingTypes++;

    int missingLength = 0;
    if (n < 6)
        missingLength = 6 - n;

    // Minimum number of characters to add
    return (missingTypes > missingLength) ? missingTypes : missingLength;
}

int main()
{
    char password[100];

    // Read the password
    printf("Enter the password: ");
    scanf("%s", password);

    int n = strlen(password);

    // Call the function
    int result = minimumNumber(n, password);

    // Print the result
    printf("Minimum characters to make password strong: %d\n", result);

    return 0;
}
