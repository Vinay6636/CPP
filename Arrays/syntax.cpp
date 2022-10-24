#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];  // Declartion
    int ar[5]={1,3,2,45,6}; // Initilation 
    int arrr[1000]={0};  // Declaring all values has 0.
    int num[1000]; // Garbage value is stored at each index.
    // we cannot initilaize all values has 1 in a array has int arr[10]={1};
    // for that we use fill_n function() 
    int nums[100];
    fill_n(nums,100,1);
    for(int i=0;i<100;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}