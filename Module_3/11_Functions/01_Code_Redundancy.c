#include <stdio.h>

/*
WHY WE NEED FUNCTIONS IN C
--------------------------
1. To avoid repeating the same code again and again
2. To make code easier to read and understand
3. To make debugging easier (fix once, works everywhere)
4. To divide a big problem into small manageable parts
*/

// Function to check if a number is even or odd
void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
}

int main()
{
    int x = 10, y = 20;

    // calling same function for different values
    checkEvenOdd(x);
    checkEvenOdd(y);

    return 0;
}

/*
WITHOUT FUNCTIONS:
- we would write addition logic again and again
- code would be longer and confusing

WITH FUNCTIONS:
- logic written once
- reused many times
- clean and readable code
*/
