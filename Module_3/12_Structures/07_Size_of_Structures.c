#include <stdio.h>
struct x
{
    int a;
    int b;
};
struct y
{
    int a;
    long long b;
};
int main()
{

    printf("%d\n", sizeof(struct x));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(struct y)); //this should be 12 but is 16
    //reason:
    // some padding bytes are introduced for data structure alignment
    // this is system dependent
    // this may cause the size of struct to be bigger than sum of individual items
    return 0;
}
