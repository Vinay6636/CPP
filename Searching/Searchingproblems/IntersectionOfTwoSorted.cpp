#include <bits/stdc++.h>
using namespace std;
//Brute force approach
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> v;
    for(int i=0;i<n;i++){
        int elem=arr1[i];
        for(int j=0;j<m;j++){
            if(elem<arr2[j]){
                break;
            }
            if(elem==arr2[j]){
                v.push_back(elem);
                arr2[j]=-3269;
                break;
            }
        }
    }
    return v;
}

//Two pointer solu
vector<int> findArrayIntersection1(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> v;
    int i=0,j=0;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return v;
}

int main(){
    
    return 0;
}