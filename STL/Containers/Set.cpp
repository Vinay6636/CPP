#include <bits/stdc++.h>
using namespace std;

int main(){
    //Set stores all values as unique.We cannot insert duplicates in it.
    // Set is based on BST.
    // By using set we can insert or delete values from it.We cannot modify it.
    // The Elements in the set are always sorted.It is slow than the unordered_set .
    // Unordered_set stores the elements in random order or inserted order.

    set<int> s;

    // inserting a element into set
    s.insert(0);
    s.insert(1);
    s.insert(0);
    s.insert(2);
    s.insert(3);

    for(auto i:s) cout<<i<<" ";
    cout<<endl;

    // erase() 
    //s.erase(s.begin());

    //iterator 
    set<int>::iterator it= s.begin();
    it++;
    s.erase(it);
    for(auto i:s) cout<<i<<" ";
    cout<<endl;

    cout<<" 3 is present or not : "<<s.count(3)<<endl; // returns 0 or 1

    set<int>::iterator itr = s.find(3);
    cout<<"The index value at 3 is :"<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}