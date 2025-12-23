#include <stdio.h>

int main() {
    int arr[0]; //makes no sense
    // int arr2[-9];//not allowed

    int arr3[5];
    // arr3[6]=1;//index out of bound
     
    // int arr4[45124512451248451]; takes alot of memory(45124512451248451 *sizeof int )

    int marks[5]={1,2,3,4,5};
    // or
    int marks2[]={4,5,6,7,8};

    return 0;
}
