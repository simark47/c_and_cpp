// https://www.hackerrank.com/challenges/anagram/problem?isFullScreen=true
#include <stdio.h>
#include <string.h>
int anagram(char *s)
{
    int n = strlen(s);
    if (n % 2 == 1)
    {
        return -1;
    }
    int freq[26] = {0};
    int half = n / 2;

    for (int i = 0; i < half; i++)
        freq[s[i] - 'a']++;

    for (int i = half; i < n; i++)
        freq[s[i] - 'a']--;

    int changes = 0;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            changes += freq[i];
    }
    return changes;
}
// --------------
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char input[10001];
        scanf("%s", input);
        printf("%d", anagram(input));
    }
    return 0;
}
