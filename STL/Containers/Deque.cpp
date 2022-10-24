#include <bits/stdc++.h>
#include <deque>
using namespace std;

int main(){
    // Deque : It is also known as double ended queue. That is we can push or pop from both the ends.
    deque<int> d;
    d.push_back(1);  // It inserts the vlaue from back side.
    d.push_front(2); // It inserts the value from front side.
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;

   // d.pop_back();  // It deletes the value from back side.
    //d.pop_front(); // It deletes the value from front side.

    cout<<"The value at index "<<d.at(1)<<endl;

    cout<<"Front Element "<<d.front()<<endl;
    cout<<"Back Element "<<d.back()<<endl;

    cout<<"Deque is Empty or not : "<<d.empty()<<endl;

    cout<<d.size()<<endl;
    // we need to pass the starting and ending value that are need to be deleted.
    d.erase(d.begin(),d.begin()+1);
    cout<<d.size()<<endl;

    

    return 0;
}