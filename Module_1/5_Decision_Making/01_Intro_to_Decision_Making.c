//  In a program, at a certain time, we need to make decisions to solve a problem.
// For example, given a number, we have to find whether the number is even or odd.
// We can use the modulo operator for solving this problem. if remainder to modulo by 2 is zero, the number is even , else if the remainder the number is odd
#include<stdio.h>
int main(){
    int x;
    scanf("%d", &x);
    int y=x%2;
    printf("%d", y);
}