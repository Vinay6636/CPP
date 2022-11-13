#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

// In inorder the tree is always in sorted order.
void solve(TreeNode<int> *root,vector<int> &ans){
    if(root==NULL) return;
    solve(root->left,ans);
    ans.push_back(root->data);
    solve(root->right,ans);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	vector<int> ans;
    solve(root,ans);
    return ans[k-1];
}

// 2nd method

int solve(TreeNode<int> *root,int &i,int k){
    if(root==NULL) return -1;
    int left = solve(root->left,i,k);
    if(left!=-1) return left;
    i++;
    if(i==k) return root->data;
    else return solve(root->right,i,k);
}
int kthSmallest(TreeNode<int> *root, int k)
{
    int i=0;
	int ans = solve(root,i,k);
    return ans;
}
int main(){
    
    return 0;
}