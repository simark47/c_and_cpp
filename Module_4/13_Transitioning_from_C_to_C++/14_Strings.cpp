#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abc";
    cout << s[0] << "\n";
    cout << s.at(0) << "\n";
    cout << s[4] << "\n";
    // cout << s.at(4)<<"\n"; causes issues  index out of bound
    s[1] = 's';
    s += 'c';
    // takes o(1)
    s = s + 'e';
    // takes o(n) time as copies string first
    s.push_back('d');
    s.pop_back();

    cout << s;
    cout << endl;
    
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
    for (auto i = s.begin(); i < s.end(); i++)
    {
        cout << *i << " ";
    }
    return 0;
}
