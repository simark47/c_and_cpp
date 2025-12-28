#include <stdio.h>
struct Point
{
    int x, y;
   
}p2;//global variable of Point (another declaration)
int main()
{
    
    struct Point p={0,9}; // local variable of type struct Point,(another initialization)
    

    printf("%d %d\n", p.x, p.y);
    p.x++;  
    p.y = p.y + p.x;
    printf("%d %d\n", p.x, p.y);
    p2.x=10;
    p2.y=20;
    printf("%d %d\n", p2.x, p2.y);
    return 0;
}
