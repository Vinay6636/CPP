#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

int findMinimumCost(string str) {
    if(str.size()%2!=0) return -1;
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char ch = str[i];
        if(ch =='{') s.push(ch);
        else{
            if(!s.empty() && s.top()=='{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
    int a=0,b=0;
    while(!s.empty()){
        if(s.top() == '{') b++;
        else a++;
        s.pop();
    }
    int ans = (a+1)/2 + (b+1)/2;
    return ans;
}


int main(){
    
    return 0;
}