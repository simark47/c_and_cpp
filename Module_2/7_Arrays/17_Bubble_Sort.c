#include <stdio.h>

int main()
{
    int a[] = {5, 6, 0, 2, 1, 4};
    int len = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++) //len-1-i → last sorted element ignore
        {
            // printf("comparing %d and %d \n", a[j], a[j + 1]);
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                // printf("swapped\n");
            }
            // printf("array after this iteration\n");
            // for (int k = 0; k < len; k++)
            // {
            //     printf("%d ", a[k]);
            // }
            // printf("\n");
        }
    }
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
// 🫧 Bubble Sort kya hota hai?

// Adjacent elements (side-by-side) ko compare karo
// Agar order galat ho → swap
// Har round ke baad largest element end me chala jata hai