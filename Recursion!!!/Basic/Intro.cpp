#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
int power(int n){
    // base case
    if(n==0) return 1;
    // recursive relation
    return 2*power(n-1);
}

void printCount(int n){
    if(n==0) return;
    printCount(n-1);
    cout<<n<<" ";
}

int main(){
    // Recursion --> A function which calling itself again and again.
    int n;
    cin>>n;
    //int ans = fact(n);
    // int ans = power(n);
    // cout<<ans<<endl;
    printCount(n);
    return 0;
}