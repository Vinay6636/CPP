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
    int arr[9]={2,6,6,6,6,6,6,6,9};
    int n=9;
    int key = 6;
    int ans1=firstOccur(arr,n,key);
    int ans2=LastOccur(arr,n,key);
    int total = ans2-ans1+1;
    cout<<total<<endl;
    
    return 0;
}