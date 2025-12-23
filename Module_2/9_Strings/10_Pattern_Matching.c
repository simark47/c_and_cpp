#include <stdio.h>

int main() {
    char str[] = "ababc";
    char pat[] = "abc";
    int i, j;

    int l1 = 0, l2 = 0;

    // length of str
    while (str[l1] != '\0') {
        l1++;
    }

    // length of pat
    while (pat[l2] != '\0') {
        l2++;
    }   
    for (i = 0; i <= l1 - l2; i++) {

        for (j = 0; j<l2; j++) {

            if (str[i + j] != pat[j])
                break;
        }

        if (j == l2) {
            printf("Pattern found at index %d\n", i);
            break;
        }
    }
    return 0;
}
// Approach	Loop	Match Check
// Method 1	pat[j] != '\0'	pat[j]=='\0'
// Method 2	j < l2	j == l2