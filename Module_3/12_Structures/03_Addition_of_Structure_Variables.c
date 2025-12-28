#include <stdio.h>
struct Point
{
    int x, y;
   
}p1,p2;//global variable of Point (another declaration)
int main()
{
    p1.x=1;
    p1.y=2;
    p2.x=10;
    p2.y=20;
    // p1+p2; this is not correct
    struct Point p3={p1.x+p2.x,p1.y+p2.y};
    printf("%d %d\n", p3.x, p3.y);
    return 0;
}
