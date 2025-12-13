#include <stdio.h>

int main() {
    // += , -= , *= , /= and %= (also called shorthand operators).
    int a=5;
    a+=1;
    printf("%d\n", a);
    a-=1;
    printf("%d\n", a);
    a*=2;
    printf("%d\n", a);
    a/=3;
    printf("%d\n", a);
    a%=2;
    printf("%d\n", a);
    return 0;
}
