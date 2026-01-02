// https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;

int main()
{
    int l, t;
    cin >> l >> t;
    string s;
    cin >> s;
    while (t--)
    {
        for (int i = 0; i < l - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char t = s[i];
                s[i] = s[i + 1];
                s[i + 1] = t;
                i++;
            }
        }
    }
    cout << s;
    return 0;
}
