// https://www.hackerrank.com/challenges/gem-stones/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>

int gemstones(int arr_count, char arr[][101]) {
    int alpha[26] = {0};

    for (int i = 0; i < arr_count; i++) {
        int temp[26] = {0};

        for (int j = 0; arr[i][j] != '\0'; j++) {
            temp[arr[i][j] - 'a'] = 1;
        }

        for (int k = 0; k < 26; k++) {
            if (temp[k])
                alpha[k]++;
        }
    }

    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (alpha[i] == arr_count)
            count++;
    }

    return count;
}

int main() {
    int arr_count;
    scanf("%d", &arr_count);

    char arr[arr_count][101];

    for (int i = 0; i < arr_count; i++) {
        scanf("%s", arr[i]);
    }

    printf("%d", gemstones(arr_count, arr));
    return 0;
}
