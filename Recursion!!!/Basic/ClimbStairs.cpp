#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

int countDistinctWays(int nStairs) { // fully optimised by dp.
    //  Write your code here.
    if(nStairs < 0) return 0;
    if(nStairs==0) return 1;
    int ans = countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
    return ans;
}

int main(){
    
    return 0;
}