#include <bits/stdc++.h>
using namespace std;



bool isPossible(vector<int> arr, int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum + arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int s=0,sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    int e=sum,ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
            
        }
        else{
            s=mid+1;
        }
    }
    return ans;   
    
}

int main(){
    vector<int> v{10,20,30,40};
    int sol=allocateBooks(v,4,2);
    cout<<sol<<endl;
    
    return 0;
}