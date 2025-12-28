#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}

void greet() //If a function doesn't return any value, the return type is specified as void.
{
    printf("Hello, world!\n");
}
int main()
{
    // 02_Parameters_and_Return_Types.c - sample C program
    printf("%d\n", add(4, 3));
    greet();
    return 0;
}
// Parameters are variables declared in the function declaration and definition.
// They act as placeholders for values that are passed into the function when it is called.
// They can be of any data type, including built-in types (int, float, char, etc.) or custom types (structures, pointers, etc.).
// Multiple parameters are separated by commas.