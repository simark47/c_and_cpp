// https://codeforces.com/problemset/problem/71/A
#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        string s;
        cin>>s;
        if(s.length()>10){
           s=s[0]+to_string(s.length()-2)+s[s.length()-1]; 
        }
        cout<<s<<endl;
    }
    return 0;
}
