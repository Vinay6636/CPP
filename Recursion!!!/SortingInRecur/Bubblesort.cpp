#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
void sortArray(int *arr,int n){
    if(n==0 || n==1) return ;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
    }
    sortArray(arr,n-1);
}
int main(){
    int arr[5]={2,4,9,1,3};
    sortArray(arr,5);
    for(int i=0;i<5;i++) cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}