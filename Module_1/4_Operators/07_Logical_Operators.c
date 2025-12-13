#include <stdio.h>

int main()
{
    int a = 5;

    int b = 10;

    int c = 0;

    int result = (a > 3) && (b < 20); 
    printf("%d\n", result);

    int result2 = (a > 3) && (c != 0);
    printf("%d\n", result2);
    int result3 = (a == 5) || (b == 20); 
    printf("%d\n", result3);
    int result4 = !(a == 5); // result is 0 
    printf("%d\n", result4);
    return 0;
}
