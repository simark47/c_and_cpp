// https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(vector<int> &v, int i, int j ){
    int temp=v[i];
    v[i]=v[j];
    v[j]=temp;
}
int main()
{
    int n;
    cin >> n;
    vector<int> u(n);

    for (int i = 0; i < n; i++)
    {
        cin >> u[i];
    }
    int maxi=u[0];
    int mini=u[0];
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi, u[i]);
        mini=min(mini,u[i]);
    }
    int max_indx=0;
     for (int i = 0; i < n; i++)
    {
        if(u[i]==maxi){
            max_indx=i;
             break;

        }
    }
    int min_indx=0;
     for (int i = n-1; i >=0; i--)
    {
        if(u[i]==mini){
            min_indx=i;
             break;

        }
    }
    int count=0;
    for(int i=max_indx;i>0;i--){
        swap( u, i, i-1);
        count++;
    }
    for(int i=min_indx;i<n-1;i++){
        swap( u, i, i+1);
        count++;
    }
    if (max_indx > min_indx)
    count--;
    cout<<count;
    return 0;
}
