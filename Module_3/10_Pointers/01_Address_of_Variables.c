#include <stdio.h>

int main()
{

    int num = 10;

    printf("Address of num: %p\n", &num);
    printf("Address of num (decimal): %lld\n", (long long)&num);
    return 0;
}
// &num obtains the address of the variable num.
// %p is the format specifier used with printf() to print the address in hexadecimal format.
// the output shows the memory address where the variable num is stored in hexadecimal format.
// You can use %lld if you want to print the address as a long long integer.
// An int variable typically occupies a specific amount of memory, usually 4 bytes 
// The memory allocated for the int variable is contiguous.
// The memory block allocated to the int variable has a starting address, which is the memory address of the variable.
