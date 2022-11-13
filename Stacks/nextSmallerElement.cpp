#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> v(n);
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        int curr = arr[i];
        while(s.top() >=curr){
            s.pop();
        }
        v[i]=s.top();
        s.push(curr);
    }
    return v;
}

int main(){
    
    return 0;
}