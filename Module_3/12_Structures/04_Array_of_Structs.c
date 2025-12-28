#include <stdio.h>
#include <string.h>
#include<limits.h>
struct Person
{
    char name[20];
    int age;
    char gender;
} p1;
int main()
{
    strcpy(p1.name, "Simar");
    p1.age = 23;
    p1.gender = 'F';
    printf("%s %d %c\n", p1.name, p1.age, p1.gender);
    struct Person p2 = {"nimar", 21, 'M'};
    printf("%s %d %c\n", p2.name, p2.age, p2.gender);
    struct Person people[4];
    int max=INT_MIN;
    int j=0;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter name, age, gender: ");
        scanf("%19s", people[i].name); // %19s to prevent overflow
        scanf("%d", &people[i].age);
        scanf(" %c", &people[i].gender); // space to skip newline
        if(people[i].age>max){
            max=people[i].age;
            j=i;
        }
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", people[i].name);
        printf("%d\n", people[i].age);
        printf("%c\n", people[i].gender);
    }
    printf("Person with max age is: %s\n", people[j].name);

    return 0;
}
