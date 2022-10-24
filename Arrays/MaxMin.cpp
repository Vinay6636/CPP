#include <bits/stdc++.h>
using namespace std;
int GetMax(int nums[],int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        maxi=max(nums[i],maxi);
    }
    return  maxi;
}

int GetMin(int nums[],int n){
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,nums[i]);
    }
    return  mini;
}

int main(){
    int size;
    cin>>size;
    int arr[5];
    for(int i=0;i<100;i++){
        cin>>arr[i];
    }
    
    cout<<"The Largest Element is : "<<GetMax(arr,100)<<endl;
    cout<<"The Smallest  Element  is : "<<GetMin(arr,100)<<endl;
    return 0;
}