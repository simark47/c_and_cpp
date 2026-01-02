// https://codeforces.com/problemset/problem/263/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> u(6, vector<int>(6));
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> u[i][j];
        }
    }
    int r, c;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (u[i][j] == 1)
            {
                r = i;
                c = j;
            }
        }
    }
    int count=abs(3-r)+abs(3-c);
    cout<<count;
    return 0;
}
