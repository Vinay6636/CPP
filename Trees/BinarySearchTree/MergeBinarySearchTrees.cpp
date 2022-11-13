#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

// Method 1 T.C : O(M+N)
void inorder(TreeNode<int> *root,vector<int> &bst){
    if(root == NULL) return;
    inorder(root->left,bst);
    bst.push_back(root->data);
    inorder(root->right,bst);
}
vector<int> mergeArrays(vector<int> arr1,vector<int> arr2){
    vector<int> ans(arr1.size()+arr2.size());
    int i=0,j=0;
    int k=0;
    while(i<arr1.size() && j<arr2.size()){
        if(arr1[i]<arr2[j]) ans[k++]=arr1[i++];
        else ans[k++] = arr2[j++];
    }
    while(i<arr1.size()){
        ans[k++]=arr1[i++];
    }
    while(j<arr2.size()){
        ans[k++]=arr2[j++];
    }

    return ans;
}
TreeNode<int>* solve(int s,int e,vector<int> &ans){
    if(s>e) return NULL;
    int mid = (s+e)/2;
    TreeNode<int>* root = new TreeNode<int>(ans[mid]);
    root->left = solve(s,mid-1,ans);
    root->right = solve(mid+1,e,ans);
    return root;
} 

TreeNode<int> *mergeBST(TreeNode<int> *root1, TreeNode<int> *root2){
    vector<int> bst1,bst2;
    inorder(root1,bst1);
    inorder(root2,bst2);
    
    vector<int> mergeArray = mergeArrays(bst1,bst2);
    int s =0,e=mergeArray.size()-1;
    return solve(s,e,mergeArray);
}

int main(){
    
    return 0;
}