#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
void SelectionSort(int *arr,int i,int n){
    if(i==n-1) return ;
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]) minIndex=j;
    }
    swap(arr[i],arr[minIndex]);
    SelectionSort(arr,i+1,n);
}
int main(){
    int arr[5]={2,4,9,1,3};
    SelectionSort(arr,0,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}