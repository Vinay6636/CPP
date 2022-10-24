#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;
    // In power set the no of elements are 2^n[n is the size of the elements].

void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
        if(index >= nums.size()){
            ans.push_back(output);
            return;
        }
        // excluding the element
        solve(nums,output,index+1,ans);
        int element =  nums[index];
        output.push_back(element);
        //including the element
        solve(nums,output,index+1,ans);
    }

vector<vector<int>> subsets(vector<int>& nums) {
     // In power set the no of elements are 2^n[n is the size of the elements].
    vector<vector<int>> ans;
    vector<int> output;
    int index  = 0;
    solve(nums,output,index,ans);
    return ans;
}


int main(){
    vector<int> nums={1,2,3};
    return 0;
}