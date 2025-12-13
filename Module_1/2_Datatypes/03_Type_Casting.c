// Type-Casting

// Type casting in C involves converting a value from one data type to another.

// Implicit type casting, also known as automatic type conversion, occurs when the compiler automatically converts one data type into another without requiring any explicit instructions from the user.

// Example:


#include<stdio.h>
int main(){
int a = 10;

float b = a; // Implicit conversion from int to float

// Output 
printf("b :%f\n", b);



// In this example, the integer value 10 is implicitly converted to a floating-point value 10.000000 during the assignment to b.

// Explicit type casting involves the user explicitly instructing the compiler to convert a value from one data type to another using the cast operator (type).

// Example:

// float c = 3.14;

// int d = (int)c; // Explicit conversion from float to int using cast operator

// Output:

// d = 3

// In this example, the floating-point value 3.14 is explicitly cast to an integer, resulting in the value 3 being assigned to d.
 



// All data types can not be typecast to all data types.

//  Eg.

float k = (int)9.17; // k = 9.000
long long x = 1000000000;
int y = 1000000000;
int z = 1000000000;
int zz=y*z;
long long m= x*y;
long long o= y*z;
long long n = (long long)x*y;
printf("%d\n",zz);
printf("%lld\n",m);
printf("%lld\n",o);
printf("%lld\n",n);
}

// Is there any problem with the above code snippet? 
// Yes, there will be an integer overflow, because 10 power 9 * 10 power 9 will give the integer overflow. Only changing z to long long int will not work because the multiplication of two integers will store the result into integers then it will type cast to long long.

// product is not being type casted to long, rather x is getting converted to long, and hence long * int is resulting in long

//  Long long int z = (long long)x * y;