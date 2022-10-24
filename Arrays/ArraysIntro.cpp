#include <bits/stdc++.h>
using namespace std;



void::printArray(int[],int);

int main(){
    int nums[10];
    fill_n(nums,10,36);
    int n=10;
    //int size = sizeof(nums)/sizeof(int);  // to  get the  array the size of the array
    //cout<<size<<endl;
    printArray(nums,n);

    return 0;
}

// void printarray(int arr[]){
//     //int size = sizeof(arr)/sizeof(int);  // to  get the  array the size of the array
//    // cout<<size<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }   
//     cout<<endl;
// }

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}