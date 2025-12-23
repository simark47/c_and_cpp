#include <stdio.h>

int main() {

 char s1[] = "Hello, world!"; // Source string

 char s2[20]; // Destination string

 int i;

 // Copying contents of s1 to s2 using a for loop

 for (i = 0; s1[i] != '\0'; i++) {

 s2[i] = s1[i];

 }

 s2[i] = '\0'; // Add null terminator to the end of the destination string

 // Printing the contents of s2

 printf("s2: %s\n", s2);

 

 return 0;

}
