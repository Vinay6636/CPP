#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
	if(root == NULL) return NULL;
    if(root->data < P->data && root->data < Q->data)
        return LCAinaBST(root->right,P,Q);
    if(root->data > P->data && root->data > Q->data)
        return LCAinaBST(root->left,P,Q);
    return root;
}


int main(){
    
    return 0;
}