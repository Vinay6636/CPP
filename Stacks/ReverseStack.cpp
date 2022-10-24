#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


void insertAtbottom(stack<int> &s,int ele){
    if(s.empty()){
        s.push(ele);
        return;
    }
    int num = s.top();
    s.pop();
    insertAtbottom(s,ele);
    s.push(num);
    
}
void reverseStack(stack<int> &stack) {
    if(stack.empty()) return;
    int num = stack.top();
    stack.pop();
    reverseStack(stack);
    insertAtbottom(stack,num);
    
}


int main(){
    
    return 0;
}