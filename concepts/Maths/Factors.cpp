#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

void factors(ll n,vector<ll>&f){
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i==i)
                f.push_back(i);
            else{ 
                f.push_back(i);
                f.push_back(n/i);
            }
        }
    }
}


int main(){
    
    return 0;
}