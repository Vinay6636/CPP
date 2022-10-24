#include <bits/stdc++.h>
using namespace std;
/*
  Insertion sort:For every round we make the arr size - i  part of the array to sorted.
  --> It is a adaptive and stable algorithm.
  Space complexity : O(1)
  Time complexity : O(n2)
  Best case : Already sorted O(n)
  Worst Case: Reversely Sorted O(n2)

*/

void insertionSort1(vector<int> &arr){
    int n= arr.size();
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
    }
}

void insertionSort2(vector<int> &arr){
    int i=1,temp,n=arr.size();
    while(i<n){
        int j=i-1;
        temp=arr[i];
        while(j>=0){
            if(arr[j]>temp) arr[j+1]=arr[j];
            else break;
            j--;
        }
        i++;
        arr[j+1]=temp;
    }

}


int main(){
    vector<int> arr={1,5,33,6,50};
    insertionSort2(arr);
    for(auto i:arr) cout<<i<<" ";
    cout<<endl;
    return 0;
}