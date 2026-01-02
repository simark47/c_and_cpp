#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    vector<int> v;
    vector<int> u(2, 0); //[0, 0]
    vector<int> z={1,2,3,4};
    cout<<z[1]<<endl;
    cout<<u.at(0)<<endl;
    for(int i=0;i<4;i++){
         cout<<z[i]<<endl;
    }

    return 0;
}
// we usually cant change size of array
// but we have dynamic arrrays or vectors
// vector<datatype> name: empty or 0 size
//  vector<datatype> name(n, val): n elements with value= val
// vector <datatype> name={....}

// acccesing
// v[]
// .at() operator
// difference = when index is out of bound, at operator gives RTE
