#include <stdio.h>

int main()
{   printf("enter size of array :\n");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("enter number of existing elements:\n");
    int x;
    scanf("%d", &x);
    printf("enter those elements:\n");
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    int el, in;
    printf("enter new element and its index to be inserted \n");
    scanf("%d %d", &el, &in);
    for (int i = x-1; i >= in; i--)
    {
        a[i+1]=a[i];
    }
    a[in]=el;
    for (int i = 0; i <n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
