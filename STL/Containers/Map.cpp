#include <bits/stdc++.h>
using namespace std;

int main(){
    // Map stores the data has key and value.
    // Map stores the values in sorted order.while unordered_map stores in random order.
    map<int,string> m;

    // inserting in a map 
    m[1]="v";
    m[2]="l";
    m[3]="ls";

    m.insert({4,"cd"});


    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;

    // To find a element in map 
    cout<<"Finding 2 is : "<<m.count(2)<<endl;

    // Erasing in map
    m.erase(4);

    for(auto i:m) cout<<i.first<<" "<<i.second<<endl;
    cout<<endl;

    // find() returns the iterator value of a element 
    auto it = m.find(3);
    for(auto i=it;i!=m.end();i++) cout<<(*i).second<<" "<<(*i).first<<endl;

    return 0;
}