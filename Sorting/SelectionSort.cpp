#include <bits/stdc++.h>
using namespace std;
/*
    --->  Selection sort : In every Round the smallest value takes its correct place.
    --->  It is an Inplace comparison sorting algorithm.
    --->  Time complexity is : O(n2)
    --->  Space complexity is : O(1)
    --->  Best case : already sorted O(n2) 
    --->  Worst case : reversely  sorted O(n2).
    --->  It is used mainly when the size of the array or vector is smaller.

 
    ---> Stable sorting algorithms preserves the order of the elements after sorting .
    ---> Unstable algorithms don't preserve the order after sorting 

    ******  STABLE ALGORITHMS: Bubble sort,Insertion sort ,Merge sort. ******
    ******  UNSTABLE ALGORITHMS : Selection sort,Quick Sort.           ******

 */


void SelectionSort(vector<int> &arr){
    int n =arr.size();
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }
        swap(arr[minIndex],arr[i]);
    }

}
int main(){
    vector<int> arr={1,5,33,6,50};
    SelectionSort(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}