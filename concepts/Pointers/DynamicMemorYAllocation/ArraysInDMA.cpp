#include <bits/stdc++.h>
using namespace std;
int getSum(int* arr,int n){
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

int main(){
    // Dynamic Array --> It is  created by new keyword.
    char* ch = new char; // It is stored in Heap.
    // Creating Variable size  array 
    // The size of the array is (Address Of Pointer + size of int array)  ---> 8 + 5 * 4 = 28.
    // 8 is stored in stack and 20 is stored in Heap.
    //int* arr = new int[5];

    int n;cin>>n;
    int* arr = new int[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans = getSum(arr,n);
    cout<<"Answer is : "<<ans<<endl;

    // To delete a allocated memory in Heap .We need to use delete keyword.Delete keyword free up the space in the Heap.
    // Ex : int* ptr = new int;
    // delete ptr;

    return 0;
}