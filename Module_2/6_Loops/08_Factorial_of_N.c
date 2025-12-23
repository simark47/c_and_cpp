#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i=1;
    int prod=1;
    while (i<=n){
        prod*=i;
        i++;

    }
    printf("%d", prod);

    return 0;
}
