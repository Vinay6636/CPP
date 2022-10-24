#include <bits/stdc++.h>
using namespace std;

int Binary_search1(int arr[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(key==arr[mid]) return mid;
        else if(key>arr[mid]) s=mid+1;
        else e=mid-1;
        //mid=s+(e-s)/2;
    }
    return -1;
}
//optimized solution
int Binary_search2(int arr[],int n,int key){
    int low=0,high=n-1,mid;
    while(high-low>1){
        mid=(low+(high-low))/2;
        if(arr[mid]>=key) high=mid;
        else if(arr[mid]<key) low=mid+1;
    }
    if(arr[low]==key) return low;
    else if(arr[high]==key) return high;
    else return -1;

}

int main(){
    int arr[10]={2,4,6,8,10,12,14,16,18,20};
    int n=10;
    int key=29;
    int ans =  Binary_search1(arr,n,key);
    cout<<ans<<endl;

    return 0;
}