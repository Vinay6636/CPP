#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int i=0,j=n-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    int arr[5]={1,26,7,2,5};
    reverse(arr,5);
    for(int i: arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}