#include<stdio.h>

int main() {

float a = 1.123456789;

printf("%f \n",a);



// The output of the above program will be 1.123457. But the actual output should be 1.123456789. The result rounded off to the first 6 digits. These kinds of issues are termed as precision issues.

// For increasing precision, we can use double or long double data types.

// We can print our data to 2 decimal places.

// Eg.



float b = 1.123456789;
double c=1.123456789123456789;
long double d = 3.1415926535856647617676176176676767979323L;  // <= 18–19 digits
printf("%.21Lf\n", d);


printf("%.9f\n", b);
printf("%.18lf\n", c);
printf("%.21Lf\n", d);

return 0;

}

// The output will be 1.12.
 