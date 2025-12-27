// https://www.codechef.com/problems/RAINBOWA

#include <stdio.h>

int main()
{
    // your code goes here

    int t;
    scanf("%d", &t);
    while (t--)
    {
        int valid = 1;
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int left = 0;
        int right = n - 1;
        int found[8] = {0};
        int last = 0;
        while (left <= right)
        {
            // check palindrome
            if (a[left] != a[right])
            {
                valid = 0;
                break;
            }
            // order
            if (a[left] < last)
            {
                valid = 0;
                break;
            }
            last = a[left];
            // validity
            if (a[left] < 1 || a[left] > 7)
            {
                valid = 0;
                break;
            }
            found[a[left]] = 1;
            left++;
            right--;
        }
        // existence
        for (int i = 1; i < 8; i++)
        {
            if (found[i] == 0)
            {
                valid = 0;
                break;
            }
        }

        if (valid)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
