#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int> &arr,int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int m=s+(e-s)/2;
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
    }
        return s;
}
int Binary_search(vector<int> &arr,int start,int end,int key){
    int s=start,e=end;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(key==arr[mid]) return mid;
        else if(key>arr[mid]) s=mid+1;
        else e=mid-1;
        //mid=s+(e-s)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int p=pivotIndex(arr,n);
    if(k>=arr[p] && k<=arr[n-1])
        return Binary_search(arr,p,n-1,k);
    else
        return Binary_search(arr,0,p-1,k);
}

//2nd approach
int BS(int arr[],int size,int k){
    int s=0,e=size-1;
    while(s<=e){ 
        int m=s+(e-s)/2;
        if(arr[m]==k) return m;
       if(arr[m]>s){
            if(k>=arr[s] && k<=arr[m]){
                e=m-1;
            }
            else{
                s=m+1;
            }
        }
        else{
            if(k>arr[m] && k<=arr[e]){
                s=m+1;
            }
            else{
                e=m-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[6]={10,12,14,1,2,3};
    cout<<BS(arr,6,14)<<endl;
    return 0;
}