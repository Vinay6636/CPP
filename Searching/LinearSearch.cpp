#include <bits/stdc++.h>
using namespace std;

int Lsearch(int arr[],int size,int key){
    int ans=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    return ans;
}

int main(){
    int arr[10]={4,20,29,25,36,50,53,52,720,65};
    int n=10;
    cout<<"Enter the key :";
    int key;
    cin>>key;
    int ans = Lsearch(arr ,n,key);
    if(ans==-1){
        cout<<"Element does not exist"<<endl;
    }
    else{
        cout<<"Element found at index "<<ans<<endl;
    }
    return 0;
}