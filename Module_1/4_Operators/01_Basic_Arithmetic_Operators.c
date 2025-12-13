#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    printf("Sum: %d \n", x+y);
    printf("Sub: %d\n", x-y);
    printf("Mul: %d\n", x*y);
    printf("Div: %f \n",(float)x/y);
    return 0;
}
