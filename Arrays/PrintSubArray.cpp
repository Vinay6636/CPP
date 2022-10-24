#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;
int getWindowsSum(int arr[],int s,int k){
    int sum =0;
    for(int i = s;i<=k+s-1;i++) sum+=arr[i];
    return sum;
}

void PrintAllSubarray(int arr[],int n,int k){ // k is a fixed size of array
    for(int st = 0;st<=n-k;st++){
        cout<<getWindowsSum(arr,st,k)<<" ";
        cout<<endl;
    }
}
int main(){
    int arr[7]={2,3,5,78,9,6,1};
    int n=7,k=3;
    PrintAllSubarray(arr,n,k);
    return 0;
}