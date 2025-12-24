// https://www.codechef.com/problems/ECPC10C
#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        char a[150];
        scanf("%s", a);
        int len = strlen(a);
        int carry = 1;
        for(int i = len - 1; i >= 0; i--) {
            int sum = (a[i] - '0') + carry;
            a[i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        if(carry) putchar('1');   // extra digit at front if needed
        printf("%s\n", a);
    }
    return 0;
}
    