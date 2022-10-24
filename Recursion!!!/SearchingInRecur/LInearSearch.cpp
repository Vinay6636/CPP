#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
bool LinearSearch(int arr[],int size,int key){
    if(size == 0 ) return false;
    if(arr[0]==key) return true;
    return LinearSearch(arr+1,size-1,key);
}

int main(){
    int arr[5]={2,3,14,5,6};
    cout<<LinearSearch(arr,5,1)<<endl;
    return 0;
}