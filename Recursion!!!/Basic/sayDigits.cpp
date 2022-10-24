#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;
void sayDigit(int n,string arr[]){
    if(n==0) return ;
    int digit = n%10;
    n/=10;
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;cin>>n;
    sayDigit(n,arr);

    return 0;
}