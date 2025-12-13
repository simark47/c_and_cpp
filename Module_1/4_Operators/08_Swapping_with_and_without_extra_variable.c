#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d\n", a, b);
    printf("_swap without third variable-\n");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n", a, b);
    return 0;
}
