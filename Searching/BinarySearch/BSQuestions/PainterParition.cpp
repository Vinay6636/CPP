#include <bits/stdc++.h>
using namespace std;

int  isPossible(vector<int> arr,int k,int mid){
    int n=arr.size();
    int SC=1,Pagesum=0;
    for(int i=0;i<n;i++){
        if(Pagesum+arr[i]<=mid){
            Pagesum+=arr[i];
        }
        else{
            SC++;
            if(SC>k || arr[i]>mid){
                return false;
            }
            Pagesum=arr[i];
        }
    }
    return true;
}



int findLargestMinDistance(vector<int> &boards, int k)
{
    //    Write your code here.
    int s=0,sum=0,n=boards.size();
    for(int i=0;i<n;i++){
        sum+=boards[i];
    }
    int ans=-1;
    int e=sum;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(isPossible(boards,k,mid)){
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
    
    return 0;
}