
// Reading Input from console
// Reading input from the console in C is commonly done using the scanf() function from the standard input-output library <stdio.h>. 

// Example:

#include <stdio.h>

int main() {

 printf("Enter a number: \n");
 int num;

 scanf("%d", &num);// %d => format specifier  &num => address of num
 printf("you entered %d\n", num);

//The scanf() function is used to read an integer from the standard input (keyboard) and store it in //the variable num. The %d format specifier is used to indicate that an integer should be read.

// You can use scanf() to read multiple variables of different data types from a single line of input.example:

// Example:

 printf("Enter a number,float, character :\n");
 int num1;

 float num2;

 char ch;

 

 scanf("%d %f %c", &num1, &num2, &ch);

 printf("%f %d %c\n",num2, num1, ch);

// The scanf  statement reads an input from the input stream. It stops reading as soon as it encounters a whitespace character.

 int num3;
 

 printf("Enter an integer: \n");

 scanf("%d", &num3);

 getchar();

 printf("You entered: %d\n", num3);

 

// output:

// Enter an integer: 123 456

// You entered: 123

// if you input "123 456", scanf() will read only the first integer "123" into the variable num.

// When you use %c with scanf(), it reads a single character from the input stream and stores its corresponding ASCII value in the specified variable.





 char ch2;

 printf("Enter a character: \n");

 scanf("%c", &ch2);

  
 printf("ASCII value of the character '%c' is: %d\n", ch2, ch2);



// When you use %c with scanf() and input a string instead of a single character, scanf() reads only the first character of the input string and discards the remaining characters, including any whitespace.


 getchar();
 char ch1;

 printf("Enter a character: \n");

 scanf("%c", &ch1);

 printf("You entered: %c\n", ch1);

 return 0;

}
