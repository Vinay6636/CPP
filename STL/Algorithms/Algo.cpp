#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);

    //  Implementing the binary_search using its function
    cout<<binary_search(v.begin(),v.end(),3)<<endl;

    // lower and upper bound 
    cout<<" Lower bound "<<lower_bound(v.begin(),v.end(),5)-v.begin()<<endl;
    cout<<" Upper bound "<<upper_bound(v.begin(),v.end(),5)-v.begin()<<endl;

    int a=2,b=3;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;
    swap(a,b);
    cout<<a<<" "<<b<<endl;

    string s= "vinay";
    reverse(s.begin(),s.end());
    cout<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    for(int i:v) cout<<i<<" ";
    cout<<endl;

    sort(v.begin(),v.end());
    for(int i:v) cout<<i<<" ";
    cout<<endl;

    return 0;
}