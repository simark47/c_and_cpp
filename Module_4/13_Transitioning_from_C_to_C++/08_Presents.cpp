// http://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> u(n+1); 
    vector<int> ans(n+1); 
    for(int i=1;i<=n;i++){
        cin>>u[i];
        ans[u[i]]=i;
    }
     for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}
