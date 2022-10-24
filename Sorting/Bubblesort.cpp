#include <bits/stdc++.h>
using namespace std;
/*
    Bubble sort : In every round the largest element takes its correct place.
    Also known as Sinking Sort or Exchange Sort or Inplace sorting algorithm[Due to we don't take additional space]
    Time complexity is : O(n2)
    Space complexity is : O(1) [constant space]
    Best case : already sorted O(n)
    Worst case or Average case : sorted  in reverse order O(n2)
    It is a stable sort algorithm.
*/
void Bubblesort1(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
         //running in the steps n-1 times
        bool swapped = false;
        //for each step maximum item will come at the last respective index
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped=true;
        }
         // if you did not swap for a particular value of . that means the array is sored hence stop the swapping
        if(swapped==false) break;
            
    }
}

void Bubblesort2(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
                swapped=true;
        }
        if(swapped==false) break;
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    Bubblesort1(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}