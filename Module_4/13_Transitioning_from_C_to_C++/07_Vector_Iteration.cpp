#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4, 5};

    for (vector<int>::iterator i = v.begin(); i < v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << "\n";
    for (vector<int>::reverse_iterator i = v.rbegin();
         i != v.rend();
         i++)
    {
        cout << *i << " ";
    }
    return 0;
}
