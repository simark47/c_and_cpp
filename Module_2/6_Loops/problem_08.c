// https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true
#include <stdio.h>
#include <stdlib.h>
int *gradingStudents(int grades_count, int *grades, int *result_count)
{

    int *res = malloc(grades_count * sizeof(int));
    *result_count = grades_count;
    for (int i = 0; i < grades_count; i++)
    {

        int next_mul = ((grades[i] / 5) + 1) * 5;
        if (grades[i] < 38)
        {
            res[i] = grades[i];
        }
        else
        {

            if (next_mul - grades[i] < 3)
            {
                res[i] = next_mul;
            }
            else
            {
                res[i] = grades[i];
            }
        }
    }
    return res;
}

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int *grades = malloc(n * sizeof(int));

    printf("Enter grades:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &grades[i]);
    }
    int result_count;
    int *result = gradingStudents(n, grades, &result_count);

    printf("Final grades:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}