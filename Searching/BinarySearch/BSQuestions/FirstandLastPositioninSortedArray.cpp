#include <bits/stdc++.h>
using namespace std;

int firstOccur(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int  m = s+(e-s)/2;
        if(arr[m]==key){
            ans=m;
             e=m-1;
        } 
        else if(key>arr[m]){
            s=m+1;
        }
        else if(key<arr[m]){
            e=m-1;
    
        }
    }
    return ans;
}

int LastOccur(int arr[],int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    while(s<=e){
        int  m = s+(e-s)/2;
        if(arr[m]==key){
            ans=m;
           s=m+1;
        } 
        else if(key>arr[m]){
            s=m+1;
        }
        else if(key<arr[m]){
            e=m-1;
    
        }
    }
    return ans;
}

int main(){
    int arr[5]={2,4,6,6,9};
    int n=5;
    int key = 6;
    cout<<"The first occurence of "<<key <<" is :"<<firstOccur(arr,n,key)<<endl;
    cout<<"The last occurence of "<<key <<" is :"<<LastOccur(arr,n,key)<<endl;
    return 0;
}