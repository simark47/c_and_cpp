#include <stdio.h>
struct Point
{
    int x, y;
    // int z=10; not allowed since no memory is being allocated
};
int main()
{
    struct Point p; // declaring a variable of that datatype

    p.x = 1;
    p.y = 5;

    printf("%d %d\n", p.x, p.y);
    p.x++;
    p.y = p.y + p.x;
    printf("%d %d\n", p.x, p.y);
    return 0;
}

// we can create user defined datatypes like we created functions
// using keyword struct