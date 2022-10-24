#include <bits/stdc++.h>
using namespace std;
int findUnique(int arr[],int s){
    //Brute force approach
    for(int i=0;i<s;i++){
        int count=0;
        for(int j=0;j<s;j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count==1){
            return arr[i];
        }
    }
}

int findUnique1(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[5]={1,3,4,3,1};
    int n=5;
    int ans=findUnique(arr,n);
    cout<<ans<<endl;
    return 0;
}