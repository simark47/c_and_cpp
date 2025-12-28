#include <stdio.h>
struct A
{
    long m;
    double n;
};
int main()
{
    struct A a = {4, 7.6};
    struct A *ptr = &a;
    printf("%ld, %.2lf", (*ptr).m, ptr->n);
    return 0;
}
//  with the help of -> arrow operator , you can get the value of m and n without de referencing the ptr 