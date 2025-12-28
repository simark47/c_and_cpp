#include <stdio.h>
#include <string.h>
#include <limits.h>
struct Person
{
    char name[20];
    int age;
    char gender;
};
int main()
{
    struct Person people[4];
    int max = INT_MIN;
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter name, age, gender: ");
        scanf("%19s", people[i].name); // %19s to prevent overflow
        scanf("%d", &people[i].age);
        scanf(" %c", &people[i].gender); // space to skip newline
    }
    for (int i = 0; i < 4; i++)
    {
        int j = i;
        while (j > 0 && people[j].age < people[j - 1].age)
        {
            struct Person temp = people[j];
            people[j] = people[j - 1];
            people[j - 1] = temp;
            j--;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", people[i].name);
        printf("%d\n", people[i].age);
        printf("%c\n", people[i].gender);
    }

    return 0;
}
