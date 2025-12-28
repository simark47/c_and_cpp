#include <stdio.h>

int main()
{

    int x;

    int *y = &x;

    printf("%d %d %d \n", y, y - 2, y + 2);
    //  printf("%d %d %d \n", y, y*2, y/2); not allowed
    
    int z;
    int *p1 = &x;

    int *p2 = &z;

    printf("%d %d %d \n", p1, p2, p1 - p2);
}
// When subtracting two pointers in C, the result is divided by the size of the datatype to which the pointers point