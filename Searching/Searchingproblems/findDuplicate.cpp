#include <bits/stdc++.h>
using namespace std;

int findDuplicate(int arr[],int n){
    int ans;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                ans=arr[i];
                break;
            }
        }
    }
    return ans;
}


int findDuplicate1(vector<int> &arr) 
{
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    for(int i=1;i<arr.size();i++){
        ans=ans^i;
    }
	return  ans;
}


int main(){
    int arr[5]={1,2,3,2,4};
    int n=5;
    int ans=findDuplicate(arr,n);
    cout<<ans<<endl;
    return 0;
}