#include <bits/stdc++.h>
using namespace std;

void update(int arr[],int n){
    cout<<"Printing the array in function"<<endl;
    arr[1]=36;   // by passing the base address of the array in the function .
    //changes made in this arr[]  will effect the original array.
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Back to main"<<endl;
}

int main(){
    int arr[3]={1,2,3};
    int n=3;
    update(arr,n); // we are passing the base address of the array to update function .not a copy of the array.
    cout<<"Printing in the  main function"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}