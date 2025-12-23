#include <stdio.h>

int main()
{
    int a[10] = {1, 2, 3, 4, 4, 5};
    int size = 6;
    printf("enter the element index to be deleted:\n");
    int x;
    scanf("%d", &x);

    for (int i = x; i < size; i++)
    {
        a[i] = a[i+1];
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
