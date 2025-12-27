// https://atcoder.jp/contests/abc224/tasks/abc224_a?
#include <stdio.h>
#include <string.h>
int main(void) {
    // your code goes here
    char str[21];
    scanf("%s", str);
    int len=strlen(str);
    if(str[len-1]=='r'){
        printf("er");
    }else if(str[len-1]=='t'){
        printf("ist");
    }
    return 0;
}