#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if(marks>20){
        printf("marks>20\n");
    }
    if(marks>40){
        printf("marks>40\n");
    }
    if(marks>60){
        printf("marks>60\n");
    }
    if(marks>80){
        printf("marks>80\n");
    }



// count how many numbers divide x
    int n1=2; int n2=3; int n3=5; int n4=7;
    int count=0;
    int x;
    scanf("%d", &x);
    if(x%n1==0){
        count++;
    }
    if(x%n2==0){
        count++;
    }
    if(x%n3==0){
        count++;
    }
    if(x%n4==0){
        count++;

    }
    printf("%d", count);

}
