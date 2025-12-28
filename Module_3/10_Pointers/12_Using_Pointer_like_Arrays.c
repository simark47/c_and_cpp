#include <stdio.h>

int main()

{

    int a[3] = {1, 2, 3};

    int *p = a;

    printf("%d %d %d \n", p, p + 1, p + 2);

    printf("%d %d %d \n", *p, *(p + 1), *(p + 2));

    printf("%d %d %d \n", p[0], p[1], p[2]);

    return 0;
}
//  This line uses array indexing to print the values of the elements of array a using pointer p. p[0], p[1], and p[2] are equivalent to *(p+0), *(p+1), and *(p+2) respectively.
// a[i] internally does *(a+1)