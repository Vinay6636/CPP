#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;

bool isBST(BinaryTreeNode<int>* root,int mini,int maxi){
    if(root==NULL) return true;
    if(root->data>mini && root->data<maxi){
        bool left = isBST(root->left,mini,root->data);
        bool right = isBST(root->right,root->data,maxi);
        return left && right; 
    }
    else return false;
}
bool validateBST(BinaryTreeNode<int>* root) 
{
    return isBST(root,INT_MIN,INT_MAX);
}

int main(){
    
    return 0;
}