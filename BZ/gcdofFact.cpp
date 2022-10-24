#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(ll n){
    ll fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    ll a,b;
    cin>>a>>b;
    ll ans = min(a,b);
    cout<<fact(ans)<<endl;
    return 0;
} 