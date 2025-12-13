#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d", &x, &y);
    printf("Rem: %d \n",x-y*(x/y));
    printf("Rem: %d \n",x%y);
    return 0;
}
// The divisor should not be zero
// Modulo operator is applied only to integer values and not decimals and negatives