#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

void inorder(BinaryTreeNode<int>* root,vector<int> &ans){
    if(root == NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	vector<int> ans;
    inorder(root,ans);
    int i=0,j=ans.size()-1;
    while(i<j){
        if(ans[i]+ans[j]==target) return true;
        if(ans[i]+ans[j]>target) j--;
        if(ans[i]+ans[j]<target) i++;
    }
    return false;
}
int main(){
    
    return 0;
}