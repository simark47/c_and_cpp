#include <stdio.h>

int main() {
    int a=15;
    int b=a++;
    printf("%d %d\n", a, b);
    int c=++a;
    printf("%d %d\n",a, c);
    int d= a--;
    printf("%d  %d\n",a, d);
    int e= --a;
    printf("%d %d\n",a, e);
    return 0;
}

// we will talk about the unary operators. There will be only one operand.


// Increment operator (++): The simple meaning of this operator is to increase the operand value by 1.

// Eg. int a = 5;

//   a++;  // a = 6;

// The increment operator can be used in two ways: prefix increment operator and suffix increment operator.

// Eg. ++a;

// It is also known as pre-increment. by using this operator, first the value of the variable will be changed and then it will be returned.

// Eg.

// int a = 5;

// int x = ++a // now the value of x will be 6 and the value of a will also be 6.

// Eg. a++;

// It is also known as post-increment. By using this operator, first, the value of the variable will be returned and then the variable value will be incremented.

// Eg. 

// int a = 5;

// int x = a++ // now the value of x will be 5 and the value of a will be 6.

// It works for decrement operators in the same ways.

