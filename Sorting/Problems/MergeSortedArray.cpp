#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0,k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
            // k++;
            // i++;
        }
        else{
            arr3[k++]=arr2[j++];
            // k++;
            // j++;
        }


    }
    while(i<n){
        arr3[k++]=arr1[i++];
        // k++;
        // j++;
    }
    while(j<m){
        arr3[k++]=arr2[j++];
        // k++;
        // j++;
    }

}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int> nums3(m+n);
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                nums3[k++]=nums1[i++];   
            }
            else{
                nums3[k++]=nums2[j++];
            }
        }
        
        while(i<m){
            nums3[k++]=nums1[i++];
        }
         while(j<n){
            nums3[k++]=nums2[j++];
        }
        nums1=nums3;
    }

int main(){
    int arr1[5]={1,2,2,5,7};
    int arr2[3]={3,6,8};
    int arr3[8]={0};
    mergeSortedArray(arr1,5,arr2,3,arr3);
    for(int i:arr3) cout<<i<<" ";
    cout<<endl; 

    return 0;
}