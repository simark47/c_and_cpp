#include <stdio.h>
struct Z
{
    int a;
    long long b;
    // struct X x; the last to be depended upon shall have all primitives only
};
struct Y
{
    int a;
    long long b;
    struct Z z;
};
struct X
{
    int a;
    int b;
    struct Y y;
    struct Z z;
};

int main()
{

    return 0;
}
