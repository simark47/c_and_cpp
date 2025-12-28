#include <stdio.h>

// Function to print a message and return early

void printMessage()
{

    printf("This is the first statement.\n");

    return; // Return early without executing further statements

    printf("This statement is not executed.\n");
}

int main()
{

    printMessage(); // Outputs: This is the first statement.

    return 0;
}
// The call stack is a region of memory used to manage function calls in a program.
// It keeps track of the current position in the execution of the program and the order in which functions are called.
// Every time a function is called, a new stack frame (also known as activation record or call frame) is created and pushed onto the call stack.
// The stack frame contains information such as the function's parameters, local variables, return address, and sometimes the context needed to restore the state of the calling function.
// Function Call Sequence:
// When a function is called, its stack frame is pushed onto the top of the call stack.
// When the function execution finishes (either by reaching the end of the function or encountering a return statement), its stack frame is popped off the call stack.
// Control returns to the calling function, and execution continues from where it left off.