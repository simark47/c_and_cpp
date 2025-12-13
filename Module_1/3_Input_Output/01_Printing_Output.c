// printf() used to print formatted output. It's part of the standard input-output library <stdio.h>. It allows you to print data on the console or any output stream.

// Example:

#include <stdio.h>

int main()
{

    printf("Life is beautiful");
    printf("\n");

    // Whatever we write inside the pair of quotes is a string.

    // So what if we want to print a variable??

    int x = 109;

    printf("x"); //  this x is not referring to the variable “x”.It it just a text.
    printf("\n");
    // using format specifiers to print a variable

    printf("%d", x); //  this x is now  referring to the variable “x”.
    printf("\n");
    // Format specifier

    // It specifies the type and format of the data that should be printed or read. Format specifiers start with a percent sign '%' followed by a character that indicates the data type to be processed. Some common format specifiers include:

    // %d: integer.
    // %f:  float
    // %ld: long
    // %lld: long long
    // %lf: double
    // %c: char
    // Using multiple format specifiiers:

    int age = 25;

    double height = 5.9;

    printf("John is %d years old and %.1lf feet tall.\n", age, height);

    // “\n” - newline

    //            a newline refers to the special character '\n',
    //     which represents a line break in text.When '\n' is encountered within a string literal, it instructs the output device to move the cursor to the beginning of the next line.

    printf("Hello\n");

    printf("World\n");

    return 0;
}
