#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

int main(){
    string str = "vinay";
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<ans<<endl;
    return 0;
}