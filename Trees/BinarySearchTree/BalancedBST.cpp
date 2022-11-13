#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void inorder(TreeNode<int>* root,vector<int> &ans){
    if(root == NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
TreeNode<int>* solve(int s,int e,vector<int> &ans){
    if(s>e) return NULL;
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = solve(s,mid-1,ans);
    root->right = solve(mid+1,e,ans);
    return root;
} 

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    vector<int> ans;
    inorder(root,ans);
    return solve(0,ans.size()-1,ans);
}


int main(){
    
    return 0;
}