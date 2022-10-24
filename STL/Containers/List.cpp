#include <bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    //list is created and implemented by using double linked list.
    // we can access elements directly in list. Because it is related to pointers.
    
    //creating a list
    list<int> l;

    // copying a list to a another list
    list<int> v(l);

    list<int> ls(5,143);
    for(int i:ls) cout<<i<<" ";
    cout<<endl;

    l.push_back(1);
    l.push_front(2);
    for(int i:l) cout<<i<<" ";
    cout<<endl;

    // It deletes the element one by one and its time complexity is O(n).
    l.erase(l.begin());  // it deletes only first element.
    for(int i:l) cout<<i<<" ";
    cout<<endl;

    cout<<l.size()<<endl;


    return 0;
}