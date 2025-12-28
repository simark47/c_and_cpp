#include <stdio.h>

// Function to increment a value by 1 (pass by value)

void increment(int x)
{

    x++; // Increment the value of x

    printf("Inside function: x = %d\n", x);
}
void increment2(int *x)
{

    (*x)++; // Increment the value pointed to by x

    printf("Inside function: *x = %d\n", *x);
}

int main()
{

    int num = 5;

    printf("Before function call: num = %d\n", num);

    increment(num); // Call the function with num

    printf("After function call: num = %d\n", num);
    increment2(&num); // Call the function with a reference to num

    printf("After function call: num = %d\n", num);

    return 0;
}