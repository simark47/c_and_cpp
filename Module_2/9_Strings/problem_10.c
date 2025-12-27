// https://atcoder.jp/contests/abc235/tasks/abc235_a
#include <stdio.h>
int main(void)
{
    // your code goes here

    int xyz;
    scanf("%d", &xyz);
    int a = xyz / 100;
    int b = (xyz / 10) % 10;
    int c = xyz % 10;
    int abc = a * 100 + b * 10 + c;
    int bca = b * 100 + c * 10 + a;
    int cab = c * 100 + a * 10 + b;
    int sum = abc + bca + cab; // or sum=111*(a+b+c)
    printf("%d", sum);
    return 0;
}