#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void Sortone(int arr[],int n){
    int i=0,j=n-1;
    while(i<j ){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
        //arr[i]==1 && arr[j]==0 
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}


int main(){
    int arr[5]={1,0,1,0,1};
    Sortone(arr,5);
    printArray(arr,5);
    return 0;
}