#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

    void solve(vector<int> nums,int index,vector<vector<int>> &ans){
        if(index>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=index;j<nums.size();j++){
            swap(nums[index],nums[j]);
            solve(nums,index+1,ans);
            //backtraking --> It helps us to make the string as original one like it is in the starting stage.
            swap(nums[j],nums[index]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index =0;
        solve(nums,index,ans);
        return ans;
    }


int main(){
    
    return 0;
}