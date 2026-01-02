#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 3, 4};
    v.push_back(5);
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.pop_back();
    v.push_back(7);
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.clear();
    cout << v.size() << endl;
    v.resize(5, 1);
    cout << v.size() << endl;
    v = {2, 3, 4, 5};
    reverse(v.begin(), v.end());
    for (int i = 0; i < 4; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
// push_back: inserts an element at the end of the vector 0(n) worst, o(1) best
// pop_back: removes the last element o(1)
// clear: makes the size 0 by removing all elements  o(n)
//