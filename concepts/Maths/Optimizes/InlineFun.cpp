#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

// Inline function --> It replaces the func call with func body before compling.
// It reduces the extra storage and multiple function calling.

inline int getMax(int& a,int& b){
    return (a>b) ? a : b;
} 

int main(){
    int a = 1,b = 2;
    int ans = getMax(a,b);
    cout<<ans<<endl;
    a=a+3;
    b=b+1;
    ans = getMax(a,b);
    cout<<ans<<endl;
    return 0;
}