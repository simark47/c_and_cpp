// https://atcoder.jp/contests/abc147/tasks/abc147_b


#include <stdio.h>
#include<string.h>
int main(void) {
    // your code goes here
    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int count = 0;
    for (int i = 0; i <strlen(s)/2; i++)
    {
        if (s[i] != s[strlen(s)-i-1])
        {
            count++;
        }
       
    }
    printf("%d",  count);

    return 0;
}