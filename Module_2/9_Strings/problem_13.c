// https://atcoder.jp/contests/abc103/tasks/abc103_b

#include <stdio.h>
#include<string.h>
int main(void) {
    // your code goes here
    char s[101];
    char t[101];
    char r[202];
    scanf("%s", s);
    scanf("%s", t);
     if (strlen(s) != strlen(t)) {
        printf("No\n");
        return 0;
    }
    strcpy(r, s);
    strcat(r, s);
   if (strstr(r,t) != NULL) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }


    return 0;
}