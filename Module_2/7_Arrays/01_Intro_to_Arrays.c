#include <stdio.h>

int main()
{
    int marks[4];
    marks[0] = 7;
    marks[1] = 1;
    marks[2] = 5;

    printf("%d %d %d\n", marks[0], marks[1], marks[2]);
    char name[] = "Simar";
    printf("%s", name); // Works ONLY for char arrays
    return 0;
}

// for collection of huge data of same type
// data type name[size];
// int marks[5];
// at the memory level computer will give you enough space to accomodate 5 marks
// indexing of an array begins at 0 and ends at n-1 where n is size
// assigning:
// marks[0]=50;
