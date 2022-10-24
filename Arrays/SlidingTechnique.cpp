#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void getWindowsSum(int arr[],int s,int k){
    int curr_sum =0;
    for(int i = 0;i<k;i++) curr_sum+=arr[i];

    for(int i=1;i<=s-k;i++){
        curr_sum = curr_sum + arr[i-1] + arr[i+k-1];
        cout<<curr_sum<<" ";
    }
}

int main(){
    int arr[7]={2,3,5,78,9,6,1};
    int n=7,k=3;
    getWindowsSum(arr,n,k);
    return 0;
}