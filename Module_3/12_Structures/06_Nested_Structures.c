#include <stdio.h>
#include <string.h>
struct Education
{
    char degree[20];
    int gradYear;
    char college[50];
};
struct Person
{
    char name[20];
    int age;
    char gender;
    struct Education edu;
};
int main()
{
    struct Education e = {"Btech", 2023, "GNU"};
    struct Person p = {"Simar", 23, 'f', e};
    printf("%s\n", p.edu.college);

    return 0;
}
