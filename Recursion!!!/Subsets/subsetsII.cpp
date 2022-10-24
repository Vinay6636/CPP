#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;



void solve(vector<int> nums,vector<int> output,int index,set<vector<int>> &ans){
        if(index >=nums.size()){
            ans.insert(output);
            return;
        }
        solve(nums,output,index+1,ans);
        output.push_back(nums[index]);
        sort(output.begin(),output.end());
        solve(nums,output,index+1,ans);
    }
 vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,output,index,ans);
        vector<vector<int>> sol(ans.begin(),ans.end());
        return sol;
    }


int main(){
    
    return 0;
}