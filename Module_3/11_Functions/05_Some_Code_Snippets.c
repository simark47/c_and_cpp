#include <stdio.h>
#include <stdio.h>

void swap(int *first, int *second)
{

    int temp = *first;

    *first = *second;

    *second = temp;
}

int main()
{

    int a = 5, b = 3;

    printf("%d %d \n", a, b);

    swap(&a, &b);

    printf("%d %d \n", a, b);

    return 0;
}