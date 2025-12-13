#include <stdio.h>

int main() {
    int y=4;
    printf("%d",y++*3-4/2+5%6);
    return 0;
}

//post ++ -- > pre ++ -- (r-l)> *, /, % >+, -   l-r