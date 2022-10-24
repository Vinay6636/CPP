#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
void solve(stack<int> &s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,x);
    s.push(num);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    solve(myStack,x);
    return myStack;
}



int main(){
    
    return 0;
}