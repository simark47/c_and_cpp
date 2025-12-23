#include <stdio.h>
#include <limits.h>
int main()
{
    int a[] = {5, 6, 0, 2, 1, 4};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len - 1; i++)
    {
        int small = a[i];
        int jin = i;
        for (int j = i + 1; j < len; j++)
        {
           
                if (a[j] < small)
                {
                    small = a[j];
                    jin = j;
                
            }
        }
        int temp = a[i];
        a[i] = small;
        a[jin] = temp;
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
// 👉 Selection Sort

// Rule:

// i se end tak sabse chhota element dhundo
// aur usko a[i] ke saath swap karo