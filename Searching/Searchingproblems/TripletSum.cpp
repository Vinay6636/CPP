#include <bits/stdc++.h>
using namespace std;
 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    vector<vector<int>> v;
    sort(arr.begin(),arr.end());
    int j,k;
    for(int i=0;i<n;i++){
        j=i+1;
        k=n-1;
        while(left<right){
            if(arr[i]+arr[k]+arr[j]==K){
                v.push_back({arr[i],arr[j],arr[k]});
            }
            else if (arr[i]+arr[j]+arr[k]<K)
            {
                j++;
            }
            else{
                k--;
            }
            
        }
    }
    return v;
}

int main(){
    
    return 0;
}