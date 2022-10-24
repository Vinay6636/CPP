#include <bits/stdc++.h>
using namespace std;
void swapAlter(int arr[],int size){
    // int i=0;
    // while(i+1<size){
    //     swap(arr[i],arr[i+1]);
    //     i+=2;
    // }

    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
    
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[6]={1,3,4,5,2,6};
    int n=6;
    swapAlter(arr,n);
    printArray(arr,n);
    return 0;
}