#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Constants
const ll PI= 3.141592653589793238;


void inorder(BinaryTreeNode<int> *root,int &count){
    if(root == NULL){
        return;
    }
    inorder(root->left,count);
    if(root->left == NULL  && root->right == NULL){
        count++;
    }
    inorder(root->right,count);
}
int noOfLeafNodes(BinaryTreeNode<int> *root){
    int cnt = 0;
    inorder(root,cnt);
    return cnt;
}

int main(){
    
    return 0;
}