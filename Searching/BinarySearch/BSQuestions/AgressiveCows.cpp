#include <bits/stdc++.h>
using namespace std;

int isPossible(vector<int> arr,int k,int mid){
   int cowCount=1;
    int lastPos=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-lastPos>=mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPos=arr[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int s=0;
    int maxi=-1;
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int e=maxi,ans=-1;
    while(s<=e){
        int m=s+(e-s)/2;
        if(isPossible(stalls,k,m)){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
    }
    return ans;
}

int main(){
    
    return 0;
}