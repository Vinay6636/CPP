#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
const ll INF= 1e18;
const ll mod=1e9+7;

void print(int arr[],int n,int start  = 0 ){ // Default argument should be always at the right most corner.
    for(int i=start;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,4,7,8,9};
    int size = 5;
    print(arr,size);
    cout<<endl;
    print(arr,size,2);
    return 0;
}