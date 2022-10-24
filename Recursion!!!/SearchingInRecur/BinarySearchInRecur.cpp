#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
int BinarySearch(int arr[],int s,int e,int key){
    int mid = s+(e-s)/2;
    if(arr[mid]== key) return mid;
    else if(arr[mid]<key) return BinarySearch(arr,mid+1,e,key);
    else if(arr[mid]>key) return BinarySearch(arr,s,mid-1,key);
}
int binarysea(int arr[],int s,int e,int k){
    if(s>e) return -1;
    int m = s+(e-s)/2;
    if(arr[m]==k) return m;
    else if(arr[m]<k) return binarysea(arr,m+1,e,k);
    else return binarysea(arr,s,m-1,k);
}
int main(){
    int arr[5]={1,4,5,7,8};
    cout<<binarysea(arr,0,4,15)<<endl;
    return 0;
}