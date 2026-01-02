// https://codeforces.com/problemset/problem/445/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    arr[i][j] = 'B';
                }
                else
                {
                    arr[i][j] = 'W';
                }
            }
        }
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr[i];

        cout << endl;
    }
    return 0;
}
