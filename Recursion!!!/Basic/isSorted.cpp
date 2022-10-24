#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
bool isSorted(int arr[],int size){
    if(size == 1 || size == 0) return true;
    if(arr[0]>arr[1]) return false;
    return isSorted(arr+1,size-1);
}

int main(){
    int arr[5]={2,3,14,5,6};
    if(isSorted(arr,5)) cout<<"Array is sorted"<<endl;
    else cout<<"Array is not sorted !!"<<endl;
    return 0;
}