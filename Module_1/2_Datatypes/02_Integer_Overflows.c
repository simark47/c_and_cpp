// Integer Overflows
// Integer Overflows
// Integer overflow in C is a type of arithmetic error that occurs when the result of an integer operation is too large to be stored in the data type.This happens due to the finite range of values that can be represented by a fixed number of bits in memory.

// For example, a 32-bit signed integer can represent values ranging from -2,147,483,648 to 2,147,483,647. If an arithmetic operation results in a value outside this range, an overflow occurs.

// The overflow behavior wraps around within the range of representable values.

// When adding to the maximum positive value, the result will wrap around to the minimum negative value.

// Similarly, subtracting from the minimum negative value will wrap around to the maximum positive value.

// For example, if a signed 32-bit integer overflows when incrementing INT_MAX, it will wrap around to INT_MIN. Similarly, if it underflows when decrementing INT_MIN, it will wrap around to INT_MAX.

// Let us consider an example:

#include <stdio.h>
#include <limits.h>
int main(){
    int x=INT_MAX;
    printf("x: %d\n", x);
    x=x+1;
    printf("x after overflow: %d\n", x);
    int y=-2147483649; //warning: overflow in implicit constant conversion [-Woverflow] 
    printf("y: %d\n", y);
    
    printf("%d %d %d\n",  sizeof(int), sizeof(long), sizeof(long long));\
    return 0;
}
// Expected Output:

// x: 2147483647

// x after overflow: -2147483648

// Initially, x is set to the maximum value for a signed integer (INT_MAX).

// The printf statement prints the value of x, which is 2147483647.

// Then, x is incremented by 1, which causes an overflow because the result exceeds the maximum representable value for a signed integer.

// The result of the overflow is -2147483648, which is the minimum value for a signed integer.

// Therefore, the second printf statement prints the value of x after overflow, which is -2147483648.