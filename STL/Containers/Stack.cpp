#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
    // Stack follows LIFO order.[Last in First Out]
    stack<string> s;

    // inserting values to a stack
    s.push("SSN");
    s.push("ZB");
    s.push("DSC");

    cout<<"The Top element in the stack : "<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;

    cout<<"The size of  a stack "<<s.size()<<endl;
    cout<<" Empty or not "<<s.empty()<<endl;

    
    return 0;
}

