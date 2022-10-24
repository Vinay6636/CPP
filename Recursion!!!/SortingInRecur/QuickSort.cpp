#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int c=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot) c++;
    }
    // place pivot at right position
    int pivotIndex = s + c ;
    swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j>pivot]){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    if(s>=e) return;
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5]={2,4,16,9,7};
    int n=5;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}