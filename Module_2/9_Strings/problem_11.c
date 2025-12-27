// https://atcoder.jp/contests/abc222/tasks/abc222_a

#include <stdio.h>
int main(void)
{
    // your code goes here
    char a[5] = "\0";
    int inp;
    scanf("%d", &inp);

    int th = inp / 1000;
    int h = (inp / 100) % 10;
    int t = (inp / 10) % 10;
    int o = inp % 10;
    a[0] = th + '0';
    a[1] = h + '0';
    a[2] = t + '0';
    a[3] = o + '0';
    a[4] = '\0';

    printf("%s", a);

    return 0;
}