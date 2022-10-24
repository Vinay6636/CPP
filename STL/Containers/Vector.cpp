#include <bits/stdc++.h>
#include <vector> 
using namespace std;

int main(){
     // Vector is a dynamic array ans it can double its size when it is filled.
    vector<int> v;
    vector<int> a(5,1); // By this all the elements of the vector to 1 .By Default its value is zero.

    // we can directly  copy the values of one vector to another vector.
    vector<int> b(a);

    cout<<v.capacity()<<endl; // capacity() returns the number of values that can be stored in a vector.

    // We can insert a element into a vector by using push_back() function.
    v.push_back(26);
    v.push_back(36);
    v.push_back(29);
    v.push_back(36);
    cout<<v.capacity()<<endl;

    cout<<"Size of "<<v.size()<<endl;
    cout<<"Index of"<<v.at(0)<<endl;

    cout<<"Front Element "<<v.front()<<endl;
    cout<<"Back Element "<<v.back()<<endl;

    
    // We can delete a element from a vector by using pop_back() function.
    v.pop_back();

    for(int i:v) cout<<i<<" ";
    cout<<endl; 

    // We can clear the vector by using clear() function.
    // Clear() function makes the vector size to zero but not its capacity.

    //Before clear function 
    cout<<v.size()<<endl;

    v.clear();
    // After clear function
    cout<<v.size()<<endl;
    return 0;
}