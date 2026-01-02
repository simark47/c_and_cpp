// https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    while (k > 0)
    {

        int ld = n % 10;
        if (ld == 0)
        {
            n = n / 10;
        }
        else
        {
            n -= 1;
        }

        k -=1;
    }
    cout << n;
    return 0;
}