#include <bits/stdc++.h>
using namespace std;

void rotate1(vector<int>& nums, int k) {
       vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++){
            temp[(i+k)%nums.size()]=nums[i];
        }
        nums=temp;
    }

void rotate(vector<int>& nums,int k){  //TLE
    while(k--){
            int val = nums.back(); //get last element
            nums.insert(nums.begin(), val); //insert at beginning
            nums.pop_back(); //delete last element and reduce size by 1
        }
}


int main(){
    
    return 0;
}