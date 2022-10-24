#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[5]={1,4,6,8,3};
    int n=5;
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}