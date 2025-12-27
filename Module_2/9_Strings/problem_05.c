// https://www.hackerrank.com/challenges/palindrome-index/problem?isFullScreen=true

#include <stdio.h>
#include <string.h>
int palindromeIndex(char* s) {
    int l = 0, r = strlen(s) - 1;

    while (l < r) {
        if (s[l] == s[r]) {
            l++;
            r--;
        } else {
            // Try skipping left character
            int i = l + 1, j = r;
            while (i < j && s[i] == s[j]) { i++; j--; }
            if (i >= j) return l;

            // Try skipping right character
            i = l, j = r - 1;
            while (i < j && s[i] == s[j]) { i++; j--; }
            if (i >= j) return r;

            return -1;
        }
    }
    return -1; // already palindrome
}

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[10000];
        scanf("%s", s);
        printf("%d", palindromeIndex(s));
    }

}